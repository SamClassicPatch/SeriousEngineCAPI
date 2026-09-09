/* Copyright (c) 2026 SeriousAlexej.
This program is free software; you can redistribute it and/or modify
it under the terms of version 2 of the GNU General Public License as published by
the Free Software Foundation


This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA. */

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
