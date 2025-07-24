#include "TextureMapping.h"

CPlanarGradients_* CPlanarGradients_new()
{
  return (CPlanarGradients_*)(new CPlanarGradients());
}

CPlanarGradients_* CPlanarGradients_clone(const CPlanarGradients_* p)
{
  return (CPlanarGradients_*)(new CPlanarGradients(*((const CPlanarGradients*)p)));
}

void CPlanarGradients_delete(CPlanarGradients_* p)
{
  delete ((CPlanarGradients*)p);
}

void CPlanarGradients_copy(CPlanarGradients_* a, const CPlanarGradients_* b)
{
  *((CPlanarGradients*)a) = *((const CPlanarGradients*)b);
}

FLOAT* CPlanarGradients_pg_f00(CPlanarGradients_* p)
{
  CPlanarGradients& g = *((CPlanarGradients*)p);
  return &(g.pg_f00);
}

FLOAT* CPlanarGradients_pg_fDOverDI(CPlanarGradients_* p)
{
  CPlanarGradients& g = *((CPlanarGradients*)p);
  return &(g.pg_fDOverDI);
}

FLOAT* CPlanarGradients_pg_fDOverDJ(CPlanarGradients_* p)
{
  CPlanarGradients& g = *((CPlanarGradients*)p);
  return &(g.pg_fDOverDJ);
}

FLOAT CPlanarGradients_GetValue(CPlanarGradients_* p, FLOAT i, FLOAT j)
{
  return ((CPlanarGradients*)p)->GetValue(i, j);
}

void CPlanarGradients_Constant(CPlanarGradients_* p, FLOAT t)
{
  ((CPlanarGradients*)p)->Constant(t);
}

void CPlanarGradients_Multiply(CPlanarGradients_* p, FLOAT t)
{
  ((CPlanarGradients*)p)->Multiply(t);
}

void CPlanarGradients_Add(CPlanarGradients_* p, FLOAT t)
{
  ((CPlanarGradients*)p)->Add(t);
}

void CPlanarGradients_TranslateOnScreen(CPlanarGradients_* p, FLOAT i, FLOAT j)
{
  ((CPlanarGradients*)p)->TranslateOnScreen(i, j);
}


CMappingDefinitionUI_* CMappingDefinitionUI_new()
{
  return (CMappingDefinitionUI_*)(new CMappingDefinitionUI());
}

CMappingDefinitionUI_* CMappingDefinitionUI_clone(const CMappingDefinitionUI_* p)
{
  return (CMappingDefinitionUI_*)(new CMappingDefinitionUI(*((const CMappingDefinitionUI*)p)));
}

void CMappingDefinitionUI_delete(CMappingDefinitionUI_* p)
{
  delete ((CMappingDefinitionUI*)p);
}

void CMappingDefinitionUI_copy(CMappingDefinitionUI_* a, const CMappingDefinitionUI_* b)
{
  *((CMappingDefinitionUI*)a) = *((const CMappingDefinitionUI*)b);
}

ANGLE* CMappingDefinitionUI_mdui_aURotation(CMappingDefinitionUI_* p)
{
  CMappingDefinitionUI& d = *((CMappingDefinitionUI*)p);
  return &(d.mdui_aURotation);
}

ANGLE* CMappingDefinitionUI_mdui_aVRotation(CMappingDefinitionUI_* p)
{
  CMappingDefinitionUI& d = *((CMappingDefinitionUI*)p);
  return &(d.mdui_aVRotation);
}

FLOAT* CMappingDefinitionUI_mdui_fUStretch(CMappingDefinitionUI_* p)
{
  CMappingDefinitionUI& d = *((CMappingDefinitionUI*)p);
  return &(d.mdui_fUStretch);
}

FLOAT* CMappingDefinitionUI_mdui_fVStretch(CMappingDefinitionUI_* p)
{
  CMappingDefinitionUI& d = *((CMappingDefinitionUI*)p);
  return &(d.mdui_fVStretch);
}

FLOAT* CMappingDefinitionUI_mdui_fUOffset(CMappingDefinitionUI_* p)
{
  CMappingDefinitionUI& d = *((CMappingDefinitionUI*)p);
  return &(d.mdui_fUOffset);
}

