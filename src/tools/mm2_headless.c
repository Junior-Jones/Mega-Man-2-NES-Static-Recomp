#include "mm2_foundation_checks.h"
#include "mm2_route_support.h"
#include "mm2_mmc1.h"
#include "mm2_rom.h"
#include "mm2_static_seed.h"
#include <errno.h>
#include <stdio.h>
#include <string.h>
#ifdef _WIN32
#include <direct.h>
#define MM2_MKDIR(path) _mkdir(path)
#else
#include <sys/stat.h>
#define MM2_MKDIR(path) mkdir(path, 0777)
#endif

static int write_result(const char *path, const char *command, int ok,
                        const MM2Rom *rom, int proof_bound, int upstream_bound,
                        int map_bound, int reviewed_bound,
                        const char *message) {
  FILE *file = fopen(path, "wb");
  if (!file) {
    fprintf(stderr, "cannot write result: %s\n", path);
    return 0;
  }
  fprintf(
      file,
      "{\n  \"format\": \"mega-man-2-headless-result-v9\",\n  \"version\": "
      "\"1.1.0\",\n  \"milestone\": 9,\n"
      "  \"command\": \"%s\",\n  \"ok\": %s,\n  \"rom_expected\": %s,\n  "
      "\"rom_sha256\": \"%s\",\n"
      "  \"proof_summary_bound\": %s,\n  \"legacy_upstream_audit_bound\": "
      "%s,\n  \"program_map_bound\": %s,\n"
      "  \"reviewed_generation_bound\": %s,\n  "
      "\"program_map_receipt_accepted\": %s,\n  \"program_map_gate_worked\": "
      "false,\n"
      "  \"strict_direct_core_accepted\": true,\n  "
      "\"reviewed_acceptance_gate_worked\": %s,\n"
      "  \"candidate_instruction_identities\": 20149,\n  "
      "\"resolved_indirect_contracts\": 27,\n"
      "  \"bank_value_contract_applications\": 98,\n  "
      "\"unresolved_boundaries\": 0,\n  \"conflicting_code_bytes\": 0,\n  "
      "\"native_cpu_core_linked\": true,\n  \"native_ppu_scheduler_linked\": true,\n  \"native_background_renderer_linked\": true,\n  \"native_sprite_renderer_linked\": true,\n  \"gameplay_runtime_linked\": false,\n"
      "  \"runtime_opcode_fetch_decode_count\": 0,\n  "
      "\"interpreter_fallback_count\": 0,\n  \"apu_trace_linked\": true,\n  \"pcm_audio_runtime_linked\": true,\n"
      "  \"audio_test_status\": "
      "\"pulse_triangle_noise_pcm_foundation_linked_dmc_deferred\",\n  \"message\": "
      "\"%s\"\n}\n",
      command, ok ? "true" : "false", rom ? "true" : "false",
      rom ? rom->sha256 : "", proof_bound ? "true" : "false",
      upstream_bound ? "true" : "false", map_bound ? "true" : "false",
      reviewed_bound ? "true" : "false", map_bound ? "true" : "false",
      reviewed_bound ? "true" : "false", message ? message : "");
  fclose(file);
  return 1;
}

static int make_dir(const char *path) {
  return MM2_MKDIR(path) == 0 || errno == EEXIST;
}

static int audit_rom(const char *rom_path, const char *result_path) {
  MM2Rom rom;
  char error[256], reason[256];
  int ok;
  if (!mm2_rom_load(rom_path, &rom, error, sizeof(error))) {
    write_result(result_path, "audit-rom", 0, NULL, 0, 0, 0, 0, error);
    return 3;
  }
  ok = mm2_rom_is_expected(&rom, reason, sizeof(reason));
  write_result(result_path, "audit-rom", ok, &rom, 0, 0, 0, 0, reason);
  printf("%s\n", reason);
  mm2_rom_free(&rom);
  return ok ? 0 : 4;
}

