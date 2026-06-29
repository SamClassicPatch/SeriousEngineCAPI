#ifndef SECAPI_WORLD_WORLD_H
#define SECAPI_WORLD_WORLD_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CWorld_* CWorld_new();
SECAPI void CWorld_delete(CWorld_* p);

#ifdef __cplusplus
}
#endif

#endif
