#ifndef SECAPI_SOUND_SOUND_LISTENER_H
#define SECAPI_SOUND_SOUND_LISTENER_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CSoundListener_* CSoundListener_new();
SECAPI CSoundListener_* CSoundListener_clone(const CSoundListener_* p);
SECAPI void CSoundListener_delete(CSoundListener_* p);
SECAPI void CSoundListener_copy(CSoundListener_* a, const CSoundListener_* b);
SECAPI FLOAT3D_* CSoundListener_sli_vPosition(CSoundListener_* p);
SECAPI FLOATmatrix3D_* CSoundListener_sli_mRotation(CSoundListener_* p);
SECAPI FLOAT3D_* CSoundListener_sli_vSpeed(CSoundListener_* p);
SECAPI FLOAT* CSoundListener_sli_fVolume(CSoundListener_* p);
SECAPI FLOAT* CSoundListener_sli_fFilter(CSoundListener_* p);
SECAPI CEntity_** CSoundListener_sli_penEntity(CSoundListener_* p);
SECAPI INDEX* CSoundListener_sli_iEnvironmentType(CSoundListener_* p);
SECAPI FLOAT* CSoundListener_sli_fEnvironmentSize(CSoundListener_* p);

#ifdef __cplusplus
}
#endif

#endif
