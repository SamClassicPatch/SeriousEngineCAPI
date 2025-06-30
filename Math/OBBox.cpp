#include "OBBox.h"
#include <Engine/Math/OBBox.h>

FLOATobbox3D_* FLOATobbox3D_new()
{
  return (FLOATobbox3D_*)(new FLOATobbox3D());
}

FLOATobbox3D_* FLOATobbox3D_new_vaaa(const FLOAT3D_* vo,
                                     const FLOAT3D_* va0, const FLOAT3D_* va1, const FLOAT3D_* va2,
                                     FLOAT sz0, FLOAT sz1, FLOAT sz2)
{
  return (FLOATobbox3D_*)(new FLOATobbox3D(
    *((const FLOAT3D*)vo),
    *((const FLOAT3D*)va0), *((const FLOAT3D*)va1), *((const FLOAT3D*)va2),
    sz0, sz1, sz2
    ));
}

FLOATobbox3D_* FLOATobbox3D_new_aapr(const FLOATaabbox3D_* a, const FLOAT3D_* p, const FLOATmatrix3D_* r)
{
  return (FLOATobbox3D_*)(new FLOATobbox3D(
    *((const FLOATaabbox3D*)a), *((const FLOAT3D*)p), *((const FLOATmatrix3D*)r)
    ));
}

FLOATobbox3D_* FLOATobbox3D_new_aa(const FLOATaabbox3D_* a)
{
  return (FLOATobbox3D_*)(new FLOATobbox3D(*((const FLOATaabbox3D*)a)));
}

FLOATobbox3D_* FLOATobbox3D_clone(const FLOATobbox3D_* p)
{
  return (FLOATobbox3D_*)(new FLOATobbox3D(*((const FLOATobbox3D*)p)));
}

void FLOATobbox3D_delete(FLOATobbox3D_* p)
{
  delete ((FLOATobbox3D*)p);
}

void FLOATobbox3D_copy(FLOATobbox3D_* a, const FLOATobbox3D_* b)
{
  *((FLOATobbox3D*)a) = *((const FLOATobbox3D*)b);
}

FLOAT3D_* FLOATobbox3D_box_vO(FLOATobbox3D_* p)
{
  FLOATobbox3D& b = *((FLOATobbox3D*)p);
  return (FLOAT3D_*)(&(b.box_vO));
}

FLOAT3D_* FLOATobbox3D_box_avAxis(FLOATobbox3D_* p, INDEX i)
{
  FLOATobbox3D& b = *((FLOATobbox3D*)p);
  return (FLOAT3D_*)(&(b.box_avAxis[i]));
}

FLOAT* FLOATobbox3D_box_atSize(FLOATobbox3D_* p, INDEX i)
{
  FLOATobbox3D& b = *((FLOATobbox3D*)p);
  return &(b.box_atSize[i]);
}

void FLOATobbox3D_SetToNormalizedEmpty(FLOATobbox3D_* p)
{
  ((FLOATobbox3D*)p)->SetToNormalizedEmpty();
}

FLOAT FLOATobbox3D_TestAgainstPlane(const FLOATobbox3D_* p, const FLOATplane3D_* pl)
{
  return ((const FLOATobbox3D*)p)->TestAgainstPlane(*((const FLOATplane3D*)pl));
}

BOOL FLOATobbox3D_HasContactWith(const FLOATobbox3D_* a, const FLOATobbox3D_* b)
{
  return ((const FLOATobbox3D*)a)->HasContactWith(*((const FLOATobbox3D*)b));
}

BOOL FLOATobbox3D_IsEmpty(const FLOATobbox3D_* p)
{
  return ((const FLOATobbox3D*)p)->IsEmpty();
}

DOUBLEobbox3D_* DOUBLEobbox3D_new()
{
  return (DOUBLEobbox3D_*)(new DOUBLEobbox3D());
}

