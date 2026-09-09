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

#include "AABBox.h"

typedef Vector<INDEX, 2> INDEX2D;
typedef AABBox<INDEX, 2> INDEXaabbox2D;

INDEXaabbox2D_* INDEXaabbox2D_new()
{
  return (INDEXaabbox2D_*)(new INDEXaabbox2D());
}

INDEXaabbox2D_* INDEXaabbox2D_new_p(const INDEX2D_* p)
{
  return (INDEXaabbox2D_*)(new INDEXaabbox2D(*((const INDEX2D*)p)));
}

INDEXaabbox2D_* INDEXaabbox2D_new_pr(const INDEX2D_* p, INDEX r)
{
  return (INDEXaabbox2D_*)(new INDEXaabbox2D(*((const INDEX2D*)p), r));
}

INDEXaabbox2D_* INDEXaabbox2D_new_pp(const INDEX2D_* p1, const INDEX2D_* p2)
{
  return (INDEXaabbox2D_*)(new INDEXaabbox2D(*((const INDEX2D*)p1), *((const INDEX2D*)p2)));
}

INDEXaabbox2D_* INDEXaabbox2D_clone(const INDEXaabbox2D_* p)
{
  return (INDEXaabbox2D_*)(new INDEXaabbox2D(*((const INDEXaabbox2D*)p)));
}

void INDEXaabbox2D_delete(INDEXaabbox2D_* p)
{
  delete ((INDEXaabbox2D*)p);
}

void INDEXaabbox2D_copy(INDEXaabbox2D_* a, const INDEXaabbox2D_* b)
{
  *((INDEXaabbox2D*)a) = *((const INDEXaabbox2D*)b);
}

INDEX2D_* INDEXaabbox2D_minvect(INDEXaabbox2D_* p)
{
  INDEXaabbox2D& b = *((INDEXaabbox2D*)p);
  return (INDEX2D_*)(&b.minvect);
}

INDEX2D_* INDEXaabbox2D_maxvect(INDEXaabbox2D_* p)
{
  INDEXaabbox2D& b = *((INDEXaabbox2D*)p);
  return (INDEX2D_*)(&b.maxvect);
}

void INDEXaabbox2D_SetToNormalizedEmpty(INDEXaabbox2D_* p)
{
  ((INDEXaabbox2D*)p)->SetToNormalizedEmpty();
}

void INDEXaabbox2D_UniteInplace(INDEXaabbox2D_* a, const INDEXaabbox2D_* b)
{
  INDEXaabbox2D& ab = *((INDEXaabbox2D*)a);
  const INDEXaabbox2D& bb = *((const INDEXaabbox2D*)b);
  ab |= bb;
}

void INDEXaabbox2D_IntersectInplace(INDEXaabbox2D_* a, const INDEXaabbox2D_* b)
{
  INDEXaabbox2D& ab = *((INDEXaabbox2D*)a);
  const INDEXaabbox2D& bb = *((const INDEXaabbox2D*)b);
  ab &= bb;
}

INDEXaabbox2D_* INDEXaabbox2D_Intersect(const INDEXaabbox2D_* a, const INDEXaabbox2D_* b)
{
  const INDEXaabbox2D& ab = *((INDEXaabbox2D*)a);
  const INDEXaabbox2D& bb = *((const INDEXaabbox2D*)b);
  return (INDEXaabbox2D_*)(new INDEXaabbox2D(ab & bb));
}

void INDEXaabbox2D_MoveAdd(INDEXaabbox2D_* p, const INDEX2D_* v)
{
  INDEXaabbox2D& pp = *((INDEXaabbox2D*)p);
  const INDEX2D& vv = *((const INDEX2D*)v);
  pp += vv;
}

void INDEXaabbox2D_MoveSub(INDEXaabbox2D_* p, const INDEX2D_* v)
{
  INDEXaabbox2D& pp = *((INDEXaabbox2D*)p);
  const INDEX2D& vv = *((const INDEX2D*)v);
  pp -= vv;
}

BOOL INDEXaabbox2D_equal(const INDEXaabbox2D_* a, const INDEXaabbox2D_* b)
{
  return *((const INDEXaabbox2D*)a) == *((const INDEXaabbox2D*)b);
}

BOOL INDEXaabbox2D_notequal(const INDEXaabbox2D_* a, const INDEXaabbox2D_* b)
{
  return *((const INDEXaabbox2D*)a) != *((const INDEXaabbox2D*)b);
}

BOOL INDEXaabbox2D_Contains(const INDEXaabbox2D_* a, const INDEXaabbox2D_* b)
{
  const INDEXaabbox2D& ab = *((INDEXaabbox2D*)a);
  const INDEXaabbox2D& bb = *((const INDEXaabbox2D*)b);
  return ab >= bb;
}

