#include "internal/mm2_direct_core_internal.h"
#include "mm2_hash.h"

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <direct.h>
#include <io.h>
#else
#include <sys/stat.h>
#include <unistd.h>
#endif

#define MM2_SNAPSHOT_HEADER_SIZE 160u
#define MM2_SNAPSHOT_FORMAT_VERSION 1u
#define MM2_SNAPSHOT_FLAG_TRANSIENT_AUDIO_REMOVED 1u

static const uint8_t snapshot_magic[8] = {
    'M', 'M', '2', 'S', 'N', 'A', 'P', '1'
};

static void set_error(char *error, size_t capacity, const char *message) {
    if (!error || capacity == 0u) return;
    snprintf(error, capacity, "%s", message ? message : "snapshot error");
}

static void put32(uint8_t *output, uint32_t value) {
    output[0] = (uint8_t)value;
    output[1] = (uint8_t)(value >> 8);
    output[2] = (uint8_t)(value >> 16);
    output[3] = (uint8_t)(value >> 24);
}

static void put64(uint8_t *output, uint64_t value) {
    put32(output, (uint32_t)value);
    put32(output + 4, (uint32_t)(value >> 32));
}

static uint32_t get32(const uint8_t *input) {
    return (uint32_t)input[0] | ((uint32_t)input[1] << 8) |
           ((uint32_t)input[2] << 16) | ((uint32_t)input[3] << 24);
}

static uint64_t get64(const uint8_t *input) {
    return (uint64_t)get32(input) | ((uint64_t)get32(input + 4) << 32);
}

#ifdef _WIN32
static wchar_t *utf8_to_wide(const char *text) {
    int count;
    wchar_t *wide;
    if (!text) return NULL;
    count = MultiByteToWideChar(CP_UTF8, MB_ERR_INVALID_CHARS, text, -1,
                                NULL, 0);
    if (count <= 0) return NULL;
    wide = (wchar_t *)malloc((size_t)count * sizeof(*wide));
    if (!wide) return NULL;
    if (!MultiByteToWideChar(CP_UTF8, MB_ERR_INVALID_CHARS, text, -1,
                             wide, count)) {
        free(wide);
        return NULL;
    }
    return wide;
}

static FILE *open_utf8(const char *path, int writing) {
    wchar_t *wide = utf8_to_wide(path);
    FILE *file = NULL;
    if (!wide) return NULL;
    if (_wfopen_s(&file, wide, writing ? L"wb" : L"rb") != 0) file = NULL;
    free(wide);
    return file;
}

static int make_directory_utf8(const char *path) {
    wchar_t *wide = utf8_to_wide(path);
    int result;
    if (!wide) return 0;
    result = _wmkdir(wide) == 0 || errno == EEXIST;
    free(wide);
    return result;
}

static void remove_utf8(const char *path) {
    wchar_t *wide = utf8_to_wide(path);
    if (wide) {
        _wremove(wide);
        free(wide);
    }
}

static int replace_utf8(const char *temporary, const char *destination) {
    wchar_t *wide_temporary = utf8_to_wide(temporary);
    wchar_t *wide_destination = utf8_to_wide(destination);
    int result = wide_temporary && wide_destination &&
        MoveFileExW(wide_temporary, wide_destination,
                    MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH);
    free(wide_destination);
    free(wide_temporary);
    return result;
}

static int flush_file(FILE *file) {
    return fflush(file) == 0 && _commit(_fileno(file)) == 0;
}
#else
static FILE *open_utf8(const char *path, int writing) {
    return fopen(path, writing ? "wb" : "rb");
}

static int make_directory_utf8(const char *path) {
    return mkdir(path, 0777) == 0 || errno == EEXIST;
}

static void remove_utf8(const char *path) { remove(path); }

static int replace_utf8(const char *temporary, const char *destination) {
    return rename(temporary, destination) == 0;
}

static int flush_file(FILE *file) {
    return fflush(file) == 0 && fsync(fileno(file)) == 0;
}
#endif

static int ensure_parent_directory(const char *path) {
    const char *slash;
    char *parent;
    size_t length;
    if (!path) return 0;
    slash = strrchr(path, '/');
#ifdef _WIN32
    {
        const char *backslash = strrchr(path, '\\');
        if (backslash && (!slash || backslash > slash)) slash = backslash;
    }
#endif
    if (!slash) return 1;
    length = (size_t)(slash - path);
    if (length == 0u) return 1;
    parent = (char *)malloc(length + 1u);
    if (!parent) return 0;
    memcpy(parent, path, length);
    parent[length] = '\0';
    if (!make_directory_utf8(parent)) {
        free(parent);
        return 0;
    }
    free(parent);
    return 1;
}

