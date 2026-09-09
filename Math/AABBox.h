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

#ifndef SECAPI_MATH_AABBOX_H
#define SECAPI_MATH_AABBOX_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI INDEXaabbox2D_* INDEXaabbox2D_new();
SECAPI INDEXaabbox2D_* INDEXaabbox2D_new_p(const INDEX2D_* p);
SECAPI INDEXaabbox2D_* INDEXaabbox2D_new_pr(const INDEX2D_* p, INDEX r);
SECAPI INDEXaabbox2D_* INDEXaabbox2D_new_pp(const INDEX2D_* p1, const INDEX2D_* p2);
SECAPI INDEXaabbox2D_* INDEXaabbox2D_clone(const INDEXaabbox2D_* p);
SECAPI void INDEXaabbox2D_delete(INDEXaabbox2D_* p);
SECAPI void INDEXaabbox2D_copy(INDEXaabbox2D_* a, const INDEXaabbox2D_* b);
SECAPI INDEX2D_* INDEXaabbox2D_minvect(INDEXaabbox2D_* p);
SECAPI INDEX2D_* INDEXaabbox2D_maxvect(INDEXaabbox2D_* p);
SECAPI void INDEXaabbox2D_SetToNormalizedEmpty(INDEXaabbox2D_* p);
SECAPI void INDEXaabbox2D_UniteInplace(INDEXaabbox2D_* a, const INDEXaabbox2D_* b);
SECAPI void INDEXaabbox2D_IntersectInplace(INDEXaabbox2D_* a, const INDEXaabbox2D_* b);
SECAPI INDEXaabbox2D_* INDEXaabbox2D_Intersect(const INDEXaabbox2D_* a, const INDEXaabbox2D_* b);
SECAPI void INDEXaabbox2D_MoveAdd(INDEXaabbox2D_* p, const INDEX2D_* v);
SECAPI void INDEXaabbox2D_MoveSub(INDEXaabbox2D_* p, const INDEX2D_* v);
SECAPI BOOL INDEXaabbox2D_equal(const INDEXaabbox2D_* a, const INDEXaabbox2D_* b);
SECAPI BOOL INDEXaabbox2D_notequal(const INDEXaabbox2D_* a, const INDEXaabbox2D_* b);
SECAPI BOOL INDEXaabbox2D_Contains(const INDEXaabbox2D_* a, const INDEXaabbox2D_* b);
SECAPI BOOL INDEXaabbox2D_Contained(const INDEXaabbox2D_* a, const INDEXaabbox2D_* b);
SECAPI INDEX2D_* INDEXaabbox2D_Size(const INDEXaabbox2D_* p);
SECAPI INDEX2D_* INDEXaabbox2D_Center(const INDEXaabbox2D_* p);
SECAPI BOOL INDEXaabbox2D_IsEmpty(const INDEXaabbox2D_* p);
SECAPI BOOL INDEXaabbox2D_HasContactWith(const INDEXaabbox2D_* a, const INDEXaabbox2D_* b);
SECAPI BOOL INDEXaabbox2D_HasContactWith_fuzzy(const INDEXaabbox2D_* a, const INDEXaabbox2D_* b, INDEX epsilon);
SECAPI BOOL INDEXaabbox2D_TouchesSphere(const INDEXaabbox2D_* p, const INDEX2D_* sc, INDEX sr);
SECAPI void INDEXaabbox2D_Expand(INDEXaabbox2D_* p, INDEX t);
SECAPI void INDEXaabbox2D_ExpandByFactor(INDEXaabbox2D_* p, INDEX t);
SECAPI void INDEXaabbox2D_StretchByFactor(INDEXaabbox2D_* p, INDEX t);
SECAPI void INDEXaabbox2D_StretchByVector(INDEXaabbox2D_* p, INDEX2D_* v);

