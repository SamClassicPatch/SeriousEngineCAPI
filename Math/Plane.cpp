#include "Plane.h"

FLOATplane3D_* FLOATplane3D_new()
{
  return (FLOATplane3D_*)(new FLOATplane3D());
}

FLOATplane3D_* FLOATplane3D_new_nd(const FLOAT3D_* n, const FLOAT d)
{
  return (FLOATplane3D_*)(new FLOATplane3D(*((const FLOAT3D*)n), d));
}

FLOATplane3D_* FLOATplane3D_new_np(const FLOAT3D_* n, const FLOAT3D_* p)
{
  return (FLOATplane3D_*)(new FLOATplane3D(*((const FLOAT3D*)n), *((const FLOAT3D*)p)));
}

FLOATplane3D_* FLOATplane3D_new_ppp(const FLOAT3D_* p0, const FLOAT3D_* p1, const FLOAT3D_* p2)
{
  return (FLOATplane3D_*)(new FLOATplane3D(*((const FLOAT3D*)p0), *((const FLOAT3D*)p1), *((const FLOAT3D*)p2)));
}

FLOATplane3D_* FLOATplane3D_clone(const FLOATplane3D_* p)
{
  return (FLOATplane3D_*)(new FLOATplane3D(*((const FLOATplane3D*)p)));
}

void FLOATplane3D_delete(FLOATplane3D_* p)
{
  delete ((FLOATplane3D*)p);
}

void FLOATplane3D_copy(FLOATplane3D_* a, const FLOATplane3D_* b)
{
  *((FLOATplane3D*)a) = *((const FLOATplane3D*)b);
}

FLOAT* FLOATplane3D_Distance(FLOATplane3D_* p)
{
  return &(((FLOATplane3D*)p)->Distance());
}

const FLOAT* FLOATplane3D_Distance_const(const FLOATplane3D_* p)
{
  return &(((const FLOATplane3D*)p)->Distance());
}

FLOAT3D_* FLOATplane3D_ReferencePoint(const FLOATplane3D_* p)
{
  return (FLOAT3D_*)(new FLOAT3D(((const FLOATplane3D*)p)->ReferencePoint()));
}

FLOAT3D_* FLOATplane3D_ReferencePoint_origin(const FLOATplane3D_* p, const FLOAT3D_* o)
{
  return (FLOAT3D_*)(new FLOAT3D(((const FLOATplane3D*)p)->ReferencePoint(*((const FLOAT3D*)o))));
}

FLOAT FLOATplane3D_PointDistance(const FLOATplane3D_* p, const FLOAT3D_* v)
{
  return ((const FLOATplane3D*)p)->PointDistance(*((const FLOAT3D*)v));
}

void FLOATplane3D_GetCoordinate(const FLOATplane3D_* p, INDEX i, FLOAT3D_* v)
{
  ((const FLOATplane3D*)p)->GetCoordinate(i, *((FLOAT3D*)v));
}

FLOAT FLOATplane3D_PlaneDistance(const FLOATplane3D_* a, const FLOATplane3D_* b)
{
  return ((const FLOATplane3D*)a)->PlaneDistance(*((const FLOATplane3D*)b));
}

FLOAT3D_* FLOATplane3D_ProjectPoint(const FLOATplane3D_* p, const FLOAT3D_* v)
{
  return (FLOAT3D_*)(new FLOAT3D(((const FLOATplane3D*)p)->ProjectPoint(*((const FLOAT3D*)v))));
}

FLOAT3D_* FLOATplane3D_ProjectDirection(const FLOATplane3D_* p, const FLOAT3D_* v)
{
  return (FLOAT3D_*)(new FLOAT3D(((const FLOATplane3D*)p)->ProjectDirection(*((const FLOAT3D*)v))));
}

INDEX FLOATplane3D_GetMaxNormal(const FLOATplane3D_* p)
{
  return ((const FLOATplane3D*)p)->GetMaxNormal();
}

FLOAT3D_* FLOATplane3D_DeprojectPoint(const FLOATplane3D_* p, const FLOATplane3D_* o, const FLOAT3D_* v)
{
  return (FLOAT3D_*)(new FLOAT3D(((const FLOATplane3D*)p)->DeprojectPoint(*((const FLOATplane3D*)o), *((const FLOAT3D*)v))));
}

FLOAT3D_* FLOATplane3D_DeprojectDirection(const FLOATplane3D_* p, const FLOATplane3D_* o, const FLOAT3D_* v)
{
  return (FLOAT3D_*)(new FLOAT3D(((const FLOATplane3D*)p)->DeprojectDirection(*((const FLOATplane3D*)o), *((const FLOAT3D*)v))));
}

void FLOATplane3D_Offset(FLOATplane3D_* p, FLOAT offset)
{
  ((FLOATplane3D*)p)->Offset(offset);
}

FLOATplane3D_* FLOATplane3D_Flip(const FLOATplane3D_* p)
{
  const FLOATplane3D& pl = *((const FLOATplane3D*)p);
  FLOATplane3D res = -pl;
  return (FLOATplane3D_*)(new FLOATplane3D(res));
}

