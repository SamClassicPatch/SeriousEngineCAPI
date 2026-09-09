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

#include "TerrainMisc.h"
#include <Engine/Terrain/TerrainMisc.h>

typedef Vector<INDEX, 2> INDEX2D;

UBYTE GetValueFromMask_(CTerrain_* ptrTerrain, INDEX iLayer, FLOAT3D_* vHitPoint)
{
  return GetValueFromMask((CTerrain*)ptrTerrain, iLayer, *((FLOAT3D*)vHitPoint));
}

INDEX2D_* Calculate2dHitPoint_(CTerrain_* ptrTerrain, FLOAT3D_* vHitPoint)
{
  Point p = Calculate2dHitPoint((CTerrain*)ptrTerrain, *((FLOAT3D*)vHitPoint));
  return (INDEX2D_*)(new INDEX2D(p.pt_iX, p.pt_iY));
}
