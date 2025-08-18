#ifndef SECAPI_TERRAIN_TERRAIN_MISC_H
#define SECAPI_TERRAIN_TERRAIN_MISC_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI UBYTE GetValueFromMask_(CTerrain_* ptrTerrain, INDEX iLayer, FLOAT3D_* vHitPoint);
SECAPI INDEX2D_* Calculate2dHitPoint_(CTerrain_* ptrTerrain, FLOAT3D_* vHitPoint);

#ifdef __cplusplus
}
#endif

#endif