BOOL INDEXaabbox2D_Contained(const INDEXaabbox2D_* a, const INDEXaabbox2D_* b)
{
  const INDEXaabbox2D& ab = *((INDEXaabbox2D*)a);
  const INDEXaabbox2D& bb = *((const INDEXaabbox2D*)b);
  return ab <= bb;
}

INDEX2D_* INDEXaabbox2D_Size(const INDEXaabbox2D_* p)
{
  INDEX2D res = ((const INDEXaabbox2D*)p)->Size();
  return (INDEX2D_*)(new INDEX2D(res));
}

INDEX2D_* INDEXaabbox2D_Center(const INDEXaabbox2D_* p)
{
  INDEX2D res = ((const INDEXaabbox2D*)p)->Center();
  return (INDEX2D_*)(new INDEX2D(res));
}

BOOL INDEXaabbox2D_IsEmpty(const INDEXaabbox2D_* p)
{
  return ((const INDEXaabbox2D*)p)->IsEmpty();
}

BOOL INDEXaabbox2D_HasContactWith(const INDEXaabbox2D_* a, const INDEXaabbox2D_* b)
{
  return ((const INDEXaabbox2D*)a)->HasContactWith(*((const INDEXaabbox2D*)b));
}

BOOL INDEXaabbox2D_HasContactWith_fuzzy(const INDEXaabbox2D_* a, const INDEXaabbox2D_* b, INDEX epsilon)
{
  return ((const INDEXaabbox2D*)a)->HasContactWith(*((const INDEXaabbox2D*)b), epsilon);
}

BOOL INDEXaabbox2D_TouchesSphere(const INDEXaabbox2D_* p, const INDEX2D_* sc, INDEX sr)
{
  return ((const INDEXaabbox2D*)p)->TouchesSphere(*((const INDEX2D*)sc), sr);
}

void INDEXaabbox2D_Expand(INDEXaabbox2D_* p, INDEX t)
{
  ((INDEXaabbox2D*)p)->Expand(t);
}

void INDEXaabbox2D_ExpandByFactor(INDEXaabbox2D_* p, INDEX t)
{
  ((INDEXaabbox2D*)p)->ExpandByFactor(t);
}

void INDEXaabbox2D_StretchByFactor(INDEXaabbox2D_* p, INDEX t)
{
  ((INDEXaabbox2D*)p)->StretchByFactor(t);
}

void INDEXaabbox2D_StretchByVector(INDEXaabbox2D_* p, INDEX2D_* v)
{
  ((INDEXaabbox2D*)p)->StretchByVector(*((INDEX2D*)v));
}

FLOATaabbox2D_* FLOATaabbox2D_new()
{
  return (FLOATaabbox2D_*)(new FLOATaabbox2D());
}

FLOATaabbox2D_* FLOATaabbox2D_new_p(const FLOAT2D_* p)
{
  return (FLOATaabbox2D_*)(new FLOATaabbox2D(*((const FLOAT2D*)p)));
}

FLOATaabbox2D_* FLOATaabbox2D_new_pr(const FLOAT2D_* p, FLOAT r)
{
  return (FLOATaabbox2D_*)(new FLOATaabbox2D(*((const FLOAT2D*)p), r));
}

FLOATaabbox2D_* FLOATaabbox2D_new_pp(const FLOAT2D_* p1, const FLOAT2D_* p2)
{
  return (FLOATaabbox2D_*)(new FLOATaabbox2D(*((const FLOAT2D*)p1), *((const FLOAT2D*)p2)));
}

FLOATaabbox2D_* FLOATaabbox2D_clone(const FLOATaabbox2D_* p)
{
  return (FLOATaabbox2D_*)(new FLOATaabbox2D(*((const FLOATaabbox2D*)p)));
}

void FLOATaabbox2D_delete(FLOATaabbox2D_* p)
{
  delete ((FLOATaabbox2D*)p);
}

void FLOATaabbox2D_copy(FLOATaabbox2D_* a, const FLOATaabbox2D_* b)
{
  *((FLOATaabbox2D*)a) = *((const FLOATaabbox2D*)b);
}

FLOAT2D_* FLOATaabbox2D_minvect(FLOATaabbox2D_* p)
{
  FLOATaabbox2D& b = *((FLOATaabbox2D*)p);
  return (FLOAT2D_*)(&b.minvect);
}

FLOAT2D_* FLOATaabbox2D_maxvect(FLOATaabbox2D_* p)
{
  FLOATaabbox2D& b = *((FLOATaabbox2D*)p);
  return (FLOAT2D_*)(&b.maxvect);
}