FLOATplane3D_* FLOATplane3D_Plus(const FLOATplane3D_* p, const FLOAT3D_* v)
{
  const FLOATplane3D& pl = *((const FLOATplane3D*)p);
  FLOATplane3D res = pl + (*((const FLOAT3D*)v));
  return (FLOATplane3D_*)(new FLOATplane3D(res));
}

void FLOATplane3D_PlusInplace(FLOATplane3D_* p, const FLOAT3D_* v)
{
  FLOATplane3D& pl = *((FLOATplane3D*)p);
  pl += (*((const FLOAT3D*)v));
}

FLOATplane3D_* FLOATplane3D_Minus(const FLOATplane3D_* p, const FLOAT3D_* v)
{
  const FLOATplane3D& pl = *((const FLOATplane3D*)p);
  FLOATplane3D res = pl - (*((const FLOAT3D*)v));
  return (FLOATplane3D_*)(new FLOATplane3D(res));
}

void FLOATplane3D_MinusInplace(FLOATplane3D_* p, const FLOAT3D_* v)
{
  FLOATplane3D& pl = *((FLOATplane3D*)p);
  pl -= (*((const FLOAT3D*)v));
}

FLOATplane3D_* FLOATplane3D_Multiply(const FLOATplane3D_* p, const FLOATmatrix3D_* m)
{
  const FLOATplane3D& pl = *((const FLOATplane3D*)p);
  FLOATplane3D res = pl * (*((const FLOATmatrix3D*)m));
  return (FLOATplane3D_*)(new FLOATplane3D(res));
}

void FLOATplane3D_MultiplyInplace(FLOATplane3D_* p, const FLOATmatrix3D_* m)
{
  FLOATplane3D& pl = *((FLOATplane3D*)p);
  pl *= (*((const FLOATmatrix3D*)m));
}

DOUBLEplane3D_* DOUBLEplane3D_new()
{
  return (DOUBLEplane3D_*)(new DOUBLEplane3D());
}

DOUBLEplane3D_* DOUBLEplane3D_new_nd(const DOUBLE3D_* n, const DOUBLE d)
{
  return (DOUBLEplane3D_*)(new DOUBLEplane3D(*((const DOUBLE3D*)n), d));
}

DOUBLEplane3D_* DOUBLEplane3D_new_np(const DOUBLE3D_* n, const DOUBLE3D_* p)
{
  return (DOUBLEplane3D_*)(new DOUBLEplane3D(*((const DOUBLE3D*)n), *((const DOUBLE3D*)p)));
}

DOUBLEplane3D_* DOUBLEplane3D_new_ppp(const DOUBLE3D_* p0, const DOUBLE3D_* p1, const DOUBLE3D_* p2)
{
  return (DOUBLEplane3D_*)(new DOUBLEplane3D(*((const DOUBLE3D*)p0), *((const DOUBLE3D*)p1), *((const DOUBLE3D*)p2)));
}

DOUBLEplane3D_* DOUBLEplane3D_clone(const DOUBLEplane3D_* p)
{
  return (DOUBLEplane3D_*)(new DOUBLEplane3D(*((const DOUBLEplane3D*)p)));
}

void DOUBLEplane3D_delete(DOUBLEplane3D_* p)
{
  delete ((DOUBLEplane3D*)p);
}

void DOUBLEplane3D_copy(DOUBLEplane3D_* a, const DOUBLEplane3D_* b)
{
  *((DOUBLEplane3D*)a) = *((const DOUBLEplane3D*)b);
}

DOUBLE* DOUBLEplane3D_Distance(DOUBLEplane3D_* p)
{
  return &(((DOUBLEplane3D*)p)->Distance());
}

const DOUBLE* DOUBLEplane3D_Distance_const(const DOUBLEplane3D_* p)
{
  return &(((const DOUBLEplane3D*)p)->Distance());
}

DOUBLE3D_* DOUBLEplane3D_ReferencePoint(const DOUBLEplane3D_* p)
{
  return (DOUBLE3D_*)(new DOUBLE3D(((const DOUBLEplane3D*)p)->ReferencePoint()));
}

DOUBLE3D_* DOUBLEplane3D_ReferencePoint_origin(const DOUBLEplane3D_* p, const DOUBLE3D_* o)
{
  return (DOUBLE3D_*)(new DOUBLE3D(((const DOUBLEplane3D*)p)->ReferencePoint(*((const DOUBLE3D*)o))));
}

DOUBLE DOUBLEplane3D_PointDistance(const DOUBLEplane3D_* p, const DOUBLE3D_* v)
{
  return ((const DOUBLEplane3D*)p)->PointDistance(*((const DOUBLE3D*)v));
}

void DOUBLEplane3D_GetCoordinate(const DOUBLEplane3D_* p, INDEX i, DOUBLE3D_* v)
{
  ((const DOUBLEplane3D*)p)->GetCoordinate(i, *((DOUBLE3D*)v));
}

