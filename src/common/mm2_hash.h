#ifndef MM2_HASH_H
#define MM2_HASH_H
#include <stddef.h>
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
void mm2_sha256(const uint8_t *data, size_t len, uint8_t out[32]);
void mm2_hex(const uint8_t *data, size_t len, char *out);
uint32_t mm2_crc32(const uint8_t *data, size_t len);
#ifdef __cplusplus
}
#endif
#endif