SECAPI FLOATaabbox2D_* FLOATaabbox2D_new();
SECAPI FLOATaabbox2D_* FLOATaabbox2D_new_p(const FLOAT2D_* p);
SECAPI FLOATaabbox2D_* FLOATaabbox2D_new_pr(const FLOAT2D_* p, FLOAT r);
SECAPI FLOATaabbox2D_* FLOATaabbox2D_new_pp(const FLOAT2D_* p1, const FLOAT2D_* p2);
SECAPI FLOATaabbox2D_* FLOATaabbox2D_clone(const FLOATaabbox2D_* p);
SECAPI void FLOATaabbox2D_delete(FLOATaabbox2D_* p);
SECAPI void FLOATaabbox2D_copy(FLOATaabbox2D_* a, const FLOATaabbox2D_* b);
SECAPI FLOAT2D_* FLOATaabbox2D_minvect(FLOATaabbox2D_* p);
SECAPI FLOAT2D_* FLOATaabbox2D_maxvect(FLOATaabbox2D_* p);
SECAPI void FLOATaabbox2D_SetToNormalizedEmpty(FLOATaabbox2D_* p);
SECAPI void FLOATaabbox2D_UniteInplace(FLOATaabbox2D_* a, const FLOATaabbox2D_* b);
SECAPI void FLOATaabbox2D_IntersectInplace(FLOATaabbox2D_* a, const FLOATaabbox2D_* b);
SECAPI FLOATaabbox2D_* FLOATaabbox2D_Intersect(const FLOATaabbox2D_* a, const FLOATaabbox2D_* b);
SECAPI void FLOATaabbox2D_MoveAdd(FLOATaabbox2D_* p, const FLOAT2D_* v);
SECAPI void FLOATaabbox2D_MoveSub(FLOATaabbox2D_* p, const FLOAT2D_* v);
SECAPI BOOL FLOATaabbox2D_equal(const FLOATaabbox2D_* a, const FLOATaabbox2D_* b);
SECAPI BOOL FLOATaabbox2D_notequal(const FLOATaabbox2D_* a, const FLOATaabbox2D_* b);
SECAPI BOOL FLOATaabbox2D_Contains(const FLOATaabbox2D_* a, const FLOATaabbox2D_* b);
SECAPI BOOL FLOATaabbox2D_Contained(const FLOATaabbox2D_* a, const FLOATaabbox2D_* b);
SECAPI FLOAT2D_* FLOATaabbox2D_Size(const FLOATaabbox2D_* p);
SECAPI FLOAT2D_* FLOATaabbox2D_Center(const FLOATaabbox2D_* p);
SECAPI BOOL FLOATaabbox2D_IsEmpty(const FLOATaabbox2D_* p);
SECAPI BOOL FLOATaabbox2D_HasContactWith(const FLOATaabbox2D_* a, const FLOATaabbox2D_* b);
SECAPI BOOL FLOATaabbox2D_HasContactWith_fuzzy(const FLOATaabbox2D_* a, const FLOATaabbox2D_* b, FLOAT epsilon);
SECAPI BOOL FLOATaabbox2D_TouchesSphere(const FLOATaabbox2D_* p, const FLOAT2D_* sc, FLOAT sr);
SECAPI void FLOATaabbox2D_Expand(FLOATaabbox2D_* p, FLOAT t);
SECAPI void FLOATaabbox2D_ExpandByFactor(FLOATaabbox2D_* p, FLOAT t);
SECAPI void FLOATaabbox2D_StretchByFactor(FLOATaabbox2D_* p, FLOAT t);
SECAPI void FLOATaabbox2D_StretchByVector(FLOATaabbox2D_* p, FLOAT2D_* v);