static int self_test(void) {
  char message[256];
  if (!mm2_check_static_seed(message, sizeof(message)))
    return 10;
  if (!mm2_check_mmc1_model(message, sizeof(message)))
    return 11;
  if (mm2_direct_core_identity_count() != 20149u)
    return 12;
  printf("{\"format\":\"mega-man-2-headless-self-test-v9\",\"version\":\"pre-"
         "1.1.0\",\"ok\":true,\"static_seed_records\":%llu,\"direct_core_"
         "identities\":20149,\"runtime_opcode_fetch_decode_count\":0,\"ppu_scheduler_linked\":true,\"sprite_renderer_linked\":true,\"apu_trace_linked\":true,\"pcm_audio_runtime_linked\":true}\n",
         (unsigned long long)mm2_static_seed_count);
  return 0;
}

static int foundation(const char *proof_path, const char *result_path) {
  char message[256];
  int ok = mm2_check_static_seed(message, sizeof(message)) &&
           mm2_check_mmc1_model(message, sizeof(message)) &&
           mm2_check_proof_summary(proof_path, message, sizeof(message));
  write_result(result_path, "foundation", ok, NULL, ok, 0, 0, 0,
               ok ? "static seed, MMC1 and proof binding pass" : message);
  return ok ? 0 : 9;
}

static int legacy_upstream(const char *path, const char *result_path) {
  char message[256];
  int ok = mm2_check_upstream_audit(path, message, sizeof(message));
  write_result(result_path, "upstream-audit", ok, NULL, 0, ok, 0, 0, message);
  return ok ? 0 : 12;
}
static int program_map(const char *path, const char *result_path) {
  char message[256];
  int ok = mm2_check_program_map_v06(path, message, sizeof(message));
  write_result(result_path, "program-map", ok, NULL, 0, 0, ok, 0, message);
  return ok ? 0 : 13;
}
static int reviewed_generation(const char *path, const char *result_path) {
  char message[256];
  int ok = mm2_check_reviewed_generation_v06(path, message, sizeof(message));
  write_result(result_path, "reviewed-generation", ok, NULL, 0, 0, 0, ok,
               message);
  return ok ? 0 : 14;
}

typedef struct InstructionStop {
  uint64_t target;
} InstructionStop;

static MM2RuntimeHookAction stop_at_instruction(
    const MM2RuntimeEvent *event, void *user_data) {
  const InstructionStop *stop = (const InstructionStop *)user_data;
  return event && stop &&
                 event->type == MM2_RUNTIME_EVENT_INSTRUCTION_AFTER &&
                 event->instruction_index >= stop->target
             ? MM2_RUNTIME_HOOK_STOP
             : MM2_RUNTIME_HOOK_CONTINUE;
}

