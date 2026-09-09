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