FLOAT* CMappingDefinitionUI_mdui_fVOffset(CMappingDefinitionUI_* p)
{
  CMappingDefinitionUI& d = *((CMappingDefinitionUI*)p);
  return &(d.mdui_fVOffset);
}


CMappingVectors_* CMappingVectors_new()
{
  return (CMappingVectors_*)(new CMappingVectors());
}

CMappingVectors_* CMappingVectors_clone(const CMappingVectors_* p)
{
  return (CMappingVectors_*)(new CMappingVectors(*((const CMappingVectors*)p)));
}

void CMappingVectors_delete(CMappingVectors_* p)
{
  delete ((CMappingVectors*)p);
}

void CMappingVectors_copy(CMappingVectors_* a, const CMappingVectors_* b)
{
  *((CMappingVectors*)a) = *((const CMappingVectors*)b);
}

FLOAT3D_* CMappingVectors_mv_vO(CMappingVectors_* p)
{
  CMappingVectors& v = *((CMappingVectors*)p);
  return (FLOAT3D_*)(&(v.mv_vO));
}

FLOAT3D_* CMappingVectors_mv_vU(CMappingVectors_* p)
{
  CMappingVectors& v = *((CMappingVectors*)p);
  return (FLOAT3D_*)(&(v.mv_vU));
}

FLOAT3D_* CMappingVectors_mv_vV(CMappingVectors_* p)
{
  CMappingVectors& v = *((CMappingVectors*)p);
  return (FLOAT3D_*)(&(v.mv_vV));
}

void CMappingVectors_FromPlane(CMappingVectors_* p, const FLOATplane3D_* pl)
{
  ((CMappingVectors*)p)->FromPlane(*((const FLOATplane3D*)pl));
}

void CMappingVectors_FromPlane_DOUBLE(CMappingVectors_* p, const DOUBLEplane3D_* pl)
{
  ((CMappingVectors*)p)->FromPlane_DOUBLE(*((const DOUBLEplane3D*)pl));
}

void CMappingVectors_ToPlane(const CMappingVectors_* p, FLOATplane3D_* pl)
{
  ((const CMappingVectors*)p)->ToPlane(*((FLOATplane3D*)pl));
}


CMappingDefinition_* CMappingDefinition_new()
{
  return (CMappingDefinition_*)(new CMappingDefinition());
}

CMappingDefinition_* CMappingDefinition_clone(const CMappingDefinition_* p)
{
  return (CMappingDefinition_*)(new CMappingDefinition(*((const CMappingDefinition*)p)));
}

void CMappingDefinition_delete(CMappingDefinition_* p)
{
  delete ((CMappingDefinition*)p);
}

void CMappingDefinition_copy(CMappingDefinition_* a, const CMappingDefinition_* b)
{
  *((CMappingDefinition*)a) = *((const CMappingDefinition*)b);
}

FLOAT* CMappingDefinition_md_fUoS(CMappingDefinition_* p)
{
  CMappingDefinition& d = *((CMappingDefinition*)p);
  return &(d.md_fUoS);
}

FLOAT* CMappingDefinition_md_fUoT(CMappingDefinition_* p)
{
  CMappingDefinition& d = *((CMappingDefinition*)p);
  return &(d.md_fUoT);
}

FLOAT* CMappingDefinition_md_fVoS(CMappingDefinition_* p)
{
  CMappingDefinition& d = *((CMappingDefinition*)p);
  return &(d.md_fVoS);
}

FLOAT* CMappingDefinition_md_fVoT(CMappingDefinition_* p)
{
  CMappingDefinition& d = *((CMappingDefinition*)p);
  return &(d.md_fVoT);
}

FLOAT* CMappingDefinition_md_fUOffset(CMappingDefinition_* p)
{
  CMappingDefinition& d = *((CMappingDefinition*)p);
  return &(d.md_fUOffset);
}

FLOAT* CMappingDefinition_md_fVOffset(CMappingDefinition_* p)
{
  CMappingDefinition& d = *((CMappingDefinition*)p);
  return &(d.md_fVOffset);
}

void CMappingDefinition_ToUI(const CMappingDefinition_* p, CMappingDefinitionUI_* ui)
{
  ((const CMappingDefinition*)p)->ToUI(*((CMappingDefinitionUI*)ui));
}

