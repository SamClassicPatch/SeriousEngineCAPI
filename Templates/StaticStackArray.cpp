#include "StaticStackArray.h"
#include <Engine/Terrain/ArrayHolder.h>
#include <Engine/Terrain/Terrain.h>

#define IMPL_CStaticStackArray(TYPE)\
  CStaticStackArray_##TYPE##_* CStaticStackArray_##TYPE##_new()\
      {\
        return (CStaticStackArray_##TYPE##_*)(new CStaticStackArray<TYPE>());\
      }\
      \
  CStaticStackArray_##TYPE##_* CStaticStackArray_##TYPE##_clone(const CStaticStackArray_##TYPE##_* p)\
      {\
        CStaticStackArray<TYPE>* a = new CStaticStackArray<TYPE>();\
        *a = *((const CStaticStackArray<TYPE>*)p);\
        return (CStaticStackArray_##TYPE##_*)a;\
      }\
      \
  void CStaticStackArray_##TYPE##_delete(CStaticStackArray_##TYPE##_* p)\
      {\
      delete ((CStaticStackArray<TYPE>*)p);\
      }\
      \
  void CStaticStackArray_##TYPE##_copy(CStaticStackArray_##TYPE##_* a, const CStaticStackArray_##TYPE##_* b)\
      {\
      *((CStaticStackArray<TYPE>*)a) = *((const CStaticStackArray<TYPE>*)b);\
      }\
      \
  void CStaticStackArray_##TYPE##_SetAllocationStep(CStaticStackArray_##TYPE##_* p, INDEX step)\
      {\
      ((CStaticStackArray<TYPE>*)p)->SetAllocationStep(step);\
      }\
      \
  void CStaticStackArray_##TYPE##_New(CStaticStackArray_##TYPE##_* p, INDEX count)\
      {\
      ((CStaticStackArray<TYPE>*)p)->New(count);\
      }\
      \
  void CStaticStackArray_##TYPE##_Delete(CStaticStackArray_##TYPE##_* p)\
      {\
      ((CStaticStackArray<TYPE>*)p)->Delete();\
      }\
      \
  void CStaticStackArray_##TYPE##_Clear(CStaticStackArray_##TYPE##_* p)\
      {\
      ((CStaticStackArray<TYPE>*)p)->Clear();\
      }\
      \
  TYPE##_* CStaticStackArray_##TYPE##_Push(CStaticStackArray_##TYPE##_* p)\
      {\
      return (TYPE##_*)(&(((CStaticStackArray<TYPE>*)p)->Push()));\
      }\
      \
  TYPE##_* CStaticStackArray_##TYPE##_Push_i(CStaticStackArray_##TYPE##_* p, INDEX count)\
      {\
      return (TYPE##_*)(((CStaticStackArray<TYPE>*)p)->Push(count));\
      }\
      \
  TYPE##_* CStaticStackArray_##TYPE##_Pop(CStaticStackArray_##TYPE##_* p)\
      {\
      return (TYPE##_*)(&(((CStaticStackArray<TYPE>*)p)->Pop()));\
      }\
      \
  void CStaticStackArray_##TYPE##_PopUntil(CStaticStackArray_##TYPE##_* p, INDEX newtop)\
      {\
      ((CStaticStackArray<TYPE>*)p)->PopUntil(newtop);\
      }\
      \
  void CStaticStackArray_##TYPE##_PopAll(CStaticStackArray_##TYPE##_* p)\
      {\
      ((CStaticStackArray<TYPE>*)p)->PopAll();\
      }\
      \
  INDEX CStaticStackArray_##TYPE##_Count(const CStaticStackArray_##TYPE##_* p)\
      {\
      return ((const CStaticStackArray<TYPE>*)p)->Count();\
      }\
      \
  void CStaticStackArray_##TYPE##_MoveArray(CStaticStackArray_##TYPE##_* a, CStaticStackArray_##TYPE##_* b)\
      {\
      ((CStaticStackArray<TYPE>*)a)->MoveArray(*((CStaticStackArray<TYPE>*)b));\
      }

IMPL_CStaticStackArray(PIX2D)
IMPL_CStaticStackArray(FLOAT3D)
IMPL_CStaticStackArray(GFXColor)
IMPL_CStaticStackArray(GFXTexCoord)
IMPL_CStaticStackArray(GFXVertex4)
IMPL_CStaticStackArray(TileLayer)
IMPL_CStaticStackArray(TileArrays)
IMPL_CStaticStackArray(CTextureData)
IMPL_CStaticStackArray(QuadTreeNode)
IMPL_CStaticStackArray(QuadTreeLevel)
IMPL_CStaticStackArray(CTerrainLayer)
IMPL_CStaticStackArray(CBrushVertex)

#undef IMPL_CStaticStackArray

#define IMPL_CStaticStackArray(TYPE)\
  CStaticStackArray_##TYPE##_* CStaticStackArray_##TYPE##_new()\
      {\
        return (CStaticStackArray_##TYPE##_*)(new CStaticStackArray<TYPE>());\
      }\
      \
  CStaticStackArray_##TYPE##_* CStaticStackArray_##TYPE##_clone(const CStaticStackArray_##TYPE##_* p)\
      {\
        CStaticStackArray<TYPE>* a = new CStaticStackArray<TYPE>();\
        *a = *((const CStaticStackArray<TYPE>*)p);\
        return (CStaticStackArray_##TYPE##_*)a;\
      }\
      \
  void CStaticStackArray_##TYPE##_delete(CStaticStackArray_##TYPE##_* p)\
      {\
      delete ((CStaticStackArray<TYPE>*)p);\
      }\
      \
  void CStaticStackArray_##TYPE##_copy(CStaticStackArray_##TYPE##_* a, const CStaticStackArray_##TYPE##_* b)\
      {\
      *((CStaticStackArray<TYPE>*)a) = *((const CStaticStackArray<TYPE>*)b);\
      }\
      \
  void CStaticStackArray_##TYPE##_SetAllocationStep(CStaticStackArray_##TYPE##_* p, INDEX step)\
      {\
      ((CStaticStackArray<TYPE>*)p)->SetAllocationStep(step);\
      }\
      \
  void CStaticStackArray_##TYPE##_New(CStaticStackArray_##TYPE##_* p, INDEX count)\
      {\
      ((CStaticStackArray<TYPE>*)p)->New(count);\
      }\
      \
  void CStaticStackArray_##TYPE##_Delete(CStaticStackArray_##TYPE##_* p)\
      {\
      ((CStaticStackArray<TYPE>*)p)->Delete();\
      }\
      \
  void CStaticStackArray_##TYPE##_Clear(CStaticStackArray_##TYPE##_* p)\
      {\
      ((CStaticStackArray<TYPE>*)p)->Clear();\
      }\
      \
  TYPE* CStaticStackArray_##TYPE##_Push(CStaticStackArray_##TYPE##_* p)\
      {\
      return &(((CStaticStackArray<TYPE>*)p)->Push());\
      }\
      \
  TYPE* CStaticStackArray_##TYPE##_Push_i(CStaticStackArray_##TYPE##_* p, INDEX count)\
      {\
      return ((CStaticStackArray<TYPE>*)p)->Push(count);\
      }\
      \
  TYPE* CStaticStackArray_##TYPE##_Pop(CStaticStackArray_##TYPE##_* p)\
      {\
      return &(((CStaticStackArray<TYPE>*)p)->Pop());\
      }\
      \
  void CStaticStackArray_##TYPE##_PopUntil(CStaticStackArray_##TYPE##_* p, INDEX newtop)\
      {\
      ((CStaticStackArray<TYPE>*)p)->PopUntil(newtop);\
      }\
      \
  void CStaticStackArray_##TYPE##_PopAll(CStaticStackArray_##TYPE##_* p)\
      {\
      ((CStaticStackArray<TYPE>*)p)->PopAll();\
      }\
      \
  INDEX CStaticStackArray_##TYPE##_Count(const CStaticStackArray_##TYPE##_* p)\
      {\
      return ((const CStaticStackArray<TYPE>*)p)->Count();\
      }\
      \
  void CStaticStackArray_##TYPE##_MoveArray(CStaticStackArray_##TYPE##_* a, CStaticStackArray_##TYPE##_* b)\
      {\
      ((CStaticStackArray<TYPE>*)a)->MoveArray(*((CStaticStackArray<TYPE>*)b));\
      }

IMPL_CStaticStackArray(SLONG)
IMPL_CStaticStackArray(INDEX)