void FLOATaabbox2D_SetToNormalizedEmpty(FLOATaabbox2D_* p)
{
  ((FLOATaabbox2D*)p)->SetToNormalizedEmpty();
}

void FLOATaabbox2D_UniteInplace(FLOATaabbox2D_* a, const FLOATaabbox2D_* b)
{
  FLOATaabbox2D& ab = *((FLOATaabbox2D*)a);
  const FLOATaabbox2D& bb = *((const FLOATaabbox2D*)b);
  ab |= bb;
}

void FLOATaabbox2D_IntersectInplace(FLOATaabbox2D_* a, const FLOATaabbox2D_* b)
{
  FLOATaabbox2D& ab = *((FLOATaabbox2D*)a);
  const FLOATaabbox2D& bb = *((const FLOATaabbox2D*)b);
  ab &= bb;
}

FLOATaabbox2D_* FLOATaabbox2D_Intersect(const FLOATaabbox2D_* a, const FLOATaabbox2D_* b)
{
  const FLOATaabbox2D& ab = *((FLOATaabbox2D*)a);
  const FLOATaabbox2D& bb = *((const FLOATaabbox2D*)b);
  return (FLOATaabbox2D_*)(new FLOATaabbox2D(ab & bb));
}

void FLOATaabbox2D_MoveAdd(FLOATaabbox2D_* p, const FLOAT2D_* v)
{
  FLOATaabbox2D& pp = *((FLOATaabbox2D*)p);
  const FLOAT2D& vv = *((const FLOAT2D*)v);
  pp += vv;
}

void FLOATaabbox2D_MoveSub(FLOATaabbox2D_* p, const FLOAT2D_* v)
{
  FLOATaabbox2D& pp = *((FLOATaabbox2D*)p);
  const FLOAT2D& vv = *((const FLOAT2D*)v);
  pp -= vv;
}

BOOL FLOATaabbox2D_equal(const FLOATaabbox2D_* a, const FLOATaabbox2D_* b)
{
  return *((const FLOATaabbox2D*)a) == *((const FLOATaabbox2D*)b);
}

BOOL FLOATaabbox2D_notequal(const FLOATaabbox2D_* a, const FLOATaabbox2D_* b)
{
  return *((const FLOATaabbox2D*)a) != *((const FLOATaabbox2D*)b);
}

BOOL FLOATaabbox2D_Contains(const FLOATaabbox2D_* a, const FLOATaabbox2D_* b)
{
  const FLOATaabbox2D& ab = *((FLOATaabbox2D*)a);
  const FLOATaabbox2D& bb = *((const FLOATaabbox2D*)b);
  return ab >= bb;
}

BOOL FLOATaabbox2D_Contained(const FLOATaabbox2D_* a, const FLOATaabbox2D_* b)
{
  const FLOATaabbox2D& ab = *((FLOATaabbox2D*)a);
  const FLOATaabbox2D& bb = *((const FLOATaabbox2D*)b);
  return ab <= bb;
}

FLOAT2D_* FLOATaabbox2D_Size(const FLOATaabbox2D_* p)
{
  FLOAT2D res = ((const FLOATaabbox2D*)p)->Size();
  return (FLOAT2D_*)(new FLOAT2D(res));
}

FLOAT2D_* FLOATaabbox2D_Center(const FLOATaabbox2D_* p)
{
  FLOAT2D res = ((const FLOATaabbox2D*)p)->Center();
  return (FLOAT2D_*)(new FLOAT2D(res));
}

BOOL FLOATaabbox2D_IsEmpty(const FLOATaabbox2D_* p)
{
  return ((const FLOATaabbox2D*)p)->IsEmpty();
}

BOOL FLOATaabbox2D_HasContactWith(const FLOATaabbox2D_* a, const FLOATaabbox2D_* b)
{
  return ((const FLOATaabbox2D*)a)->HasContactWith(*((const FLOATaabbox2D*)b));
}

BOOL FLOATaabbox2D_HasContactWith_fuzzy(const FLOATaabbox2D_* a, const FLOATaabbox2D_* b, FLOAT epsilon)
{
  return ((const FLOATaabbox2D*)a)->HasContactWith(*((const FLOATaabbox2D*)b), epsilon);
}

BOOL FLOATaabbox2D_TouchesSphere(const FLOATaabbox2D_* p, const FLOAT2D_* sc, FLOAT sr)
{
  return ((const FLOATaabbox2D*)p)->TouchesSphere(*((const FLOAT2D*)sc), sr);
}

void FLOATaabbox2D_Expand(FLOATaabbox2D_* p, FLOAT t)
{
  ((FLOATaabbox2D*)p)->Expand(t);
}

