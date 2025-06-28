#ifndef SECAPI_MATH_PLACEMENT_H
#define SECAPI_MATH_PLACEMENT_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CPlacement3D_* CPlacement3D_new();
SECAPI CPlacement3D_* CPlacement3D_new_args(const FLOAT3D_* pos, const ANGLE3D_* angle);
SECAPI CPlacement3D_* CPlacement3D_clone(const CPlacement3D_* p);
SECAPI void CPlacement3D_delete(CPlacement3D_* p);
SECAPI void CPlacement3D_copy(CPlacement3D_* a, const CPlacement3D_* b);
SECAPI BOOL CPlacement3D_equal(const CPlacement3D_* a, const CPlacement3D_* b);
SECAPI void CPlacement3D_Rotate_TrackBall(CPlacement3D_* p, const ANGLE3D_* a);
SECAPI void CPlacement3D_Rotate_Airplane(CPlacement3D_* p, const ANGLE3D_* a);
SECAPI void CPlacement3D_Rotate_HPB(CPlacement3D_* p, const ANGLE3D_* a);
SECAPI void CPlacement3D_Rotate_HPB_OwnSystem(CPlacement3D_* p, const ANGLE3D_* a);
SECAPI void CPlacement3D_Translate_OwnSystem(CPlacement3D_* p, const FLOAT3D_* t);
SECAPI void CPlacement3D_Translate_AbsoluteSystem(CPlacement3D_* p, const FLOAT3D_* t);
SECAPI void CPlacement3D_GetDirectionVector(CPlacement3D_* p, FLOAT3D_* dir);
SECAPI void CPlacement3D_AbsoluteToRelative(CPlacement3D_* a, const CPlacement3D_* b);
SECAPI void CPlacement3D_AbsoluteToRelativeSmooth(CPlacement3D_* a, const CPlacement3D_* b);
SECAPI void CPlacement3D_RelativeToAbsolute(CPlacement3D_* a, const CPlacement3D_* b);
SECAPI void CPlacement3D_RelativeToAbsoluteSmooth(CPlacement3D_* a, const CPlacement3D_* b);
SECAPI void CPlacement3D_RelativeToRelative(CPlacement3D_* p, const CPlacement3D_* src, const CPlacement3D_* dst);
SECAPI void CPlacement3D_RelativeToRelativeSmooth(CPlacement3D_* p, const CPlacement3D_* src, const CPlacement3D_* dst);
SECAPI void CPlacement3D_Lerp(CPlacement3D_* p, const CPlacement3D_* p0, const CPlacement3D_* p1, FLOAT factor);
SECAPI void CPlacement3D_extract(CTStream_* s, CPlacement3D_* p);
SECAPI void CPlacement3D_insert(CTStream_* s, const CPlacement3D_* p);
SECAPI FLOAT3D_* CPlacement3D_pl_PositionVector(CPlacement3D_* p);
SECAPI ANGLE3D_* CPlacement3D_pl_OrientationAngle(CPlacement3D_* p);

#ifdef __cplusplus
}
#endif

#endif
