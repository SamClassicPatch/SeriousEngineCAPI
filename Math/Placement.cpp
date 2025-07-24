#include "Placement.h"

CPlacement3D_* CPlacement3D_new()
{
  return (CPlacement3D_*)(new CPlacement3D());
}

CPlacement3D_* CPlacement3D_new_args(const FLOAT3D_* pos, const ANGLE3D_* angle)
{
  return (CPlacement3D_*)(new CPlacement3D(*((const FLOAT3D*)pos), *((const ANGLE3D*)angle)));
}

CPlacement3D_* CPlacement3D_clone(const CPlacement3D_* p)
{
  return (CPlacement3D_*)(new CPlacement3D(*((const CPlacement3D*)p)));
}

void CPlacement3D_delete(CPlacement3D_* p)
{
  delete ((CPlacement3D*)p);
}

void CPlacement3D_copy(CPlacement3D_* a, const CPlacement3D_* b)
{
  *((CPlacement3D*)a) = *((const CPlacement3D*)b);
}

BOOL CPlacement3D_equal(const CPlacement3D_* a, const CPlacement3D_* b)
{
  return *((const CPlacement3D*)a) == *((const CPlacement3D*)b);
}

void CPlacement3D_Rotate_TrackBall(CPlacement3D_* p, const ANGLE3D_* a)
{
  ((CPlacement3D*)p)->Rotate_TrackBall(*((const ANGLE3D*)a));
}

void CPlacement3D_Rotate_Airplane(CPlacement3D_* p, const ANGLE3D_* a)
{
  ((CPlacement3D*)p)->Rotate_Airplane(*((const ANGLE3D*)a));
}

void CPlacement3D_Rotate_HPB(CPlacement3D_* p, const ANGLE3D_* a)
{
  ((CPlacement3D*)p)->Rotate_HPB(*((const ANGLE3D*)a));
}

void CPlacement3D_Rotate_HPB_OwnSystem(CPlacement3D_* p, const ANGLE3D_* a)
{
  CPlacement3D& pl = *((CPlacement3D*)p);
  FLOATmatrix3D rot_own;
  MakeRotationMatrix(rot_own, pl.pl_OrientationAngle);
  FLOATmatrix3D rot_new;
  MakeRotationMatrix(rot_new, *((const ANGLE3D*)a));
  rot_own *= rot_new;
  DecomposeRotationMatrixNoSnap(pl.pl_OrientationAngle, rot_own);
}

void CPlacement3D_Translate_OwnSystem(CPlacement3D_* p, const FLOAT3D_* t)
{
  ((CPlacement3D*)p)->Translate_OwnSystem(*((const FLOAT3D*)t));
}

void CPlacement3D_Translate_AbsoluteSystem(CPlacement3D_* p, const FLOAT3D_* t)
{
  ((CPlacement3D*)p)->Translate_AbsoluteSystem(*((const FLOAT3D*)t));
}

void CPlacement3D_GetDirectionVector(CPlacement3D_* p, FLOAT3D_* dir)
{
  ((CPlacement3D*)p)->GetDirectionVector(*((FLOAT3D*)dir));
}

void CPlacement3D_AbsoluteToRelative(CPlacement3D_* a, const CPlacement3D_* b)
{
  ((CPlacement3D*)a)->AbsoluteToRelative(*((const CPlacement3D*)b));
}

void CPlacement3D_AbsoluteToRelativeSmooth(CPlacement3D_* a, const CPlacement3D_* b)
{
  ((CPlacement3D*)a)->AbsoluteToRelativeSmooth(*((const CPlacement3D*)b));
}

void CPlacement3D_RelativeToAbsolute(CPlacement3D_* a, const CPlacement3D_* b)
{
  ((CPlacement3D*)a)->RelativeToAbsolute(*((const CPlacement3D*)b));
}

void CPlacement3D_RelativeToAbsoluteSmooth(CPlacement3D_* a, const CPlacement3D_* b)
{
  ((CPlacement3D*)a)->RelativeToAbsoluteSmooth(*((const CPlacement3D*)b));
}

void CPlacement3D_RelativeToRelative(CPlacement3D_* p, const CPlacement3D_* src, const CPlacement3D_* dst)
{
  ((CPlacement3D*)p)->RelativeToRelative(*((const CPlacement3D*)src), *((const CPlacement3D*)dst));
}

void CPlacement3D_RelativeToRelativeSmooth(CPlacement3D_* p, const CPlacement3D_* src, const CPlacement3D_* dst)
{
  ((CPlacement3D*)p)->RelativeToRelativeSmooth(*((const CPlacement3D*)src), *((const CPlacement3D*)dst));
}

void CPlacement3D_Lerp(CPlacement3D_* p, const CPlacement3D_* p0, const CPlacement3D_* p1, FLOAT factor)
{
  ((CPlacement3D*)p)->Lerp(*((const CPlacement3D*)p0), *((const CPlacement3D*)p1), factor);
}

static void sehCPlacement3D_extract(CTStream_* s, CPlacement3D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((CPlacement3D*)p));
  SECAPI_CATCH
}

void CPlacement3D_extract(CTStream_* s, CPlacement3D_* p)
{
  STREAM_TRY
  sehCPlacement3D_extract(s, p);
  STREAM_CATCH
}

static void sehCPlacement3D_insert(CTStream_* s, const CPlacement3D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((const CPlacement3D*)p));
  SECAPI_CATCH
}

void CPlacement3D_insert(CTStream_* s, const CPlacement3D_* p)
{
  STREAM_TRY
  sehCPlacement3D_insert(s, p);
  STREAM_CATCH
}

FLOAT3D_* CPlacement3D_pl_PositionVector(CPlacement3D_* p)
{
  return (FLOAT3D_*)(&(((CPlacement3D*)p)->pl_PositionVector));
}

ANGLE3D_* CPlacement3D_pl_OrientationAngle(CPlacement3D_* p)
{
  return (ANGLE3D_*)(&(((CPlacement3D*)p)->pl_OrientationAngle));
}