void FLOATaabbox2D_ExpandByFactor(FLOATaabbox2D_* p, FLOAT t)
{
  ((FLOATaabbox2D*)p)->ExpandByFactor(t);
}

void FLOATaabbox2D_StretchByFactor(FLOATaabbox2D_* p, FLOAT t)
{
  ((FLOATaabbox2D*)p)->StretchByFactor(t);
}

void FLOATaabbox2D_StretchByVector(FLOATaabbox2D_* p, FLOAT2D_* v)
{
  ((FLOATaabbox2D*)p)->StretchByVector(*((FLOAT2D*)v));
}

FLOATaabbox3D_* FLOATaabbox3D_new()
{
  return (FLOATaabbox3D_*)(new FLOATaabbox3D());
}

FLOATaabbox3D_* FLOATaabbox3D_new_p(const FLOAT3D_* p)
{
  return (FLOATaabbox3D_*)(new FLOATaabbox3D(*((const FLOAT3D*)p)));
}

FLOATaabbox3D_* FLOATaabbox3D_new_pr(const FLOAT3D_* p, FLOAT r)
{
  return (FLOATaabbox3D_*)(new FLOATaabbox3D(*((const FLOAT3D*)p), r));
}

FLOATaabbox3D_* FLOATaabbox3D_new_pp(const FLOAT3D_* p1, const FLOAT3D_* p2)
{
  return (FLOATaabbox3D_*)(new FLOATaabbox3D(*((const FLOAT3D*)p1), *((const FLOAT3D*)p2)));
}

FLOATaabbox3D_* FLOATaabbox3D_clone(const FLOATaabbox3D_* p)
{
  return (FLOATaabbox3D_*)(new FLOATaabbox3D(*((const FLOATaabbox3D*)p)));
}

void FLOATaabbox3D_delete(FLOATaabbox3D_* p)
{
  delete ((FLOATaabbox3D*)p);
}

void FLOATaabbox3D_copy(FLOATaabbox3D_* a, const FLOATaabbox3D_* b)
{
  *((FLOATaabbox3D*)a) = *((const FLOATaabbox3D*)b);
}

FLOAT3D_* FLOATaabbox3D_minvect(FLOATaabbox3D_* p)
{
  FLOATaabbox3D& b = *((FLOATaabbox3D*)p);
  return (FLOAT3D_*)(&b.minvect);
}

FLOAT3D_* FLOATaabbox3D_maxvect(FLOATaabbox3D_* p)
{
  FLOATaabbox3D& b = *((FLOATaabbox3D*)p);
  return (FLOAT3D_*)(&b.maxvect);
}

void FLOATaabbox3D_SetToNormalizedEmpty(FLOATaabbox3D_* p)
{
  ((FLOATaabbox3D*)p)->SetToNormalizedEmpty();
}

void FLOATaabbox3D_UniteInplace(FLOATaabbox3D_* a, const FLOATaabbox3D_* b)
{
  FLOATaabbox3D& ab = *((FLOATaabbox3D*)a);
  const FLOATaabbox3D& bb = *((const FLOATaabbox3D*)b);
  ab |= bb;
}

void FLOATaabbox3D_IntersectInplace(FLOATaabbox3D_* a, const FLOATaabbox3D_* b)
{
  FLOATaabbox3D& ab = *((FLOATaabbox3D*)a);
  const FLOATaabbox3D& bb = *((const FLOATaabbox3D*)b);
  ab &= bb;
}

FLOATaabbox3D_* FLOATaabbox3D_Intersect(const FLOATaabbox3D_* a, const FLOATaabbox3D_* b)
{
  const FLOATaabbox3D& ab = *((FLOATaabbox3D*)a);
  const FLOATaabbox3D& bb = *((const FLOATaabbox3D*)b);
  return (FLOATaabbox3D_*)(new FLOATaabbox3D(ab & bb));
}

void FLOATaabbox3D_MoveAdd(FLOATaabbox3D_* p, const FLOAT3D_* v)
{
  FLOATaabbox3D& pp = *((FLOATaabbox3D*)p);
  const FLOAT3D& vv = *((const FLOAT3D*)v);
  pp += vv;
}

void FLOATaabbox3D_MoveSub(FLOATaabbox3D_* p, const FLOAT3D_* v)
{
  FLOATaabbox3D& pp = *((FLOATaabbox3D*)p);
  const FLOAT3D& vv = *((const FLOAT3D*)v);
  pp -= vv;
}

BOOL FLOATaabbox3D_equal(const FLOATaabbox3D_* a, const FLOATaabbox3D_* b)
{
  return *((const FLOATaabbox3D*)a) == *((const FLOATaabbox3D*)b);
}