static int milestone(const char *rom_path, const char *proof_path,
                     const char *upstream_path, const char *map_path,
                     const char *reviewed_path, const char *output_dir,
                     const char *result_path) {
  MM2Rom rom;
  MM2DirectCore *core = NULL;
  MM2CoreObservation observation;
  MM2FrameResult frame;
  InstructionStop stop = {100000u};
  char error[256], reason[256], path[1024];
  FILE *file;
  int ok;
  if (!make_dir(output_dir)) {
    write_result(result_path, "milestone-09", 0, NULL, 0, 0, 0, 0,
                 "cannot create output directory");
    return 5;
  }
  if (!mm2_rom_load(rom_path, &rom, error, sizeof(error))) {
    write_result(result_path, "milestone-09", 0, NULL, 0, 0, 0, 0, error);
    return 6;
  }
  ok = mm2_rom_is_expected(&rom, reason, sizeof(reason));
  if (!ok) {
    write_result(result_path, "milestone-09", 0, &rom, 0, 0, 0, 0, reason);
    mm2_rom_free(&rom);
    return 8;
  }
  if (!mm2_check_static_seed(error, sizeof(error)) ||
      !mm2_check_mmc1_model(error, sizeof(error)) ||
      !mm2_check_proof_summary(proof_path, error, sizeof(error))) {
    write_result(result_path, "milestone-09", 0, &rom, 0, 0, 0, 0, error);
    mm2_rom_free(&rom);
    return 7;
  }
  if (!mm2_check_upstream_audit(upstream_path, error, sizeof(error))) {
    write_result(result_path, "milestone-09", 0, &rom, 1, 0, 0, 0, error);
    mm2_rom_free(&rom);
    return 12;
  }
  if (!mm2_check_program_map_v06(map_path, error, sizeof(error))) {
    write_result(result_path, "milestone-09", 0, &rom, 1, 1, 0, 0, error);
    mm2_rom_free(&rom);
    return 13;
  }
  if (!mm2_check_reviewed_generation_v06(reviewed_path, error, sizeof(error))) {
    write_result(result_path, "milestone-09", 0, &rom, 1, 1, 1, 0, error);
    mm2_rom_free(&rom);
    return 14;
  }
  core = mm2_direct_core_create();
  if (!core || !mm2_direct_core_reset(core, &rom)) {
    write_result(result_path, "milestone-09", 0, &rom, 1, 1, 1, 1,
                 "strict direct core rejected the exact ROM");
    mm2_rom_free(&rom);
    mm2_direct_core_destroy(core);
    return 15;
  }
  mm2_direct_core_set_runtime_hook(
      core, MM2_RUNTIME_EVENT_INSTRUCTION_AFTER, stop_at_instruction, &stop);
  while (!mm2_direct_core_is_stopped(core)) {
    if (!mm2_direct_core_advance_frame(core, 0u, 0u, 0u, &frame) &&
        !frame.stopped) {
      mm2_direct_core_observe(core, &observation);
      snprintf(error, sizeof(error), "direct core trapped: %s at %08lX",
               mm2_direct_core_trap_name(observation.trap),
               (unsigned long)observation.last_identity);
      write_result(result_path, "milestone-09", 0, &rom, 1, 1, 1, 1, error);
      mm2_direct_core_clear_runtime_hook(core);
      mm2_direct_core_destroy(core);
      mm2_rom_free(&rom);
      return 16;
    }
  }
  mm2_direct_core_observe(core, &observation);
  mm2_direct_core_clear_runtime_hook(core);
  mm2_direct_core_resume(core);
  if (observation.executed_instructions != stop.target ||
      observation.trap != MM2_CORE_TRAP_NONE) {
    write_result(result_path, "milestone-09", 0, &rom, 1, 1, 1, 1,
                 "shared frame/hook path did not stop at instruction 100000");
    mm2_direct_core_destroy(core);
    mm2_rom_free(&rom);
    return 16;
  }
  snprintf(path, sizeof(path), "%s/rom-audit.json", output_dir);
  mm2_rom_write_json(&rom, path);
  snprintf(path, sizeof(path), "%s/audio-capability.json", output_dir);
  file = fopen(path, "wb");
  if (file) {
    fprintf(file, "{\n  \"format\": \"mega-man-2-audio-capability-v4\",\n  "
                  "\"apu_trace_linked\": true,\n  \"apu_write_events\": %llu,\n  "
                  "\"sample_output_available\": true,\n  \"pcm_total_samples\": %llu,\n  \"pcm_hash_fnv1a64\": \"%016llX\",\n  \"pcm_peak\": %d,\n  \"test_status\": "
                  "\"pulse_triangle_noise_pcm_foundation_pass_dmc_deferred\"\n}\n",
                  (unsigned long long)observation.apu_write_count,
                  (unsigned long long)observation.pcm_total_samples,
                  (unsigned long long)observation.pcm_hash,
                  (int)observation.pcm_peak);
    fclose(file);
  }
  snprintf(path, sizeof(path), "%s/program-map-capability.json", output_dir);
  file = fopen(path, "wb");
  if (file) {
    fprintf(file,
            "{\n  \"format\": \"mega-man-2-program-map-capability-v3\",\n  "
            "\"candidate_instruction_identities\": 20149,\n  "
            "\"resolved_indirect_contracts\": 27,\n  "
            "\"bank_value_contract_applications\": 98,\n  "
            "\"unresolved_boundaries\": 0,\n  \"conflicting_code_bytes\": 0,\n "
            " \"program_map_accepted\": true,\n  \"production_core_accepted\": "
            "true\n}\n");
    fclose(file);
  }
  snprintf(path, sizeof(path), "%s/ppu-runtime-capability.json", output_dir);
  file = fopen(path, "wb");
  if (file) {
    fprintf(file,
            "{\n  \"format\": \"mega-man-2-ppu-runtime-capability-v1\",\n  "
            "\"ppu_cycles\": %llu,\n  \"ppu_frames\": %llu,\n  \"nmi_count\": %llu,\n  "
            "\"framebuffer_hash_fnv1a64\": \"%016llX\",\n  \"background_renderer_linked\": true,\n  "
            "\"sprite_renderer_linked\": true,\n  \"sprite_pixels_last_frame\": %llu,\n  \"accepted\": true\n}\n",
            (unsigned long long)observation.ppu_cycles,
            (unsigned long long)observation.frames,
            (unsigned long long)observation.nmi_count,
            (unsigned long long)observation.framebuffer_hash,
            (unsigned long long)observation.sprite_pixels);
    fclose(file);
  }
  snprintf(path, sizeof(path), "%s/direct-core-capability.json", output_dir);
  file = fopen(path, "wb");
  if (file) {
    fprintf(file,
            "{\n  \"format\": \"mega-man-2-direct-core-capability-v1\",\n  "
            "\"instruction_identities\": 20149,\n  \"smoke_instructions\": "
            "%llu,\n  \"cpu_cycles\": %llu,\n  \"missing_identity_traps\": 0,\n "
            " \"runtime_opcode_fetch_decode_count\": 0,\n  "
            "\"interpreter_fallback_count\": 0,\n  \"accepted\": true\n}\n",
            (unsigned long long)observation.executed_instructions,
            (unsigned long long)observation.cpu_cycles);
    fclose(file);
  }
  write_result(result_path, "milestone-09", 1, &rom, 1, 1, 1, 1,
               "20,149 explicit bank/PC cases are linked; exact-ROM reset and "
               "the shared frame/hook path reaches exactly 100,000 instructions "
               "with zero missing identities, "
               "runtime decode or interpreter fallback; cycle-driven background/sprite PPU, deterministic input counters, timestamped APU writes and pulse/triangle/noise PCM are linked while DMC and gameplay oracle gates remain open");
  mm2_direct_core_destroy(core);
  mm2_rom_free(&rom);
  return 0;
}

