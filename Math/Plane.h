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

#ifndef SECAPI_MATH_PLANE_H
#define SECAPI_MATH_PLANE_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

inline FLOAT3D_* FLOATplane3D_ToVector(FLOATplane3D_* p) { return (FLOAT3D_*)p; }
inline const FLOAT3D_* FLOATplane3D_ToVector_const(const FLOATplane3D_* p) { return (const FLOAT3D_*)p; }

SECAPI FLOATplane3D_* FLOATplane3D_new();
SECAPI FLOATplane3D_* FLOATplane3D_new_nd(const FLOAT3D_* n, const FLOAT d);
SECAPI FLOATplane3D_* FLOATplane3D_new_np(const FLOAT3D_* n, const FLOAT3D_* p);
SECAPI FLOATplane3D_* FLOATplane3D_new_ppp(const FLOAT3D_* p0, const FLOAT3D_* p1, const FLOAT3D_* p2);
SECAPI FLOATplane3D_* FLOATplane3D_clone(const FLOATplane3D_* p);
SECAPI void FLOATplane3D_delete(FLOATplane3D_* p);
SECAPI void FLOATplane3D_copy(FLOATplane3D_* a, const FLOATplane3D_* b);
SECAPI FLOAT* FLOATplane3D_Distance(FLOATplane3D_* p);
SECAPI const FLOAT* FLOATplane3D_Distance_const(const FLOATplane3D_* p);
SECAPI FLOAT3D_* FLOATplane3D_ReferencePoint(const FLOATplane3D_* p);
SECAPI FLOAT3D_* FLOATplane3D_ReferencePoint_origin(const FLOATplane3D_* p, const FLOAT3D_* o);
SECAPI FLOAT FLOATplane3D_PointDistance(const FLOATplane3D_* p, const FLOAT3D_* v);
SECAPI void FLOATplane3D_GetCoordinate(const FLOATplane3D_* p, INDEX i, FLOAT3D_* v);
SECAPI FLOAT FLOATplane3D_PlaneDistance(const FLOATplane3D_* a, const FLOATplane3D_* b);
SECAPI FLOAT3D_* FLOATplane3D_ProjectPoint(const FLOATplane3D_* p, const FLOAT3D_* v);
SECAPI FLOAT3D_* FLOATplane3D_ProjectDirection(const FLOATplane3D_* p, const FLOAT3D_* v);
SECAPI INDEX FLOATplane3D_GetMaxNormal(const FLOATplane3D_* p);
SECAPI FLOAT3D_* FLOATplane3D_DeprojectPoint(const FLOATplane3D_* p, const FLOATplane3D_* o, const FLOAT3D_* v);
SECAPI FLOAT3D_* FLOATplane3D_DeprojectDirection(const FLOATplane3D_* p, const FLOATplane3D_* o, const FLOAT3D_* v);
SECAPI void FLOATplane3D_Offset(FLOATplane3D_* p, FLOAT offset);
SECAPI FLOATplane3D_* FLOATplane3D_Flip(const FLOATplane3D_* p);
SECAPI FLOATplane3D_* FLOATplane3D_Plus(const FLOATplane3D_* p, const FLOAT3D_* v);
SECAPI void FLOATplane3D_PlusInplace(FLOATplane3D_* p, const FLOAT3D_* v);
SECAPI FLOATplane3D_* FLOATplane3D_Minus(const FLOATplane3D_* p, const FLOAT3D_* v);
SECAPI void FLOATplane3D_MinusInplace(FLOATplane3D_* p, const FLOAT3D_* v);
SECAPI FLOATplane3D_* FLOATplane3D_Multiply(const FLOATplane3D_* p, const FLOATmatrix3D_* m);
SECAPI void FLOATplane3D_MultiplyInplace(FLOATplane3D_* p, const FLOATmatrix3D_* m);

inline DOUBLE3D_* DOUBLEplane3D_ToVector(DOUBLEplane3D_* p) { return (DOUBLE3D_*)p; }
inline const DOUBLE3D_* DOUBLEplane3D_ToVector_const(const DOUBLEplane3D_* p) { return (const DOUBLE3D_*)p; }

