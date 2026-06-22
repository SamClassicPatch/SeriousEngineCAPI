#include "Selection.h"

#define IMPL_CSelection(TYPE, FLAG)\
  CSelection_##TYPE##_* CSelection_##TYPE##_new()\
  {\
    return (CSelection_##TYPE##_*)(new CSelection<TYPE, FLAG>());\
  }\
  void CSelection_##TYPE##_delete(CSelection_##TYPE##_* p)\
  {\
    delete ((CSelection<TYPE, FLAG>*)p);\
  }\
  void CSelection_##TYPE##_Clear(CSelection_##TYPE##_* p)\
  {\
    ((CSelection<TYPE, FLAG>*)p)->Clear();\
  }\
  void CSelection_##TYPE##_Select(CSelection_##TYPE##_* p, TYPE##_* b)\
  {\
    ((CSelection<TYPE, FLAG>*)p)->Select(*((TYPE*)b));\
  }\
  void CSelection_##TYPE##_Deselect(CSelection_##TYPE##_* p, TYPE##_* b)\
  {\
    ((CSelection<TYPE, FLAG>*)p)->Deselect(*((TYPE*)b));\
  }\
  BOOL CSelection_##TYPE##_IsSelected(CSelection_##TYPE##_* p, TYPE##_* b)\
  {\
    return ((CSelection<TYPE, FLAG>*)p)->IsSelected(*((TYPE*)b));\
  }\
  TYPE##_* CSelection_##TYPE##_GetFirstInSelection(CSelection_##TYPE##_* p)\
  {\
    return (TYPE##_*)(((CSelection<TYPE, FLAG>*)p)->GetFirstInSelection());\
  }

IMPL_CSelection(CBrushVertex, BVXF_SELECTED)
IMPL_CSelection(CBrushPolygon, BPOF_SELECTED)
IMPL_CSelection(CBrushSector, BSCF_SELECTED)