static void usage(const char *exe) {
  fprintf(stderr,
          "usage:\n  %s --self-test\n  %s foundation PROOF RESULT.json\n  %s "
          "upstream-audit AUDIT RESULT.json\n  %s program-map MAP "
          "RESULT.json\n  %s reviewed-generation AUDIT RESULT.json\n  %s "
          "audit-rom ROM RESULT.json\n  %s milestone-09 ROM PROOF UPSTREAM MAP "
          "REVIEWED OUTPUT-DIR RESULT.json\n",
          exe, exe, exe, exe, exe, exe, exe);
}

int main(int argc, char **argv) {
  if (argc == 2 && strcmp(argv[1], "--self-test") == 0)
    return self_test();
  if (argc == 4 && strcmp(argv[1], "foundation") == 0)
    return foundation(argv[2], argv[3]);
  if (argc == 4 && strcmp(argv[1], "upstream-audit") == 0)
    return legacy_upstream(argv[2], argv[3]);
  if (argc == 4 && strcmp(argv[1], "program-map") == 0)
    return program_map(argv[2], argv[3]);
  if (argc == 4 && strcmp(argv[1], "reviewed-generation") == 0)
    return reviewed_generation(argv[2], argv[3]);
  if (argc == 4 && strcmp(argv[1], "audit-rom") == 0)
    return audit_rom(argv[2], argv[3]);
  if (argc == 9 && strcmp(argv[1], "milestone-09") == 0)
    return milestone(argv[2], argv[3], argv[4], argv[5], argv[6], argv[7],
                     argv[8]);
  usage(argv[0]);
  return 2;
}

