#include "Geometry.h"

void MakeRotationMatrix_(FLOATmatrix3D_* t3dRotation, const ANGLE3D_* a3dAngles)
{
  MakeRotationMatrix(*((FLOATmatrix3D*)t3dRotation), *((const ANGLE3D*)a3dAngles));
}

void MakeRotationMatrixFast_(FLOATmatrix3D_* t3dRotation, const ANGLE3D_* a3dAngles)
{
  MakeRotationMatrixFast(*((FLOATmatrix3D*)t3dRotation), *((const ANGLE3D*)a3dAngles));
}

void MakeInverseRotationMatrix_(FLOATmatrix3D_* t3dRotation, const ANGLE3D_* a3dAngles)
{
  MakeInverseRotationMatrix(*((FLOATmatrix3D*)t3dRotation), *((const ANGLE3D*)a3dAngles));
}

void MakeInverseRotationMatrixFast_(FLOATmatrix3D_* t3dRotation, const ANGLE3D_* a3dAngles)
{
  MakeInverseRotationMatrixFast(*((FLOATmatrix3D*)t3dRotation), *((const ANGLE3D*)a3dAngles));
}

void DecomposeRotationMatrix_(ANGLE3D_* a3dAngles, const FLOATmatrix3D_* t3dRotation)
{
  DecomposeRotationMatrix(*((ANGLE3D*)a3dAngles), *((const FLOATmatrix3D*)t3dRotation));
}

void DecomposeRotationMatrixNoSnap_(ANGLE3D_* a3dAngles, const FLOATmatrix3D_* t3dRotation)
{
  DecomposeRotationMatrixNoSnap(*((ANGLE3D*)a3dAngles), *((const FLOATmatrix3D*)t3dRotation));
}

void AnglesToDirectionVector_(const ANGLE3D_* a3dAngles, FLOAT3D_* vDirection)
{
  AnglesToDirectionVector(*((const ANGLE3D*)a3dAngles), *((FLOAT3D*)vDirection));
}

void DirectionVectorToAngles_(const FLOAT3D_* vDirection, ANGLE3D_* a3dAngles)
{
  DirectionVectorToAngles(*((const FLOAT3D*)vDirection), *((ANGLE3D*)a3dAngles));
}

void DirectionVectorToAnglesNoSnap_(const FLOAT3D_* vDirection, ANGLE3D_* a3dAngles)
{
  DirectionVectorToAnglesNoSnap(*((const FLOAT3D*)vDirection), *((ANGLE3D*)a3dAngles));
}

void UpVectorToAngles_(const FLOAT3D_* vUp, ANGLE3D_* a3dAngles)
{
  UpVectorToAngles(*((const FLOAT3D*)vUp), *((ANGLE3D*)a3dAngles));
}

void MakeRotationMatrixDOUBLE_(DOUBLEmatrix3D_* t3dRotation, const ANGLE3D_* a3dAngles)
{
  (*((DOUBLEmatrix3D*)t3dRotation)) ^= (*((const ANGLE3D*)a3dAngles));
}

void MakeInverseRotationMatrixDOUBLE_(DOUBLEmatrix3D_* t3dRotation, const ANGLE3D_* a3dAngles)
{
  (*((DOUBLEmatrix3D*)t3dRotation)) != (*((const ANGLE3D*)a3dAngles));
}

void DecomposeRotationMatrixDOUBLE_(ANGLE3D_* a3dAngles, const DOUBLEmatrix3D_* t3dRotation)
{
  (*((ANGLE3D*)a3dAngles)) ^= (*((const DOUBLEmatrix3D*)t3dRotation));
}
