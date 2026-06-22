#ifndef SECAPI_TEMPLATES_STATIC_STACK_ARRAY_H
#define SECAPI_TEMPLATES_STATIC_STACK_ARRAY_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define DECLARE_CStaticStackArray(TYPE)\
  inline CStaticArray_##TYPE##_* CStaticStackArray_##TYPE##_ToArray(CStaticStackArray_##TYPE##_* p) { return (CStaticArray_##TYPE##_*)p; }\
  inline const CStaticArray_##TYPE##_* CStaticStackArray_##TYPE##_ToArray_const(const CStaticStackArray_##TYPE##_* p) { return (const CStaticArray_##TYPE##_*)p; }\
  SECAPI CStaticStackArray_##TYPE##_* CStaticStackArray_##TYPE##_new();\
  SECAPI CStaticStackArray_##TYPE##_* CStaticStackArray_##TYPE##_clone(const CStaticStackArray_##TYPE##_* p);\
  SECAPI void CStaticStackArray_##TYPE##_delete(CStaticStackArray_##TYPE##_* p);\
  SECAPI void CStaticStackArray_##TYPE##_copy(CStaticStackArray_##TYPE##_* a, const CStaticStackArray_##TYPE##_* b);\
  SECAPI void CStaticStackArray_##TYPE##_SetAllocationStep(CStaticStackArray_##TYPE##_* p, INDEX step);\
  SECAPI void CStaticStackArray_##TYPE##_New(CStaticStackArray_##TYPE##_* p, INDEX count);\
  SECAPI void CStaticStackArray_##TYPE##_Delete(CStaticStackArray_##TYPE##_* p);\
  SECAPI void CStaticStackArray_##TYPE##_Clear(CStaticStackArray_##TYPE##_* p);\
  SECAPI TYPE##_* CStaticStackArray_##TYPE##_Push(CStaticStackArray_##TYPE##_* p);\
  SECAPI TYPE##_* CStaticStackArray_##TYPE##_Push_i(CStaticStackArray_##TYPE##_* p, INDEX count);\
  SECAPI TYPE##_* CStaticStackArray_##TYPE##_Pop(CStaticStackArray_##TYPE##_* p);\
  SECAPI void CStaticStackArray_##TYPE##_PopUntil(CStaticStackArray_##TYPE##_* p, INDEX newtop);\
  SECAPI void CStaticStackArray_##TYPE##_PopAll(CStaticStackArray_##TYPE##_* p);\
  SECAPI INDEX CStaticStackArray_##TYPE##_Count(const CStaticStackArray_##TYPE##_* p);\
  SECAPI void CStaticStackArray_##TYPE##_MoveArray(CStaticStackArray_##TYPE##_* a, CStaticStackArray_##TYPE##_* b);

DECLARE_CStaticStackArray(PIX2D)
DECLARE_CStaticStackArray(FLOAT3D)
DECLARE_CStaticStackArray(GFXColor)
DECLARE_CStaticStackArray(GFXTexCoord)
DECLARE_CStaticStackArray(GFXVertex4)
DECLARE_CStaticStackArray(TileLayer)
DECLARE_CStaticStackArray(TileArrays)
DECLARE_CStaticStackArray(CTextureData)
DECLARE_CStaticStackArray(QuadTreeNode)
DECLARE_CStaticStackArray(QuadTreeLevel)
DECLARE_CStaticStackArray(CTerrainLayer)
DECLARE_CStaticStackArray(CBrushVertex)
DECLARE_CStaticStackArray(CBrushPolygon)
DECLARE_CStaticStackArray(CBrushSector)

#undef DECLARE_CStaticStackArray

#define DECLARE_CStaticStackArray(TYPE)\
  inline CStaticArray_##TYPE##_* CStaticStackArray_##TYPE##_ToArray(CStaticStackArray_##TYPE##_* p) { return (CStaticArray_##TYPE##_*)p; }\
  inline const CStaticArray_##TYPE##_* CStaticStackArray_##TYPE##_ToArray_const(const CStaticStackArray_##TYPE##_* p) { return (const CStaticArray_##TYPE##_*)p; }\
  SECAPI CStaticStackArray_##TYPE##_* CStaticStackArray_##TYPE##_new();\
  SECAPI CStaticStackArray_##TYPE##_* CStaticStackArray_##TYPE##_clone(const CStaticStackArray_##TYPE##_* p);\
  SECAPI void CStaticStackArray_##TYPE##_delete(CStaticStackArray_##TYPE##_* p);\
  SECAPI void CStaticStackArray_##TYPE##_copy(CStaticStackArray_##TYPE##_* a, const CStaticStackArray_##TYPE##_* b);\
  SECAPI void CStaticStackArray_##TYPE##_SetAllocationStep(CStaticStackArray_##TYPE##_* p, INDEX step);\
  SECAPI void CStaticStackArray_##TYPE##_New(CStaticStackArray_##TYPE##_* p, INDEX count);\
  SECAPI void CStaticStackArray_##TYPE##_Delete(CStaticStackArray_##TYPE##_* p);\
  SECAPI void CStaticStackArray_##TYPE##_Clear(CStaticStackArray_##TYPE##_* p);\
  SECAPI TYPE* CStaticStackArray_##TYPE##_Push(CStaticStackArray_##TYPE##_* p);\
  SECAPI TYPE* CStaticStackArray_##TYPE##_Push_i(CStaticStackArray_##TYPE##_* p, INDEX count);\
  SECAPI TYPE* CStaticStackArray_##TYPE##_Pop(CStaticStackArray_##TYPE##_* p);\
  SECAPI void CStaticStackArray_##TYPE##_PopUntil(CStaticStackArray_##TYPE##_* p, INDEX newtop);\
  SECAPI void CStaticStackArray_##TYPE##_PopAll(CStaticStackArray_##TYPE##_* p);\
  SECAPI INDEX CStaticStackArray_##TYPE##_Count(const CStaticStackArray_##TYPE##_* p);\
  SECAPI void CStaticStackArray_##TYPE##_MoveArray(CStaticStackArray_##TYPE##_* a, CStaticStackArray_##TYPE##_* b);

DECLARE_CStaticStackArray(SLONG)
DECLARE_CStaticStackArray(INDEX)

#undef DECLARE_CStaticStackArray
#ifdef __cplusplus
}
#endif

#endif