DOUBLE DOUBLEplane3D_PlaneDistance(const DOUBLEplane3D_* a, const DOUBLEplane3D_* b)
{
  return ((const DOUBLEplane3D*)a)->PlaneDistance(*((const DOUBLEplane3D*)b));
}

DOUBLE3D_* DOUBLEplane3D_ProjectPoint(const DOUBLEplane3D_* p, const DOUBLE3D_* v)
{
  return (DOUBLE3D_*)(new DOUBLE3D(((const DOUBLEplane3D*)p)->ProjectPoint(*((const DOUBLE3D*)v))));
}

DOUBLE3D_* DOUBLEplane3D_ProjectDirection(const DOUBLEplane3D_* p, const DOUBLE3D_* v)
{
  return (DOUBLE3D_*)(new DOUBLE3D(((const DOUBLEplane3D*)p)->ProjectDirection(*((const DOUBLE3D*)v))));
}

INDEX DOUBLEplane3D_GetMaxNormal(const DOUBLEplane3D_* p)
{
  return ((const DOUBLEplane3D*)p)->GetMaxNormal();
}

DOUBLE3D_* DOUBLEplane3D_DeprojectPoint(const DOUBLEplane3D_* p, const DOUBLEplane3D_* o, const DOUBLE3D_* v)
{
  return (DOUBLE3D_*)(new DOUBLE3D(((const DOUBLEplane3D*)p)->DeprojectPoint(*((const DOUBLEplane3D*)o), *((const DOUBLE3D*)v))));
}

DOUBLE3D_* DOUBLEplane3D_DeprojectDirection(const DOUBLEplane3D_* p, const DOUBLEplane3D_* o, const DOUBLE3D_* v)
{
  return (DOUBLE3D_*)(new DOUBLE3D(((const DOUBLEplane3D*)p)->DeprojectDirection(*((const DOUBLEplane3D*)o), *((const DOUBLE3D*)v))));
}

void DOUBLEplane3D_Offset(DOUBLEplane3D_* p, DOUBLE offset)
{
  ((DOUBLEplane3D*)p)->Offset(offset);
}

DOUBLEplane3D_* DOUBLEplane3D_Flip(const DOUBLEplane3D_* p)
{
  const DOUBLEplane3D& pl = *((const DOUBLEplane3D*)p);
  DOUBLEplane3D res = -pl;
  return (DOUBLEplane3D_*)(new DOUBLEplane3D(res));
}

DOUBLEplane3D_* DOUBLEplane3D_Plus(const DOUBLEplane3D_* p, const DOUBLE3D_* v)
{
  const DOUBLEplane3D& pl = *((const DOUBLEplane3D*)p);
  DOUBLEplane3D res = pl + (*((const DOUBLE3D*)v));
  return (DOUBLEplane3D_*)(new DOUBLEplane3D(res));
}

void DOUBLEplane3D_PlusInplace(DOUBLEplane3D_* p, const DOUBLE3D_* v)
{
  DOUBLEplane3D& pl = *((DOUBLEplane3D*)p);
  pl += (*((const DOUBLE3D*)v));
}

DOUBLEplane3D_* DOUBLEplane3D_Minus(const DOUBLEplane3D_* p, const DOUBLE3D_* v)
{
  const DOUBLEplane3D& pl = *((const DOUBLEplane3D*)p);
  DOUBLEplane3D res = pl - (*((const DOUBLE3D*)v));
  return (DOUBLEplane3D_*)(new DOUBLEplane3D(res));
}

void DOUBLEplane3D_MinusInplace(DOUBLEplane3D_* p, const DOUBLE3D_* v)
{
  DOUBLEplane3D& pl = *((DOUBLEplane3D*)p);
  pl -= (*((const DOUBLE3D*)v));
}

DOUBLEplane3D_* DOUBLEplane3D_Multiply(const DOUBLEplane3D_* p, const DOUBLEmatrix3D_* m)
{
  const DOUBLEplane3D& pl = *((const DOUBLEplane3D*)p);
  DOUBLEplane3D res = pl * (*((const DOUBLEmatrix3D*)m));
  return (DOUBLEplane3D_*)(new DOUBLEplane3D(res));
}

void DOUBLEplane3D_MultiplyInplace(DOUBLEplane3D_* p, const DOUBLEmatrix3D_* m)
{
  DOUBLEplane3D& pl = *((DOUBLEplane3D*)p);
  pl *= (*((const DOUBLEmatrix3D*)m));
}

FLOATplane3D_* DOUBLEtoFLOATplane(const DOUBLEplane3D_* p)
{
  FLOATplane3D res = DOUBLEtoFLOAT(*((const DOUBLEplane3D*)p));
  return (FLOATplane3D_*)(new FLOATplane3D(res));
}

DOUBLEplane3D_* FLOATtoDOUBLEplane(const FLOATplane3D_* p)
{
  DOUBLEplane3D res = FLOATtoDOUBLE(*((const FLOATplane3D*)p));
  return (DOUBLEplane3D_*)(new DOUBLEplane3D(res));
}