SECAPI DOUBLEplane3D_* DOUBLEplane3D_new();
SECAPI DOUBLEplane3D_* DOUBLEplane3D_new_nd(const DOUBLE3D_* n, const DOUBLE d);
SECAPI DOUBLEplane3D_* DOUBLEplane3D_new_np(const DOUBLE3D_* n, const DOUBLE3D_* p);
SECAPI DOUBLEplane3D_* DOUBLEplane3D_new_ppp(const DOUBLE3D_* p0, const DOUBLE3D_* p1, const DOUBLE3D_* p2);
SECAPI DOUBLEplane3D_* DOUBLEplane3D_clone(const DOUBLEplane3D_* p);
SECAPI void DOUBLEplane3D_delete(DOUBLEplane3D_* p);
SECAPI void DOUBLEplane3D_copy(DOUBLEplane3D_* a, const DOUBLEplane3D_* b);
SECAPI DOUBLE* DOUBLEplane3D_Distance(DOUBLEplane3D_* p);
SECAPI const DOUBLE* DOUBLEplane3D_Distance_const(const DOUBLEplane3D_* p);
SECAPI DOUBLE3D_* DOUBLEplane3D_ReferencePoint(const DOUBLEplane3D_* p);
SECAPI DOUBLE3D_* DOUBLEplane3D_ReferencePoint_origin(const DOUBLEplane3D_* p, const DOUBLE3D_* o);
SECAPI DOUBLE DOUBLEplane3D_PointDistance(const DOUBLEplane3D_* p, const DOUBLE3D_* v);
SECAPI void DOUBLEplane3D_GetCoordinate(const DOUBLEplane3D_* p, INDEX i, DOUBLE3D_* v);
SECAPI DOUBLE DOUBLEplane3D_PlaneDistance(const DOUBLEplane3D_* a, const DOUBLEplane3D_* b);
SECAPI DOUBLE3D_* DOUBLEplane3D_ProjectPoint(const DOUBLEplane3D_* p, const DOUBLE3D_* v);
SECAPI DOUBLE3D_* DOUBLEplane3D_ProjectDirection(const DOUBLEplane3D_* p, const DOUBLE3D_* v);
SECAPI INDEX DOUBLEplane3D_GetMaxNormal(const DOUBLEplane3D_* p);
SECAPI DOUBLE3D_* DOUBLEplane3D_DeprojectPoint(const DOUBLEplane3D_* p, const DOUBLEplane3D_* o, const DOUBLE3D_* v);
SECAPI DOUBLE3D_* DOUBLEplane3D_DeprojectDirection(const DOUBLEplane3D_* p, const DOUBLEplane3D_* o, const DOUBLE3D_* v);
SECAPI void DOUBLEplane3D_Offset(DOUBLEplane3D_* p, DOUBLE offset);
SECAPI DOUBLEplane3D_* DOUBLEplane3D_Flip(const DOUBLEplane3D_* p);
SECAPI DOUBLEplane3D_* DOUBLEplane3D_Plus(const DOUBLEplane3D_* p, const DOUBLE3D_* v);
SECAPI void DOUBLEplane3D_PlusInplace(DOUBLEplane3D_* p, const DOUBLE3D_* v);
SECAPI DOUBLEplane3D_* DOUBLEplane3D_Minus(const DOUBLEplane3D_* p, const DOUBLE3D_* v);
SECAPI void DOUBLEplane3D_MinusInplace(DOUBLEplane3D_* p, const DOUBLE3D_* v);
SECAPI DOUBLEplane3D_* DOUBLEplane3D_Multiply(const DOUBLEplane3D_* p, const DOUBLEmatrix3D_* m);
SECAPI void DOUBLEplane3D_MultiplyInplace(DOUBLEplane3D_* p, const DOUBLEmatrix3D_* m);

SECAPI FLOATplane3D_* DOUBLEtoFLOATplane(const DOUBLEplane3D_* p);
SECAPI DOUBLEplane3D_* FLOATtoDOUBLEplane(const FLOATplane3D_* p);

#ifdef __cplusplus
}
#endif

#endif