BOOL FLOATaabbox3D_notequal(const FLOATaabbox3D_* a, const FLOATaabbox3D_* b)
{
  return *((const FLOATaabbox3D*)a) != *((const FLOATaabbox3D*)b);
}

BOOL FLOATaabbox3D_Contains(const FLOATaabbox3D_* a, const FLOATaabbox3D_* b)
{
  const FLOATaabbox3D& ab = *((FLOATaabbox3D*)a);
  const FLOATaabbox3D& bb = *((const FLOATaabbox3D*)b);
  return ab >= bb;
}

BOOL FLOATaabbox3D_Contained(const FLOATaabbox3D_* a, const FLOATaabbox3D_* b)
{
  const FLOATaabbox3D& ab = *((FLOATaabbox3D*)a);
  const FLOATaabbox3D& bb = *((const FLOATaabbox3D*)b);
  return ab <= bb;
}

FLOAT3D_* FLOATaabbox3D_Size(const FLOATaabbox3D_* p)
{
  FLOAT3D res = ((const FLOATaabbox3D*)p)->Size();
  return (FLOAT3D_*)(new FLOAT3D(res));
}

FLOAT3D_* FLOATaabbox3D_Center(const FLOATaabbox3D_* p)
{
  FLOAT3D res = ((const FLOATaabbox3D*)p)->Center();
  return (FLOAT3D_*)(new FLOAT3D(res));
}

BOOL FLOATaabbox3D_IsEmpty(const FLOATaabbox3D_* p)
{
  return ((const FLOATaabbox3D*)p)->IsEmpty();
}

BOOL FLOATaabbox3D_HasContactWith(const FLOATaabbox3D_* a, const FLOATaabbox3D_* b)
{
  return ((const FLOATaabbox3D*)a)->HasContactWith(*((const FLOATaabbox3D*)b));
}

BOOL FLOATaabbox3D_HasContactWith_fuzzy(const FLOATaabbox3D_* a, const FLOATaabbox3D_* b, FLOAT epsilon)
{
  return ((const FLOATaabbox3D*)a)->HasContactWith(*((const FLOATaabbox3D*)b), epsilon);
}

BOOL FLOATaabbox3D_TouchesSphere(const FLOATaabbox3D_* p, const FLOAT3D_* sc, FLOAT sr)
{
  return ((const FLOATaabbox3D*)p)->TouchesSphere(*((const FLOAT3D*)sc), sr);
}

void FLOATaabbox3D_Expand(FLOATaabbox3D_* p, FLOAT t)
{
  ((FLOATaabbox3D*)p)->Expand(t);
}

void FLOATaabbox3D_ExpandByFactor(FLOATaabbox3D_* p, FLOAT t)
{
  ((FLOATaabbox3D*)p)->ExpandByFactor(t);
}

void FLOATaabbox3D_StretchByFactor(FLOATaabbox3D_* p, FLOAT t)
{
  ((FLOATaabbox3D*)p)->StretchByFactor(t);
}

void FLOATaabbox3D_StretchByVector(FLOATaabbox3D_* p, FLOAT3D_* v)
{
  ((FLOATaabbox3D*)p)->StretchByVector(*((FLOAT3D*)v));
}

DOUBLEaabbox2D_* DOUBLEaabbox2D_new()
{
  return (DOUBLEaabbox2D_*)(new DOUBLEaabbox2D());
}

DOUBLEaabbox2D_* DOUBLEaabbox2D_new_p(const DOUBLE2D_* p)
{
  return (DOUBLEaabbox2D_*)(new DOUBLEaabbox2D(*((const DOUBLE2D*)p)));
}

DOUBLEaabbox2D_* DOUBLEaabbox2D_new_pr(const DOUBLE2D_* p, DOUBLE r)
{
  return (DOUBLEaabbox2D_*)(new DOUBLEaabbox2D(*((const DOUBLE2D*)p), r));
}

DOUBLEaabbox2D_* DOUBLEaabbox2D_new_pp(const DOUBLE2D_* p1, const DOUBLE2D_* p2)
{
  return (DOUBLEaabbox2D_*)(new DOUBLEaabbox2D(*((const DOUBLE2D*)p1), *((const DOUBLE2D*)p2)));
}

DOUBLEaabbox2D_* DOUBLEaabbox2D_clone(const DOUBLEaabbox2D_* p)
{
  return (DOUBLEaabbox2D_*)(new DOUBLEaabbox2D(*((const DOUBLEaabbox2D*)p)));
}

void DOUBLEaabbox2D_delete(DOUBLEaabbox2D_* p)
{
  delete ((DOUBLEaabbox2D*)p);
}

