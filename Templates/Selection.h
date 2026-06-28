#ifndef SECAPI_TEMPLATES_SELECTION_H
#define SECAPI_TEMPLATES_SELECTION_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define DECLARE_CSelection(TYPE)\
  inline CDynamicContainer_##TYPE##_* CSelection_##TYPE##_ToDynamicContainer(CSelection_##TYPE##_* p) { return (CDynamicContainer_##TYPE##_*)p; }\
  inline const CDynamicContainer_##TYPE##_* CSelection_##TYPE##_ToDynamicContainer_const(const CSelection_##TYPE##_* p) { return (const CDynamicContainer_##TYPE##_*)p; }\
  SECAPI CSelection_##TYPE##_* CSelection_##TYPE##_new();\
  SECAPI void CSelection_##TYPE##_delete(CSelection_##TYPE##_* p);\
  SECAPI void CSelection_##TYPE##_Clear(CSelection_##TYPE##_* p);\
  SECAPI void CSelection_##TYPE##_Select(CSelection_##TYPE##_* p, TYPE##_* b);\
  SECAPI void CSelection_##TYPE##_Deselect(CSelection_##TYPE##_* p, TYPE##_* b);\
  SECAPI BOOL CSelection_##TYPE##_IsSelected(CSelection_##TYPE##_* p, TYPE##_* b);\
  SECAPI TYPE##_* CSelection_##TYPE##_GetFirstInSelection(CSelection_##TYPE##_* p);

DECLARE_CSelection(CBrushVertex)
DECLARE_CSelection(CBrushPolygon)
DECLARE_CSelection(CBrushSector)
DECLARE_CSelection(CEntity)

#undef DECLARE_CSelection
#ifdef __cplusplus
}
#endif

#endif