void CMappingDefinition_FromUI(CMappingDefinition_* p, const CMappingDefinitionUI_* ui)
{
  ((CMappingDefinition*)p)->FromUI(*((const CMappingDefinitionUI*)ui));
}

void CMappingDefinition_ToMappingVectors(const CMappingDefinition_* p, const CMappingVectors_* d, CMappingVectors_* v)
{
  ((const CMappingDefinition*)p)->ToMappingVectors(*((const CMappingVectors*)d), *((CMappingVectors*)v));
}

void CMappingDefinition_FromMappingVectors(CMappingDefinition_* p, const CMappingVectors_* d, const CMappingVectors_* v)
{
  ((CMappingDefinition*)p)->FromMappingVectors(*((const CMappingVectors*)d), *((const CMappingVectors*)v));
}

void CMappingDefinition_MakeMappingVectors(const CMappingDefinition_* p, const CMappingVectors_* src, CMappingVectors_* dst)
{
  ((const CMappingDefinition*)p)->MakeMappingVectors(*((const CMappingVectors*)src), *((CMappingVectors*)dst));
}

void CMappingDefinition_TransformMappingVectors(const CMappingDefinition_* p, const CMappingVectors_* src, CMappingVectors_* dst)
{
  ((const CMappingDefinition*)p)->TransformMappingVectors(*((const CMappingVectors*)src), *((CMappingVectors*)dst));
}

void CMappingDefinition_ProjectMapping(CMappingDefinition_* p, const FLOATplane3D_* plo, const CMappingDefinition_* mdo, const FLOATplane3D_* pl)
{
  ((CMappingDefinition*)p)->ProjectMapping(*((const FLOATplane3D*)plo), *((const CMappingDefinition*)mdo), *((const FLOATplane3D*)pl));
}

void CMappingDefinition_Translate(CMappingDefinition_* p, const CMappingVectors_* d, const FLOAT3D_* v)
{
  ((CMappingDefinition*)p)->Translate(*((const CMappingVectors*)d), *((const FLOAT3D*)v));
}

void CMappingDefinition_Rotate(CMappingDefinition_* p, const CMappingVectors_* d, const FLOAT3D_* vo, ANGLE r)
{
  ((CMappingDefinition*)p)->Rotate(*((const CMappingVectors*)d), *((const FLOAT3D*)vo), r);
}

void CMappingDefinition_Center(CMappingDefinition_* p, const CMappingVectors_* d, const FLOAT3D_* v)
{
  ((CMappingDefinition*)p)->Center(*((CMappingVectors*)d), *((const FLOAT3D*)v));
}

void CMappingDefinition_Transform(CMappingDefinition_* p, const FLOATplane3D_* pl, const CPlacement3D_* src, const CPlacement3D_* dst)
{
  ((CMappingDefinition*)p)->Transform(*((const FLOATplane3D*)pl), *((const CPlacement3D*)src), *((const CPlacement3D*)dst));
}

void CMappingDefinition_GetTextureCoordinates(const CMappingDefinition_* p, const CMappingVectors_* d, const FLOAT3D_* v, MEX2D_* t)
{
  ((const CMappingDefinition*)p)->GetTextureCoordinates(*((const CMappingVectors*)d), *((const FLOAT3D*)v), *((MEX2D*)t));
}

void CMappingDefinition_GetSpaceCoordinates(const CMappingDefinition_* p, const CMappingVectors_* d, const MEX2D_* t, FLOAT3D_* v)
{
  ((const CMappingDefinition*)p)->GetSpaceCoordinates(*((const CMappingVectors*)d), *((const MEX2D*)t), *((FLOAT3D*)v));
}

static void sehCMappingDefinition_extract(CTStream_* s, CMappingDefinition_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((CMappingDefinition*)p));
  SECAPI_CATCH
}

void CMappingDefinition_extract(CTStream_* s, CMappingDefinition_* p)
{
  STREAM_TRY
  sehCMappingDefinition_extract(s, p);
  STREAM_CATCH
}

static void sehCMappingDefinition_insert(CTStream_* s, const CMappingDefinition_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((const CMappingDefinition*)p));
  SECAPI_CATCH
}

void CMappingDefinition_insert(CTStream_* s, const CMappingDefinition_* p)
{
  STREAM_TRY
  sehCMappingDefinition_insert(s, p);
  STREAM_CATCH
}