void DOUBLEaabbox2D_copy(DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b)
{
  *((DOUBLEaabbox2D*)a) = *((const DOUBLEaabbox2D*)b);
}

DOUBLE2D_* DOUBLEaabbox2D_minvect(DOUBLEaabbox2D_* p)
{
  DOUBLEaabbox2D& b = *((DOUBLEaabbox2D*)p);
  return (DOUBLE2D_*)(&b.minvect);
}

DOUBLE2D_* DOUBLEaabbox2D_maxvect(DOUBLEaabbox2D_* p)
{
  DOUBLEaabbox2D& b = *((DOUBLEaabbox2D*)p);
  return (DOUBLE2D_*)(&b.maxvect);
}

void DOUBLEaabbox2D_SetToNormalizedEmpty(DOUBLEaabbox2D_* p)
{
  ((DOUBLEaabbox2D*)p)->SetToNormalizedEmpty();
}

void DOUBLEaabbox2D_UniteInplace(DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b)
{
  DOUBLEaabbox2D& ab = *((DOUBLEaabbox2D*)a);
  const DOUBLEaabbox2D& bb = *((const DOUBLEaabbox2D*)b);
  ab |= bb;
}

void DOUBLEaabbox2D_IntersectInplace(DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b)
{
  DOUBLEaabbox2D& ab = *((DOUBLEaabbox2D*)a);
  const DOUBLEaabbox2D& bb = *((const DOUBLEaabbox2D*)b);
  ab &= bb;
}

DOUBLEaabbox2D_* DOUBLEaabbox2D_Intersect(const DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b)
{
  const DOUBLEaabbox2D& ab = *((DOUBLEaabbox2D*)a);
  const DOUBLEaabbox2D& bb = *((const DOUBLEaabbox2D*)b);
  return (DOUBLEaabbox2D_*)(new DOUBLEaabbox2D(ab & bb));
}

void DOUBLEaabbox2D_MoveAdd(DOUBLEaabbox2D_* p, const DOUBLE2D_* v)
{
  DOUBLEaabbox2D& pp = *((DOUBLEaabbox2D*)p);
  const DOUBLE2D& vv = *((const DOUBLE2D*)v);
  pp += vv;
}

void DOUBLEaabbox2D_MoveSub(DOUBLEaabbox2D_* p, const DOUBLE2D_* v)
{
  DOUBLEaabbox2D& pp = *((DOUBLEaabbox2D*)p);
  const DOUBLE2D& vv = *((const DOUBLE2D*)v);
  pp -= vv;
}

BOOL DOUBLEaabbox2D_equal(const DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b)
{
  return *((const DOUBLEaabbox2D*)a) == *((const DOUBLEaabbox2D*)b);
}

BOOL DOUBLEaabbox2D_notequal(const DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b)
{
  return *((const DOUBLEaabbox2D*)a) != *((const DOUBLEaabbox2D*)b);
}

BOOL DOUBLEaabbox2D_Contains(const DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b)
{
  const DOUBLEaabbox2D& ab = *((DOUBLEaabbox2D*)a);
  const DOUBLEaabbox2D& bb = *((const DOUBLEaabbox2D*)b);
  return ab >= bb;
}

BOOL DOUBLEaabbox2D_Contained(const DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b)
{
  const DOUBLEaabbox2D& ab = *((DOUBLEaabbox2D*)a);
  const DOUBLEaabbox2D& bb = *((const DOUBLEaabbox2D*)b);
  return ab <= bb;
}

DOUBLE2D_* DOUBLEaabbox2D_Size(const DOUBLEaabbox2D_* p)
{
  DOUBLE2D res = ((const DOUBLEaabbox2D*)p)->Size();
  return (DOUBLE2D_*)(new DOUBLE2D(res));
}

DOUBLE2D_* DOUBLEaabbox2D_Center(const DOUBLEaabbox2D_* p)
{
  DOUBLE2D res = ((const DOUBLEaabbox2D*)p)->Center();
  return (DOUBLE2D_*)(new DOUBLE2D(res));
}

BOOL DOUBLEaabbox2D_IsEmpty(const DOUBLEaabbox2D_* p)
{
  return ((const DOUBLEaabbox2D*)p)->IsEmpty();
}

BOOL DOUBLEaabbox2D_HasContactWith(const DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b)
{
  return ((const DOUBLEaabbox2D*)a)->HasContactWith(*((const DOUBLEaabbox2D*)b));
}

BOOL DOUBLEaabbox2D_HasContactWith_fuzzy(const DOUBLEaabbox2D_* a, const DOUBLEaabbox2D_* b, DOUBLE epsilon)
{
  return ((const DOUBLEaabbox2D*)a)->HasContactWith(*((const DOUBLEaabbox2D*)b), epsilon);
}

