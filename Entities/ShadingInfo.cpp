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

#include "ShadingInfo.h"

CBrushPolygon_** CShadingInfo_si_pbpoPolygon(CShadingInfo_* p)
{
  CShadingInfo& s = *((CShadingInfo*)p);
  return (CBrushPolygon_**)(&s.si_pbpoPolygon);
}

CTerrain_** CShadingInfo_si_ptrTerrain(CShadingInfo_* p)
{
  CShadingInfo& s = *((CShadingInfo*)p);
  return (CTerrain_**)(&s.si_ptrTerrain);
}

FLOAT3D_* CShadingInfo_si_vNearPoint(CShadingInfo_* p)
{
  CShadingInfo& s = *((CShadingInfo*)p);
  return (FLOAT3D_*)(&s.si_vNearPoint);
}

PIX* CShadingInfo_si_pixShadowU(CShadingInfo_* p)
{
  CShadingInfo& s = *((CShadingInfo*)p);
  return &s.si_pixShadowU;
}

PIX* CShadingInfo_si_pixShadowV(CShadingInfo_* p)
{
  CShadingInfo& s = *((CShadingInfo*)p);
  return &s.si_pixShadowV;
}

FLOAT* CShadingInfo_si_fUDRatio(CShadingInfo_* p)
{
  CShadingInfo& s = *((CShadingInfo*)p);
  return &s.si_fUDRatio;
}

FLOAT* CShadingInfo_si_fLRRatio(CShadingInfo_* p)
{
  CShadingInfo& s = *((CShadingInfo*)p);
  return &s.si_fLRRatio;
}

CEntity_** CShadingInfo_si_penEntity(CShadingInfo_* p)
{
  CShadingInfo& s = *((CShadingInfo*)p);
  return (CEntity_**)(&s.si_penEntity);
}
