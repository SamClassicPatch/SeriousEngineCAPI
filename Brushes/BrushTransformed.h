#ifndef SECAPI_BRUSHES_BRUSH_TRANSFORMED_H
#define SECAPI_BRUSHES_BRUSH_TRANSFORMED_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI FLOAT3D_* CWorkingVertex_wvx_vRelative(CWorkingVertex_* p);

SECAPI FLOATplane3D_* CWorkingPlane_wpl_plRelative(CWorkingPlane_* p);
SECAPI CMappingVectors_* CWorkingPlane_wpl_mvRelative(CWorkingPlane_* p);
SECAPI FLOATplane3D_* CWorkingPlane_wpl_plView(CWorkingPlane_* p);
SECAPI CMappingVectors_* CWorkingPlane_wpl_mvView(CWorkingPlane_* p);
SECAPI CPlanarGradients_* CWorkingPlane_wpl_pgOoK(CWorkingPlane_* p);
SECAPI BOOL* CWorkingPlane_wpl_bVisible(CWorkingPlane_* p);

SECAPI INDEX* CWorkingEdge_wed_iwvx0(CWorkingEdge_* p);
SECAPI INDEX* CWorkingEdge_wed_iwvx1(CWorkingEdge_* p);

#ifdef __cplusplus
}
#endif

#endif