BOOL DOUBLEaabbox2D_TouchesSphere(const DOUBLEaabbox2D_* p, const DOUBLE2D_* sc, DOUBLE sr)
{
  return ((const DOUBLEaabbox2D*)p)->TouchesSphere(*((const DOUBLE2D*)sc), sr);
}

void DOUBLEaabbox2D_Expand(DOUBLEaabbox2D_* p, DOUBLE t)
{
  ((DOUBLEaabbox2D*)p)->Expand(t);
}

void DOUBLEaabbox2D_ExpandByFactor(DOUBLEaabbox2D_* p, DOUBLE t)
{
  ((DOUBLEaabbox2D*)p)->ExpandByFactor(t);
}

void DOUBLEaabbox2D_StretchByFactor(DOUBLEaabbox2D_* p, DOUBLE t)
{
  ((DOUBLEaabbox2D*)p)->StretchByFactor(t);
}

void DOUBLEaabbox2D_StretchByVector(DOUBLEaabbox2D_* p, DOUBLE2D_* v)
{
  ((DOUBLEaabbox2D*)p)->StretchByVector(*((DOUBLE2D*)v));
}

DOUBLEaabbox3D_* DOUBLEaabbox3D_new()
{
  return (DOUBLEaabbox3D_*)(new DOUBLEaabbox3D());
}

DOUBLEaabbox3D_* DOUBLEaabbox3D_new_p(const DOUBLE3D_* p)
{
  return (DOUBLEaabbox3D_*)(new DOUBLEaabbox3D(*((const DOUBLE3D*)p)));
}

DOUBLEaabbox3D_* DOUBLEaabbox3D_new_pr(const DOUBLE3D_* p, DOUBLE r)
{
  return (DOUBLEaabbox3D_*)(new DOUBLEaabbox3D(*((const DOUBLE3D*)p), r));
}

DOUBLEaabbox3D_* DOUBLEaabbox3D_new_pp(const DOUBLE3D_* p1, const DOUBLE3D_* p2)
{
  return (DOUBLEaabbox3D_*)(new DOUBLEaabbox3D(*((const DOUBLE3D*)p1), *((const DOUBLE3D*)p2)));
}

DOUBLEaabbox3D_* DOUBLEaabbox3D_clone(const DOUBLEaabbox3D_* p)
{
  return (DOUBLEaabbox3D_*)(new DOUBLEaabbox3D(*((const DOUBLEaabbox3D*)p)));
}

void DOUBLEaabbox3D_delete(DOUBLEaabbox3D_* p)
{
  delete ((DOUBLEaabbox3D*)p);
}

void DOUBLEaabbox3D_copy(DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b)
{
  *((DOUBLEaabbox3D*)a) = *((const DOUBLEaabbox3D*)b);
}

DOUBLE3D_* DOUBLEaabbox3D_minvect(DOUBLEaabbox3D_* p)
{
  DOUBLEaabbox3D& b = *((DOUBLEaabbox3D*)p);
  return (DOUBLE3D_*)(&b.minvect);
}

DOUBLE3D_* DOUBLEaabbox3D_maxvect(DOUBLEaabbox3D_* p)
{
  DOUBLEaabbox3D& b = *((DOUBLEaabbox3D*)p);
  return (DOUBLE3D_*)(&b.maxvect);
}

void DOUBLEaabbox3D_SetToNormalizedEmpty(DOUBLEaabbox3D_* p)
{
  ((DOUBLEaabbox3D*)p)->SetToNormalizedEmpty();
}

void DOUBLEaabbox3D_UniteInplace(DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b)
{
  DOUBLEaabbox3D& ab = *((DOUBLEaabbox3D*)a);
  const DOUBLEaabbox3D& bb = *((const DOUBLEaabbox3D*)b);
  ab |= bb;
}

void DOUBLEaabbox3D_IntersectInplace(DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b)
{
  DOUBLEaabbox3D& ab = *((DOUBLEaabbox3D*)a);
  const DOUBLEaabbox3D& bb = *((const DOUBLEaabbox3D*)b);
  ab &= bb;
}

DOUBLEaabbox3D_* DOUBLEaabbox3D_Intersect(const DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b)
{
  const DOUBLEaabbox3D& ab = *((DOUBLEaabbox3D*)a);
  const DOUBLEaabbox3D& bb = *((const DOUBLEaabbox3D*)b);
  return (DOUBLEaabbox3D_*)(new DOUBLEaabbox3D(ab & bb));
}