SECAPI FLOATaabbox3D_* FLOATaabbox3D_new();
SECAPI FLOATaabbox3D_* FLOATaabbox3D_new_p(const FLOAT3D_* p);
SECAPI FLOATaabbox3D_* FLOATaabbox3D_new_pr(const FLOAT3D_* p, FLOAT r);
SECAPI FLOATaabbox3D_* FLOATaabbox3D_new_pp(const FLOAT3D_* p1, const FLOAT3D_* p2);
SECAPI FLOATaabbox3D_* FLOATaabbox3D_clone(const FLOATaabbox3D_* p);
SECAPI void FLOATaabbox3D_delete(FLOATaabbox3D_* p);
SECAPI void FLOATaabbox3D_copy(FLOATaabbox3D_* a, const FLOATaabbox3D_* b);
SECAPI FLOAT3D_* FLOATaabbox3D_minvect(FLOATaabbox3D_* p);
SECAPI FLOAT3D_* FLOATaabbox3D_maxvect(FLOATaabbox3D_* p);
SECAPI void FLOATaabbox3D_SetToNormalizedEmpty(FLOATaabbox3D_* p);
SECAPI void FLOATaabbox3D_UniteInplace(FLOATaabbox3D_* a, const FLOATaabbox3D_* b);
SECAPI void FLOATaabbox3D_IntersectInplace(FLOATaabbox3D_* a, const FLOATaabbox3D_* b);
SECAPI FLOATaabbox3D_* FLOATaabbox3D_Intersect(const FLOATaabbox3D_* a, const FLOATaabbox3D_* b);
SECAPI void FLOATaabbox3D_MoveAdd(FLOATaabbox3D_* p, const FLOAT3D_* v);
SECAPI void FLOATaabbox3D_MoveSub(FLOATaabbox3D_* p, const FLOAT3D_* v);
SECAPI BOOL FLOATaabbox3D_equal(const FLOATaabbox3D_* a, const FLOATaabbox3D_* b);
SECAPI BOOL FLOATaabbox3D_notequal(const FLOATaabbox3D_* a, const FLOATaabbox3D_* b);
SECAPI BOOL FLOATaabbox3D_Contains(const FLOATaabbox3D_* a, const FLOATaabbox3D_* b);
SECAPI BOOL FLOATaabbox3D_Contained(const FLOATaabbox3D_* a, const FLOATaabbox3D_* b);
SECAPI FLOAT3D_* FLOATaabbox3D_Size(const FLOATaabbox3D_* p);
SECAPI FLOAT3D_* FLOATaabbox3D_Center(const FLOATaabbox3D_* p);
SECAPI BOOL FLOATaabbox3D_IsEmpty(const FLOATaabbox3D_* p);
SECAPI BOOL FLOATaabbox3D_HasContactWith(const FLOATaabbox3D_* a, const FLOATaabbox3D_* b);
SECAPI BOOL FLOATaabbox3D_HasContactWith_fuzzy(const FLOATaabbox3D_* a, const FLOATaabbox3D_* b, FLOAT epsilon);
SECAPI BOOL FLOATaabbox3D_TouchesSphere(const FLOATaabbox3D_* p, const FLOAT3D_* sc, FLOAT sr);
SECAPI void FLOATaabbox3D_Expand(FLOATaabbox3D_* p, FLOAT t);
SECAPI void FLOATaabbox3D_ExpandByFactor(FLOATaabbox3D_* p, FLOAT t);
SECAPI void FLOATaabbox3D_StretchByFactor(FLOATaabbox3D_* p, FLOAT t);
SECAPI void FLOATaabbox3D_StretchByVector(FLOATaabbox3D_* p, FLOAT3D_* v);

SECAPI DOUBLEaabbox2D_* DOUBLEaabbox2D_new();
SECAPI DOUBLEaabbox2D_* DOUBLEaabbox2D_new_p(const DOUBLE2D_* p);
SECAPI DOUBLEaabbox2D_* DOUBLEaabbox2D_new_pr(const DOUBLE2D_* p, DOUBLE r);
SECAPI DOUBLEaabbox2D_* DOUBLEaabbox2D_new_pp(const DOUBLE2D_* p1, const DOUBLE2D_* p2);
SECAPI DOUBLEaabbox2D_* DOUBLEaabbox2D_clone(const DOUBLEaabbox2D_* p);
SECAPI void DOUBLEaabbox2D_delete(DOUBLEaabbox2D_* p);
SECAPI void DOUBLEaabbox2D_copy(DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b);
SECAPI DOUBLE2D_* DOUBLEaabbox2D_minvect(DOUBLEaabbox2D_* p);
SECAPI DOUBLE2D_* DOUBLEaabbox2D_maxvect(DOUBLEaabbox2D_* p);
SECAPI void DOUBLEaabbox2D_SetToNormalizedEmpty(DOUBLEaabbox2D_* p);
SECAPI void DOUBLEaabbox2D_UniteInplace(DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b);
SECAPI void DOUBLEaabbox2D_IntersectInplace(DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b);
SECAPI DOUBLEaabbox2D_* DOUBLEaabbox2D_Intersect(const DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b);
SECAPI void DOUBLEaabbox2D_MoveAdd(DOUBLEaabbox2D_* p, const DOUBLE2D_* v);
SECAPI void DOUBLEaabbox2D_MoveSub(DOUBLEaabbox2D_* p, const DOUBLE2D_* v);
SECAPI BOOL DOUBLEaabbox2D_equal(const DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b);
SECAPI BOOL DOUBLEaabbox2D_notequal(const DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b);
SECAPI BOOL DOUBLEaabbox2D_Contains(const DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b);
SECAPI BOOL DOUBLEaabbox2D_Contained(const DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b);
SECAPI DOUBLE2D_* DOUBLEaabbox2D_Size(const DOUBLEaabbox2D_* p);
SECAPI DOUBLE2D_* DOUBLEaabbox2D_Center(const DOUBLEaabbox2D_* p);
SECAPI BOOL DOUBLEaabbox2D_IsEmpty(const DOUBLEaabbox2D_* p);
SECAPI BOOL DOUBLEaabbox2D_HasContactWith(const DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b);
SECAPI BOOL DOUBLEaabbox2D_HasContactWith_fuzzy(const DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b, DOUBLE epsilon);
SECAPI BOOL DOUBLEaabbox2D_TouchesSphere(const DOUBLEaabbox2D_* p, const DOUBLE2D_* sc, DOUBLE sr);
SECAPI void DOUBLEaabbox2D_Expand(DOUBLEaabbox2D_* p, DOUBLE t);
SECAPI void DOUBLEaabbox2D_ExpandByFactor(DOUBLEaabbox2D_* p, DOUBLE t);
SECAPI void DOUBLEaabbox2D_StretchByFactor(DOUBLEaabbox2D_* p, DOUBLE t);
SECAPI void DOUBLEaabbox2D_StretchByVector(DOUBLEaabbox2D_* p, DOUBLE2D_* v);

