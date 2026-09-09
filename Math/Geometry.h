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

SECAPI void MakeRotationMatrixDOUBLE_(DOUBLEmatrix3D_* t3dRotation, const ANGLE3D_* a3dAngles);
SECAPI void MakeInverseRotationMatrixDOUBLE_(DOUBLEmatrix3D_* t3dRotation, const ANGLE3D_* a3dAngles);
SECAPI void DecomposeRotationMatrixDOUBLE_(ANGLE3D_* a3dAngles, const DOUBLEmatrix3D_* t3dRotation);

#ifdef __cplusplus
}
#endif

#endif
