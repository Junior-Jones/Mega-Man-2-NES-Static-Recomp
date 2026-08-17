#ifndef MM2_FOUNDATION_CHECKS_H
#define MM2_FOUNDATION_CHECKS_H
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif
int mm2_check_static_seed(char *message, size_t message_cap);
int mm2_check_mmc1_model(char *message, size_t message_cap);
int mm2_check_proof_summary(const char *path, char *message, size_t message_cap);
int mm2_check_upstream_audit(const char *path, char *message, size_t message_cap);
int mm2_check_program_map_v06(const char *path, char *message, size_t message_cap);
int mm2_check_reviewed_generation_v06(const char *path, char *message, size_t message_cap);
#ifdef __cplusplus
}
#endif
#endif
