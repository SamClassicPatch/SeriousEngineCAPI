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

#ifndef SECAPI_MATH_OBBOX_H
#define SECAPI_MATH_OBBOX_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI FLOATobbox3D_* FLOATobbox3D_new();
SECAPI FLOATobbox3D_* FLOATobbox3D_new_vaaa(const FLOAT3D_* vo,
                                            const FLOAT3D_* va0, const FLOAT3D_* va1, const FLOAT3D_* va2,
                                            FLOAT sz0, FLOAT sz1, FLOAT sz2);
SECAPI FLOATobbox3D_* FLOATobbox3D_new_aapr(const FLOATaabbox3D_* a, const FLOAT3D_* p, const FLOATmatrix3D_* r);
SECAPI FLOATobbox3D_* FLOATobbox3D_new_aa(const FLOATaabbox3D_* a);
SECAPI FLOATobbox3D_* FLOATobbox3D_clone(const FLOATobbox3D_* p);
SECAPI void FLOATobbox3D_delete(FLOATobbox3D_* p);
SECAPI void FLOATobbox3D_copy(FLOATobbox3D_* a, const FLOATobbox3D_* b);
SECAPI FLOAT3D_* FLOATobbox3D_box_vO(FLOATobbox3D_* p);
SECAPI FLOAT3D_* FLOATobbox3D_box_avAxis(FLOATobbox3D_* p, INDEX i);
SECAPI FLOAT* FLOATobbox3D_box_atSize(FLOATobbox3D_* p, INDEX i);
SECAPI void FLOATobbox3D_SetToNormalizedEmpty(FLOATobbox3D_* p);
SECAPI FLOAT FLOATobbox3D_TestAgainstPlane(const FLOATobbox3D_* p, const FLOATplane3D_* pl);
SECAPI BOOL FLOATobbox3D_HasContactWith(const FLOATobbox3D_* a, const FLOATobbox3D_* b);
SECAPI BOOL FLOATobbox3D_IsEmpty(const FLOATobbox3D_* p);

SECAPI DOUBLEobbox3D_* DOUBLEobbox3D_new();
SECAPI DOUBLEobbox3D_* DOUBLEobbox3D_new_vaaa(const DOUBLE3D_* vo,
                                              const DOUBLE3D_* va0, const DOUBLE3D_* va1, const DOUBLE3D_* va2,
                                              DOUBLE sz0, DOUBLE sz1, DOUBLE sz2);
SECAPI DOUBLEobbox3D_* DOUBLEobbox3D_new_aapr(const DOUBLEaabbox3D_* a, const DOUBLE3D_* p, const DOUBLEmatrix3D_* r);
SECAPI DOUBLEobbox3D_* DOUBLEobbox3D_new_aa(const DOUBLEaabbox3D_* a);
SECAPI DOUBLEobbox3D_* DOUBLEobbox3D_clone(const DOUBLEobbox3D_* p);
SECAPI void DOUBLEobbox3D_delete(DOUBLEobbox3D_* p);
SECAPI void DOUBLEobbox3D_copy(DOUBLEobbox3D_* a, const DOUBLEobbox3D_* b);
SECAPI DOUBLE3D_* DOUBLEobbox3D_box_vO(DOUBLEobbox3D_* p);
SECAPI DOUBLE3D_* DOUBLEobbox3D_box_avAxis(DOUBLEobbox3D_* p, INDEX i);
SECAPI DOUBLE* DOUBLEobbox3D_box_atSize(DOUBLEobbox3D_* p, INDEX i);
SECAPI void DOUBLEobbox3D_SetToNormalizedEmpty(DOUBLEobbox3D_* p);
SECAPI DOUBLE DOUBLEobbox3D_TestAgainstPlane(const DOUBLEobbox3D_* p, const DOUBLEplane3D_* pl);
SECAPI BOOL DOUBLEobbox3D_HasContactWith(const DOUBLEobbox3D_* a, const DOUBLEobbox3D_* b);
SECAPI BOOL DOUBLEobbox3D_IsEmpty(const DOUBLEobbox3D_* p);

SECAPI DOUBLEobbox3D_* FLOATtoDOUBLEobb(const FLOATobbox3D_* boxf);
SECAPI FLOATobbox3D_* DOUBLEtoFLOATobb(const DOUBLEobbox3D_* boxd);

#ifdef __cplusplus
}
#endif

#endif
