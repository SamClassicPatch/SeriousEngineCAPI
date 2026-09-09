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

#ifndef SECAPI_ENTITIES_SHADING_INFO_H
#define SECAPI_ENTITIES_SHADING_INFO_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CBrushPolygon_** CShadingInfo_si_pbpoPolygon(CShadingInfo_* p);
SECAPI CTerrain_** CShadingInfo_si_ptrTerrain(CShadingInfo_* p);
SECAPI FLOAT3D_* CShadingInfo_si_vNearPoint(CShadingInfo_* p);
SECAPI PIX* CShadingInfo_si_pixShadowU(CShadingInfo_* p);
SECAPI PIX* CShadingInfo_si_pixShadowV(CShadingInfo_* p);
SECAPI FLOAT* CShadingInfo_si_fUDRatio(CShadingInfo_* p);
SECAPI FLOAT* CShadingInfo_si_fLRRatio(CShadingInfo_* p);
SECAPI CEntity_** CShadingInfo_si_penEntity(CShadingInfo_* p);

#ifdef __cplusplus
}
#endif

#endif
