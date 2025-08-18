#ifndef SECAPI_ENTITIES_SHADING_INFO_H
#define SECAPI_ENTITIES_SHADING_INFO_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CBrushPolygon_** CShadingInfo_si_pbpoPolygon(CShadingInfo_* p);
SECAPI CTerrain_** CShadingInfo_si_ptrTerrain(CShadingInfo_* p);
SECAPI FLOAT3D_* CShadingInfo_si_vNearPoint(CShadingInfo_* p);
SECAPI PIX* CShadingInfo_si_pixShadowU(CShadingInfo_* p);
SECAPI PIX* CShadingInfo_si_pixShadowV(CShadingInfo_* p);
SECAPI FLOAT* CShadingInfo_si_fUDRatio(CShadingInfo_* p);
SECAPI FLOAT* CShadingInfo_si_fLRRatio(CShadingInfo_* p);
SECAPI CEntity_** CShadingInfo_si_penEntity(CShadingInfo_* p);

#ifdef __cplusplus
}
#endif

#endif
