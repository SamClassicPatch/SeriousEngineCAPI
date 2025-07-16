#ifndef SECAPI_MODELS_NORMALS_H
#define SECAPI_MODELS_NORMALS_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_GOURAUDNORMALS 256

SECAPI FLOAT3D_* avGouraudNormals_(INDEX i);

SECAPI INDEX GouraudNormal_(const FLOAT3D_* vNormal);
SECAPI void CompressNormal_HQ_(const FLOAT3D_* vNormal, UBYTE* ubH, UBYTE* ubP);
SECAPI void DecompressNormal_HQ_(FLOAT3D_* vNormal, UBYTE ubH, UBYTE ubP);

#ifdef __cplusplus
}
#endif

#endif
