#ifndef SECAPI_MATH_TEXTURE_MAPPING_H
#define SECAPI_MATH_TEXTURE_MAPPING_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CPlanarGradients_* CPlanarGradients_new();
SECAPI CPlanarGradients_* CPlanarGradients_clone(const CPlanarGradients_* p);
SECAPI void CPlanarGradients_delete(CPlanarGradients_* p);
SECAPI void CPlanarGradients_copy(CPlanarGradients_* a, const CPlanarGradients_* b);
SECAPI FLOAT* CPlanarGradients_pg_f00(CPlanarGradients_* p);
SECAPI FLOAT* CPlanarGradients_pg_fDOverDI(CPlanarGradients_* p);
SECAPI FLOAT* CPlanarGradients_pg_fDOverDJ(CPlanarGradients_* p);
SECAPI FLOAT CPlanarGradients_GetValue(CPlanarGradients_* p, FLOAT i, FLOAT j);
SECAPI void CPlanarGradients_Constant(CPlanarGradients_* p, FLOAT t);
SECAPI void CPlanarGradients_Multiply(CPlanarGradients_* p, FLOAT t);
SECAPI void CPlanarGradients_Add(CPlanarGradients_* p, FLOAT t);
SECAPI void CPlanarGradients_TranslateOnScreen(CPlanarGradients_* p, FLOAT i, FLOAT j);

SECAPI CMappingDefinitionUI_* CMappingDefinitionUI_new();
SECAPI CMappingDefinitionUI_* CMappingDefinitionUI_clone(const CMappingDefinitionUI_* p);
SECAPI void CMappingDefinitionUI_delete(CMappingDefinitionUI_* p);
SECAPI void CMappingDefinitionUI_copy(CMappingDefinitionUI_* a, const CMappingDefinitionUI_* b);
SECAPI ANGLE* CMappingDefinitionUI_mdui_aURotation(CMappingDefinitionUI_* p);
SECAPI ANGLE* CMappingDefinitionUI_mdui_aVRotation(CMappingDefinitionUI_* p);
SECAPI FLOAT* CMappingDefinitionUI_mdui_fUStretch(CMappingDefinitionUI_* p);
SECAPI FLOAT* CMappingDefinitionUI_mdui_fVStretch(CMappingDefinitionUI_* p);
SECAPI FLOAT* CMappingDefinitionUI_mdui_fUOffset(CMappingDefinitionUI_* p);
SECAPI FLOAT* CMappingDefinitionUI_mdui_fVOffset(CMappingDefinitionUI_* p);

SECAPI CMappingVectors_* CMappingVectors_new();
SECAPI CMappingVectors_* CMappingVectors_clone(const CMappingVectors_* p);
SECAPI void CMappingVectors_delete(CMappingVectors_* p);
SECAPI void CMappingVectors_copy(CMappingVectors_* a, const CMappingVectors_* b);
SECAPI FLOAT3D_* CMappingVectors_mv_vO(CMappingVectors_* p);
SECAPI FLOAT3D_* CMappingVectors_mv_vU(CMappingVectors_* p);
SECAPI FLOAT3D_* CMappingVectors_mv_vV(CMappingVectors_* p);
SECAPI void CMappingVectors_FromPlane(CMappingVectors_* p, const FLOATplane3D_* pl);
SECAPI void CMappingVectors_FromPlane_DOUBLE(CMappingVectors_* p, const DOUBLEplane3D_* pl);
SECAPI void CMappingVectors_ToPlane(const CMappingVectors_* p, FLOATplane3D_* pl);

SECAPI CMappingDefinition_* CMappingDefinition_new();
SECAPI CMappingDefinition_* CMappingDefinition_clone(const CMappingDefinition_* p);
SECAPI void CMappingDefinition_delete(CMappingDefinition_* p);
SECAPI void CMappingDefinition_copy(CMappingDefinition_* a, const CMappingDefinition_* b);
SECAPI FLOAT* CMappingDefinition_md_fUoS(CMappingDefinition_* p);
SECAPI FLOAT* CMappingDefinition_md_fUoT(CMappingDefinition_* p);
SECAPI FLOAT* CMappingDefinition_md_fVoS(CMappingDefinition_* p);
SECAPI FLOAT* CMappingDefinition_md_fVoT(CMappingDefinition_* p);
SECAPI FLOAT* CMappingDefinition_md_fUOffset(CMappingDefinition_* p);
SECAPI FLOAT* CMappingDefinition_md_fVOffset(CMappingDefinition_* p);
SECAPI void CMappingDefinition_ToUI(const CMappingDefinition_* p, CMappingDefinitionUI_* ui);
SECAPI void CMappingDefinition_FromUI(CMappingDefinition_* p, const CMappingDefinitionUI_* ui);
SECAPI void CMappingDefinition_ToMappingVectors(const CMappingDefinition_* p, const CMappingVectors_* d, CMappingVectors_* v);
SECAPI void CMappingDefinition_FromMappingVectors(CMappingDefinition_* p, const CMappingVectors_* d, const CMappingVectors_* v);
SECAPI void CMappingDefinition_MakeMappingVectors(const CMappingDefinition_* p, const CMappingVectors_* src, CMappingVectors_* dst);
SECAPI void CMappingDefinition_TransformMappingVectors(const CMappingDefinition_* p, const CMappingVectors_* src, CMappingVectors_* dst);
SECAPI void CMappingDefinition_ProjectMapping(CMappingDefinition_* p, const FLOATplane3D_* plo, const CMappingDefinition_* mdo, const FLOATplane3D_* pl);
SECAPI void CMappingDefinition_Translate(CMappingDefinition_* p, const CMappingVectors_* d, const FLOAT3D_* v);
SECAPI void CMappingDefinition_Rotate(CMappingDefinition_* p, const CMappingVectors_* d, const FLOAT3D_* vo, ANGLE r);
SECAPI void CMappingDefinition_Center(CMappingDefinition_* p, const CMappingVectors_* d, const FLOAT3D_* v);
SECAPI void CMappingDefinition_Transform(CMappingDefinition_* p, const FLOATplane3D_* pl, const CPlacement3D_* src, const CPlacement3D_* dst);
SECAPI void CMappingDefinition_GetTextureCoordinates(const CMappingDefinition_* p, const CMappingVectors_* d, const FLOAT3D_* v, MEX2D_* t);
SECAPI void CMappingDefinition_GetSpaceCoordinates(const CMappingDefinition_* p, const CMappingVectors_* d, const MEX2D_* t, FLOAT3D_* v);
SECAPI void CMappingDefinition_extract(CTStream_* s, CMappingDefinition_* p);
SECAPI void CMappingDefinition_insert(CTStream_* s, const CMappingDefinition_* p);

#ifdef __cplusplus
}
#endif

#endif
