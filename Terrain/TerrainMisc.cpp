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
