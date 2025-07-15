#ifndef SECAPI_MATH_GEOMETRY_H
#define SECAPI_MATH_GEOMETRY_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI void MakeRotationMatrix_(FLOATmatrix3D_* t3dRotation, const ANGLE3D_* a3dAngles);
SECAPI void MakeRotationMatrixFast_(FLOATmatrix3D_* t3dRotation, const ANGLE3D_* a3dAngles);
SECAPI void MakeInverseRotationMatrix_(FLOATmatrix3D_* t3dRotation, const ANGLE3D_* a3dAngles);
SECAPI void MakeInverseRotationMatrixFast_(FLOATmatrix3D_* t3dRotation, const ANGLE3D_* a3dAngles);
SECAPI void DecomposeRotationMatrix_(ANGLE3D_* a3dAngles, const FLOATmatrix3D_* t3dRotation);
SECAPI void DecomposeRotationMatrixNoSnap_(ANGLE3D_* a3dAngles, const FLOATmatrix3D_* t3dRotation);
SECAPI void AnglesToDirectionVector_(const ANGLE3D_* a3dAngles, FLOAT3D_* vDirection);
SECAPI void DirectionVectorToAngles_(const FLOAT3D_* vDirection, ANGLE3D_* a3dAngles);
SECAPI void DirectionVectorToAnglesNoSnap_(const FLOAT3D_* vDirection, ANGLE3D_* a3dAngles);
SECAPI void UpVectorToAngles_(const FLOAT3D_* vUp, ANGLE3D_* a3dAngles);

#ifdef __cplusplus
}
#endif

#endif