SECAPI DOUBLEaabbox3D_* DOUBLEaabbox3D_new();
SECAPI DOUBLEaabbox3D_* DOUBLEaabbox3D_new_p(const DOUBLE3D_* p);
SECAPI DOUBLEaabbox3D_* DOUBLEaabbox3D_new_pr(const DOUBLE3D_* p, DOUBLE r);
SECAPI DOUBLEaabbox3D_* DOUBLEaabbox3D_new_pp(const DOUBLE3D_* p1, const DOUBLE3D_* p2);
SECAPI DOUBLEaabbox3D_* DOUBLEaabbox3D_clone(const DOUBLEaabbox3D_* p);
SECAPI void DOUBLEaabbox3D_delete(DOUBLEaabbox3D_* p);
SECAPI void DOUBLEaabbox3D_copy(DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b);
SECAPI DOUBLE3D_* DOUBLEaabbox3D_minvect(DOUBLEaabbox3D_* p);
SECAPI DOUBLE3D_* DOUBLEaabbox3D_maxvect(DOUBLEaabbox3D_* p);
SECAPI void DOUBLEaabbox3D_SetToNormalizedEmpty(DOUBLEaabbox3D_* p);
SECAPI void DOUBLEaabbox3D_UniteInplace(DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b);
SECAPI void DOUBLEaabbox3D_IntersectInplace(DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b);
SECAPI DOUBLEaabbox3D_* DOUBLEaabbox3D_Intersect(const DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b);
SECAPI void DOUBLEaabbox3D_MoveAdd(DOUBLEaabbox3D_* p, const DOUBLE3D_* v);
SECAPI void DOUBLEaabbox3D_MoveSub(DOUBLEaabbox3D_* p, const DOUBLE3D_* v);
SECAPI BOOL DOUBLEaabbox3D_equal(const DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b);
SECAPI BOOL DOUBLEaabbox3D_notequal(const DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b);
SECAPI BOOL DOUBLEaabbox3D_Contains(const DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b);
SECAPI BOOL DOUBLEaabbox3D_Contained(const DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b);
SECAPI DOUBLE3D_* DOUBLEaabbox3D_Size(const DOUBLEaabbox3D_* p);
SECAPI DOUBLE3D_* DOUBLEaabbox3D_Center(const DOUBLEaabbox3D_* p);
SECAPI BOOL DOUBLEaabbox3D_IsEmpty(const DOUBLEaabbox3D_* p);
SECAPI BOOL DOUBLEaabbox3D_HasContactWith(const DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b);
SECAPI BOOL DOUBLEaabbox3D_HasContactWith_fuzzy(const DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b, DOUBLE epsilon);
SECAPI BOOL DOUBLEaabbox3D_TouchesSphere(const DOUBLEaabbox3D_* p, const DOUBLE3D_* sc, DOUBLE sr);
SECAPI void DOUBLEaabbox3D_Expand(DOUBLEaabbox3D_* p, DOUBLE t);
SECAPI void DOUBLEaabbox3D_ExpandByFactor(DOUBLEaabbox3D_* p, DOUBLE t);
SECAPI void DOUBLEaabbox3D_StretchByFactor(DOUBLEaabbox3D_* p, DOUBLE t);
SECAPI void DOUBLEaabbox3D_StretchByVector(DOUBLEaabbox3D_* p, DOUBLE3D_* v);

SECAPI DOUBLEaabbox3D_* FLOATtoDOUBLEaabb(const FLOATaabbox3D_* plf);
SECAPI FLOATaabbox3D_* DOUBLEtoFLOATaabb(const DOUBLEaabbox3D_* pld);

#ifdef __cplusplus
}
#endif

#endif
