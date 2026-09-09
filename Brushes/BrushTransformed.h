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

#ifndef SECAPI_BRUSHES_BRUSH_TRANSFORMED_H
#define SECAPI_BRUSHES_BRUSH_TRANSFORMED_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI FLOAT3D_* CWorkingVertex_wvx_vRelative(CWorkingVertex_* p);

SECAPI FLOATplane3D_* CWorkingPlane_wpl_plRelative(CWorkingPlane_* p);
SECAPI CMappingVectors_* CWorkingPlane_wpl_mvRelative(CWorkingPlane_* p);
SECAPI FLOATplane3D_* CWorkingPlane_wpl_plView(CWorkingPlane_* p);
SECAPI CMappingVectors_* CWorkingPlane_wpl_mvView(CWorkingPlane_* p);
SECAPI CPlanarGradients_* CWorkingPlane_wpl_pgOoK(CWorkingPlane_* p);
SECAPI BOOL* CWorkingPlane_wpl_bVisible(CWorkingPlane_* p);

SECAPI INDEX* CWorkingEdge_wed_iwvx0(CWorkingEdge_* p);
SECAPI INDEX* CWorkingEdge_wed_iwvx1(CWorkingEdge_* p);

#ifdef __cplusplus
}
#endif

#endif