static int rom_identity_valid(const MM2Rom *rom) {
    return rom && rom->prg && rom->prg_size == 0x40000u && rom->mapper == 1 &&
           strlen(rom->sha256) == 64u;
}

static void sanitize_snapshot_payload(MM2DirectCore *state) {
    memset(state->pcm_output, 0, sizeof(state->pcm_output));
    state->pcm_output_read = 0u;
    state->pcm_output_write = 0u;
    state->pcm_output_count = 0u;
    state->pcm_output_dropped = 0u;
    state->pcm_output_overflowed = 0u;
}

const char *mm2_snapshot_status_name(MM2SnapshotStatus status) {
    switch (status) {
    case MM2_SNAPSHOT_OK: return "ok";
    case MM2_SNAPSHOT_INVALID_ARGUMENT: return "invalid_argument";
    case MM2_SNAPSHOT_NO_MEMORY: return "no_memory";
    case MM2_SNAPSHOT_IO_ERROR: return "io_error";
    case MM2_SNAPSHOT_BAD_FORMAT: return "bad_format";
    case MM2_SNAPSHOT_UNSUPPORTED_VERSION: return "unsupported_version";
    case MM2_SNAPSHOT_ROM_MISMATCH: return "rom_mismatch";
    case MM2_SNAPSHOT_CORE_MISMATCH: return "core_mismatch";
    case MM2_SNAPSHOT_PAYLOAD_HASH_MISMATCH: return "payload_hash_mismatch";
    case MM2_SNAPSHOT_TRAILING_DATA: return "trailing_data";
    case MM2_SNAPSHOT_INVALID_STATE: return "invalid_state";
    default: return "unknown";
    }
}

MM2SnapshotStatus mm2_direct_core_snapshot_save(
    const MM2DirectCore *core, const MM2Rom *rom, const char *path,
    char *error, size_t error_capacity) {
    uint8_t header[MM2_SNAPSHOT_HEADER_SIZE] = {0};
    uint8_t digest[32];
    size_t state_size = mm2_direct_core_state_size();
    MM2DirectCore *payload;
    char *temporary;
    FILE *file;
    int ok;
    if (!core || !rom_identity_valid(rom) || !path || !*path) {
        set_error(error, error_capacity, "Invalid snapshot save arguments.");
        return MM2_SNAPSHOT_INVALID_ARGUMENT;
    }
    payload = (MM2DirectCore *)malloc(state_size);
    temporary = (char *)malloc(strlen(path) + 5u);
    if (!payload || !temporary) {
        free(temporary);
        free(payload);
        set_error(error, error_capacity, "Not enough memory to save the snapshot.");
        return MM2_SNAPSHOT_NO_MEMORY;
    }
    if (!mm2_direct_core_state_export(core, payload, state_size)) {
        free(temporary);
        free(payload);
        set_error(error, error_capacity, "The core state could not be exported.");
        return MM2_SNAPSHOT_INVALID_STATE;
    }
    sanitize_snapshot_payload(payload);
    mm2_sha256((const uint8_t *)payload, state_size, digest);
    memcpy(header, snapshot_magic, sizeof(snapshot_magic));
    put32(header + 8, MM2_SNAPSHOT_FORMAT_VERSION);
    put32(header + 12, MM2_SNAPSHOT_HEADER_SIZE);
    put64(header + 16, (uint64_t)state_size);
    put64(header + 24, (uint64_t)state_size);
    put32(header + 32, mm2_direct_core_generated_crc32());
    put32(header + 36, MM2_SNAPSHOT_FLAG_TRANSIENT_AUDIO_REMOVED);
    memcpy(header + 40, rom->sha256, 64u);
    memcpy(header + 104, digest, sizeof(digest));
    snprintf(temporary, strlen(path) + 5u, "%s.tmp", path);
    if (!ensure_parent_directory(path)) {
        free(temporary);
        free(payload);
        set_error(error, error_capacity, "The snapshot directory could not be created.");
        return MM2_SNAPSHOT_IO_ERROR;
    }
    file = open_utf8(temporary, 1);
    if (!file) {
        free(temporary);
        free(payload);
        set_error(error, error_capacity, "The temporary snapshot file could not be opened.");
        return MM2_SNAPSHOT_IO_ERROR;
    }
    ok = fwrite(header, 1u, sizeof(header), file) == sizeof(header) &&
         fwrite(payload, 1u, state_size, file) == state_size && flush_file(file);
    if (fclose(file) != 0) ok = 0;
    free(payload);
    if (!ok || !replace_utf8(temporary, path)) {
        remove_utf8(temporary);
        free(temporary);
        set_error(error, error_capacity, "The snapshot could not be committed atomically.");
        return MM2_SNAPSHOT_IO_ERROR;
    }
    free(temporary);
    set_error(error, error_capacity, "Snapshot saved.");
    return MM2_SNAPSHOT_OK;
}

