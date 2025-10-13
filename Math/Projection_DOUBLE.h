#ifndef SECAPI_MATH_PROJECTION_DOUBLE_H
#define SECAPI_MATH_PROJECTION_DOUBLE_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CSimpleProjection3D_DOUBLE_* CSimpleProjection3D_DOUBLE_new();
SECAPI CSimpleProjection3D_DOUBLE_* CSimpleProjection3D_DOUBLE_clone(const CSimpleProjection3D_DOUBLE_* p);
SECAPI void CSimpleProjection3D_DOUBLE_delete(CSimpleProjection3D_DOUBLE_* p);
SECAPI void CSimpleProjection3D_DOUBLE_copy(CSimpleProjection3D_DOUBLE_* a, const CSimpleProjection3D_DOUBLE_* b);
SECAPI CPlacement3D_* CSimpleProjection3D_DOUBLE_pr_ObjectPlacement(CSimpleProjection3D_DOUBLE_* p);
SECAPI CPlacement3D_* CSimpleProjection3D_DOUBLE_pr_ViewerPlacement(CSimpleProjection3D_DOUBLE_* p);
SECAPI FLOAT3D_* CSimpleProjection3D_DOUBLE_pr_ObjectStretch(CSimpleProjection3D_DOUBLE_* p);
SECAPI BOOL* CSimpleProjection3D_DOUBLE_pr_Prepared(CSimpleProjection3D_DOUBLE_* p);
SECAPI DOUBLEmatrix3D_* CSimpleProjection3D_DOUBLE_pr_RotationMatrix(CSimpleProjection3D_DOUBLE_* p);
SECAPI DOUBLEmatrix3D_* CSimpleProjection3D_DOUBLE_pr_ViewerRotationMatrix(CSimpleProjection3D_DOUBLE_* p);
SECAPI DOUBLE3D_* CSimpleProjection3D_DOUBLE_pr_TranslationVector(CSimpleProjection3D_DOUBLE_* p);
SECAPI void CSimpleProjection3D_DOUBLE_Prepare(CSimpleProjection3D_DOUBLE_* p);
SECAPI void CSimpleProjection3D_DOUBLE_ProjectCoordinate(const CSimpleProjection3D_DOUBLE_* p, const DOUBLE3D_* v3dObjectPoint, DOUBLE3D_* v3dViewPoint);
SECAPI void CSimpleProjection3D_DOUBLE_ProjectDirection(const CSimpleProjection3D_DOUBLE_* p, const DOUBLE3D_* v3dObjectPoint, DOUBLE3D_* v3dViewPoint);
SECAPI void CSimpleProjection3D_DOUBLE_ProjectPlacement(const CSimpleProjection3D_DOUBLE_* p, const CPlacement3D_* plObject, CPlacement3D_* plView);
SECAPI void CSimpleProjection3D_DOUBLE_ProjectMapping(const CSimpleProjection3D_DOUBLE_* p, const CMappingDefinition_* mdObject, const DOUBLEplane3D_* plObject, CMappingDefinition_* mdView);
SECAPI void CSimpleProjection3D_DOUBLE_ProjectAABBox(const CSimpleProjection3D_DOUBLE_* p, const DOUBLEaabbox3D_* boxObject, DOUBLEaabbox3D_* boxView);
SECAPI void CSimpleProjection3D_DOUBLE_Project(const CSimpleProjection3D_DOUBLE_* p, const DOUBLEplane3D_* p3dObjectPlane, DOUBLEplane3D_* v3dTransformedPlane);

#ifdef __cplusplus
}
#endif

#endif