void DOUBLEaabbox3D_MoveAdd(DOUBLEaabbox3D_* p, const DOUBLE3D_* v)
{
  DOUBLEaabbox3D& pp = *((DOUBLEaabbox3D*)p);
  const DOUBLE3D& vv = *((const DOUBLE3D*)v);
  pp += vv;
}

void DOUBLEaabbox3D_MoveSub(DOUBLEaabbox3D_* p, const DOUBLE3D_* v)
{
  DOUBLEaabbox3D& pp = *((DOUBLEaabbox3D*)p);
  const DOUBLE3D& vv = *((const DOUBLE3D*)v);
  pp -= vv;
}

BOOL DOUBLEaabbox3D_equal(const DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b)
{
  return *((const DOUBLEaabbox3D*)a) == *((const DOUBLEaabbox3D*)b);
}

BOOL DOUBLEaabbox3D_notequal(const DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b)
{
  return *((const DOUBLEaabbox3D*)a) != *((const DOUBLEaabbox3D*)b);
}

BOOL DOUBLEaabbox3D_Contains(const DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b)
{
  const DOUBLEaabbox3D& ab = *((DOUBLEaabbox3D*)a);
  const DOUBLEaabbox3D& bb = *((const DOUBLEaabbox3D*)b);
  return ab >= bb;
}

BOOL DOUBLEaabbox3D_Contained(const DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b)
{
  const DOUBLEaabbox3D& ab = *((DOUBLEaabbox3D*)a);
  const DOUBLEaabbox3D& bb = *((const DOUBLEaabbox3D*)b);
  return ab <= bb;
}

DOUBLE3D_* DOUBLEaabbox3D_Size(const DOUBLEaabbox3D_* p)
{
  DOUBLE3D res = ((const DOUBLEaabbox3D*)p)->Size();
  return (DOUBLE3D_*)(new DOUBLE3D(res));
}

DOUBLE3D_* DOUBLEaabbox3D_Center(const DOUBLEaabbox3D_* p)
{
  DOUBLE3D res = ((const DOUBLEaabbox3D*)p)->Center();
  return (DOUBLE3D_*)(new DOUBLE3D(res));
}

BOOL DOUBLEaabbox3D_IsEmpty(const DOUBLEaabbox3D_* p)
{
  return ((const DOUBLEaabbox3D*)p)->IsEmpty();
}

BOOL DOUBLEaabbox3D_HasContactWith(const DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b)
{
  return ((const DOUBLEaabbox3D*)a)->HasContactWith(*((const DOUBLEaabbox3D*)b));
}

BOOL DOUBLEaabbox3D_HasContactWith_fuzzy(const DOUBLEaabbox3D_* a, const DOUBLEaabbox3D_* b, DOUBLE epsilon)
{
  return ((const DOUBLEaabbox3D*)a)->HasContactWith(*((const DOUBLEaabbox3D*)b), epsilon);
}

BOOL DOUBLEaabbox3D_TouchesSphere(const DOUBLEaabbox3D_* p, const DOUBLE3D_* sc, DOUBLE sr)
{
  return ((const DOUBLEaabbox3D*)p)->TouchesSphere(*((const DOUBLE3D*)sc), sr);
}

void DOUBLEaabbox3D_Expand(DOUBLEaabbox3D_* p, DOUBLE t)
{
  ((DOUBLEaabbox3D*)p)->Expand(t);
}

void DOUBLEaabbox3D_ExpandByFactor(DOUBLEaabbox3D_* p, DOUBLE t)
{
  ((DOUBLEaabbox3D*)p)->ExpandByFactor(t);
}

void DOUBLEaabbox3D_StretchByFactor(DOUBLEaabbox3D_* p, DOUBLE t)
{
  ((DOUBLEaabbox3D*)p)->StretchByFactor(t);
}

void DOUBLEaabbox3D_StretchByVector(DOUBLEaabbox3D_* p, DOUBLE3D_* v)
{
  ((DOUBLEaabbox3D*)p)->StretchByVector(*((DOUBLE3D*)v));
}

DOUBLEaabbox3D_* FLOATtoDOUBLEaabb(const FLOATaabbox3D_* plf)
{
  DOUBLEaabbox3D res = FLOATtoDOUBLE(*((const FLOATaabbox3D*)plf));
  return (DOUBLEaabbox3D_*)(new DOUBLEaabbox3D(res));
}

FLOATaabbox3D_* DOUBLEtoFLOATaabb(const DOUBLEaabbox3D_* pld)
{
  FLOATaabbox3D res = DOUBLEtoFLOAT(*((const DOUBLEaabbox3D*)pld));
  return (FLOATaabbox3D_*)(new FLOATaabbox3D(res));
}
