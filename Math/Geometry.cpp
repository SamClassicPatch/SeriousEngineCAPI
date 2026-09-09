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

#include "Geometry.h"

static void DirectionVectorToAnglesNoSnap_Precise(const FLOAT3D &vDirection, ANGLE3D &a3dAngles)
{
  // now calculate the angles
  ANGLE &h = a3dAngles(1);
  ANGLE &p = a3dAngles(2);
  ANGLE &b = a3dAngles(3);

  const FLOAT &x = vDirection(1);
  const FLOAT &y = vDirection(2);
  const FLOAT &z = vDirection(3);

  // banking is always irrelevant
  b = 0;
  // calculate pitch
  p = ASin(y);

  // if y is near +1 or -1
  if (y>0.9999 || y<-0.9999) {
    // heading is irrelevant
    h = 0;
  // otherwise
  } else {
    // calculate heading
    h = ATan2(-x, -z);
  }
}

static void DirectionVectorToAngles_Precise(const FLOAT3D &vDirection, ANGLE3D &a3dAngles)
{
  DirectionVectorToAnglesNoSnap_Precise(vDirection, a3dAngles);

  // snap angles to compensate for errors when converting to and from vector notation
  Snap(a3dAngles(1), ANGLE_SNAP);
  Snap(a3dAngles(2), ANGLE_SNAP);
  Snap(a3dAngles(3), ANGLE_SNAP);
}

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
  DirectionVectorToAngles_Precise(*((const FLOAT3D*)vDirection), *((ANGLE3D*)a3dAngles));
}

void DirectionVectorToAnglesNoSnap_(const FLOAT3D_* vDirection, ANGLE3D_* a3dAngles)
{
  DirectionVectorToAnglesNoSnap_Precise(*((const FLOAT3D*)vDirection), *((ANGLE3D*)a3dAngles));
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