DOUBLEobbox3D_* DOUBLEobbox3D_new_vaaa(const DOUBLE3D_* vo,
                                       const DOUBLE3D_* va0, const DOUBLE3D_* va1, const DOUBLE3D_* va2,
                                       DOUBLE sz0, DOUBLE sz1, DOUBLE sz2)
{
  return (DOUBLEobbox3D_*)(new DOUBLEobbox3D(
    *((const DOUBLE3D*)vo),
    *((const DOUBLE3D*)va0), *((const DOUBLE3D*)va1), *((const DOUBLE3D*)va2),
    sz0, sz1, sz2
    ));
}

DOUBLEobbox3D_* DOUBLEobbox3D_new_aapr(const DOUBLEaabbox3D_* a, const DOUBLE3D_* p, const DOUBLEmatrix3D_* r)
{
  return (DOUBLEobbox3D_*)(new DOUBLEobbox3D(
    *((const DOUBLEaabbox3D*)a), *((const DOUBLE3D*)p), *((const DOUBLEmatrix3D*)r)
    ));
}

DOUBLEobbox3D_* DOUBLEobbox3D_new_aa(const DOUBLEaabbox3D_* a)
{
  return (DOUBLEobbox3D_*)(new DOUBLEobbox3D(*((const DOUBLEaabbox3D*)a)));
}

DOUBLEobbox3D_* DOUBLEobbox3D_clone(const DOUBLEobbox3D_* p)
{
  return (DOUBLEobbox3D_*)(new DOUBLEobbox3D(*((const DOUBLEobbox3D*)p)));
}

void DOUBLEobbox3D_delete(DOUBLEobbox3D_* p)
{
  delete ((DOUBLEobbox3D*)p);
}

void DOUBLEobbox3D_copy(DOUBLEobbox3D_* a, const DOUBLEobbox3D_* b)
{
  *((DOUBLEobbox3D*)a) = *((const DOUBLEobbox3D*)b);
}

DOUBLE3D_* DOUBLEobbox3D_box_vO(DOUBLEobbox3D_* p)
{
  DOUBLEobbox3D& b = *((DOUBLEobbox3D*)p);
  return (DOUBLE3D_*)(&(b.box_vO));
}

DOUBLE3D_* DOUBLEobbox3D_box_avAxis(DOUBLEobbox3D_* p, INDEX i)
{
  DOUBLEobbox3D& b = *((DOUBLEobbox3D*)p);
  return (DOUBLE3D_*)(&(b.box_avAxis[i]));
}

DOUBLE* DOUBLEobbox3D_box_atSize(DOUBLEobbox3D_* p, INDEX i)
{
  DOUBLEobbox3D& b = *((DOUBLEobbox3D*)p);
  return &(b.box_atSize[i]);
}

void DOUBLEobbox3D_SetToNormalizedEmpty(DOUBLEobbox3D_* p)
{
  ((DOUBLEobbox3D*)p)->SetToNormalizedEmpty();
}

DOUBLE DOUBLEobbox3D_TestAgainstPlane(const DOUBLEobbox3D_* p, const DOUBLEplane3D_* pl)
{
  return ((const DOUBLEobbox3D*)p)->TestAgainstPlane(*((const DOUBLEplane3D*)pl));
}

BOOL DOUBLEobbox3D_HasContactWith(const DOUBLEobbox3D_* a, const DOUBLEobbox3D_* b)
{
  return ((const DOUBLEobbox3D*)a)->HasContactWith(*((const DOUBLEobbox3D*)b));
}

BOOL DOUBLEobbox3D_IsEmpty(const DOUBLEobbox3D_* p)
{
  return ((const DOUBLEobbox3D*)p)->IsEmpty();
}

DOUBLEobbox3D_* FLOATtoDOUBLEobb(const FLOATobbox3D_* boxf)
{
  DOUBLEobbox3D res = FLOATtoDOUBLE(*((const FLOATobbox3D*)boxf));
  return (DOUBLEobbox3D_*)(new DOUBLEobbox3D(res));
}

FLOATobbox3D_* DOUBLEtoFLOATobb(const DOUBLEobbox3D_* boxd)
{
  FLOATobbox3D res = DOUBLEtoFLOAT(*((const DOUBLEobbox3D*)boxd));
  return (FLOATobbox3D_*)(new FLOATobbox3D(res));
}
