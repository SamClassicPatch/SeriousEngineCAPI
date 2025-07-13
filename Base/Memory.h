#ifndef SECAPI_BASE_MEMORY_H
#define SECAPI_BASE_MEMORY_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI void* AllocMemory_(SLONG memsize);
SECAPI void FreeMemory_(void* memory);

#ifdef __cplusplus
}
#endif

#endif