MM2SnapshotStatus mm2_direct_core_snapshot_load(
    MM2DirectCore *core, const MM2Rom *rom, const char *path,
    char *error, size_t error_capacity) {
    uint8_t header[MM2_SNAPSHOT_HEADER_SIZE];
    uint8_t digest[32];
    uint8_t *payload = NULL;
    uint64_t payload_size;
    FILE *file;
    int extra;
    MM2SnapshotStatus status = MM2_SNAPSHOT_OK;
    if (!core || !rom_identity_valid(rom) || !path || !*path) {
        set_error(error, error_capacity, "Invalid snapshot load arguments.");
        return MM2_SNAPSHOT_INVALID_ARGUMENT;
    }
    file = open_utf8(path, 0);
    if (!file) {
        set_error(error, error_capacity, "The snapshot file could not be opened.");
        return MM2_SNAPSHOT_IO_ERROR;
    }
    if (fread(header, 1u, sizeof(header), file) != sizeof(header) ||
        memcmp(header, snapshot_magic, sizeof(snapshot_magic)) != 0 ||
        get32(header + 12) != MM2_SNAPSHOT_HEADER_SIZE) {
        status = MM2_SNAPSHOT_BAD_FORMAT;
        set_error(error, error_capacity, "The snapshot header is invalid or incomplete.");
        goto done;
    }
    if (get32(header + 8) != MM2_SNAPSHOT_FORMAT_VERSION) {
        status = MM2_SNAPSHOT_UNSUPPORTED_VERSION;
        set_error(error, error_capacity, "The snapshot format version is not supported.");
        goto done;
    }
    if (memcmp(header + 40, rom->sha256, 64u) != 0) {
        status = MM2_SNAPSHOT_ROM_MISMATCH;
        set_error(error, error_capacity, "The snapshot belongs to a different ROM.");
        goto done;
    }
    payload_size = get64(header + 16);
    if (payload_size != (uint64_t)mm2_direct_core_state_size() ||
        get64(header + 24) != payload_size ||
        get32(header + 32) != mm2_direct_core_generated_crc32() ||
        get32(header + 36) != MM2_SNAPSHOT_FLAG_TRANSIENT_AUDIO_REMOVED) {
        status = MM2_SNAPSHOT_CORE_MISMATCH;
        set_error(error, error_capacity, "The snapshot does not match this static core.");
        goto done;
    }
    payload = (uint8_t *)malloc((size_t)payload_size);
    if (!payload) {
        status = MM2_SNAPSHOT_NO_MEMORY;
        set_error(error, error_capacity, "Not enough memory to load the snapshot.");
        goto done;
    }
    if (fread(payload, 1u, (size_t)payload_size, file) != (size_t)payload_size) {
        status = MM2_SNAPSHOT_BAD_FORMAT;
        set_error(error, error_capacity, "The snapshot payload is incomplete.");
        goto done;
    }
    extra = fgetc(file);
    if (extra != EOF) {
        status = MM2_SNAPSHOT_TRAILING_DATA;
        set_error(error, error_capacity, "The snapshot contains trailing data.");
        goto done;
    }
    if (ferror(file)) {
        status = MM2_SNAPSHOT_IO_ERROR;
        set_error(error, error_capacity, "The snapshot could not be read completely.");
        goto done;
    }
    mm2_sha256(payload, (size_t)payload_size, digest);
    if (memcmp(digest, header + 104, sizeof(digest)) != 0) {
        status = MM2_SNAPSHOT_PAYLOAD_HASH_MISMATCH;
        set_error(error, error_capacity, "The snapshot payload hash is invalid.");
        goto done;
    }
    if (fclose(file) != 0) {
        file = NULL;
        status = MM2_SNAPSHOT_IO_ERROR;
        set_error(error, error_capacity, "The snapshot file could not be closed.");
        goto done;
    }
    file = NULL;
    if (!mm2_direct_core_state_import(core, payload, (size_t)payload_size, rom)) {
        status = MM2_SNAPSHOT_INVALID_STATE;
        set_error(error, error_capacity, "The snapshot contains invalid core state.");
        goto done;
    }
    set_error(error, error_capacity, "Snapshot loaded.");
done:
    free(payload);
    if (file && fclose(file) != 0 && status == MM2_SNAPSHOT_OK) {
        set_error(error, error_capacity, "The snapshot file could not be closed.");
        return MM2_SNAPSHOT_IO_ERROR;
    }
    return status;
}
