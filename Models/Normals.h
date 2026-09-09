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
