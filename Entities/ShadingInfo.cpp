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
