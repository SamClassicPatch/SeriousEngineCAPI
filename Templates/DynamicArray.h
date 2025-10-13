#ifndef SECAPI_TEMPLATES_DYNAMIC_ARRAY_H
#define SECAPI_TEMPLATES_DYNAMIC_ARRAY_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define DECLARE_CDynamicArray(TYPE)\
  SECAPI CDynamicArray_##TYPE##_* CDynamicArray_##TYPE##_new();\
  SECAPI CDynamicArray_##TYPE##_* CDynamicArray_##TYPE##_clone(CDynamicArray_##TYPE##_* p);\
  SECAPI void CDynamicArray_##TYPE##_delete(CDynamicArray_##TYPE##_* p);\
  SECAPI void CDynamicArray_##TYPE##_copy(CDynamicArray_##TYPE##_* a, CDynamicArray_##TYPE##_* b);\
  SECAPI void CDynamicArray_##TYPE##_GrowPointers(CDynamicArray_##TYPE##_* p, INDEX count);\
  SECAPI void CDynamicArray_##TYPE##_ShrinkPointers(CDynamicArray_##TYPE##_* p, INDEX count);\
  SECAPI TYPE##_* CDynamicArray_##TYPE##_AllocBlock(CDynamicArray_##TYPE##_* p, INDEX count);\
  SECAPI INDEX CDynamicArray_##TYPE##_GetIndex(CDynamicArray_##TYPE##_* p, TYPE##_* o);\
  SECAPI TYPE##_* CDynamicArray_##TYPE##_New(CDynamicArray_##TYPE##_* p, INDEX i);\
  SECAPI void CDynamicArray_##TYPE##_Delete(CDynamicArray_##TYPE##_* p, TYPE##_* o);\
  SECAPI void CDynamicArray_##TYPE##_Clear(CDynamicArray_##TYPE##_* p);\
  SECAPI TYPE##_* CDynamicArray_##TYPE##_Element(CDynamicArray_##TYPE##_* p, INDEX i);\
  SECAPI const TYPE##_* CDynamicArray_##TYPE##_Element_const(const CDynamicArray_##TYPE##_* p, INDEX i);\
  SECAPI void CDynamicArray_##TYPE##_MoveArray(CDynamicArray_##TYPE##_* a, CDynamicArray_##TYPE##_* b);\
  SECAPI INDEX CDynamicArray_##TYPE##_Count(const CDynamicArray_##TYPE##_* p);

DECLARE_CDynamicArray(CTString)
DECLARE_CDynamicArray(CTFileName)
DECLARE_CDynamicArray(CTranslationPair)
DECLARE_CDynamicArray(CModelCollisionBox)
DECLARE_CDynamicArray(CAttachedModelPosition)
DECLARE_CDynamicArray(CObjectPolygonEdge)
DECLARE_CDynamicArray(CObjectEdge)
DECLARE_CDynamicArray(CObjectVertex)
DECLARE_CDynamicArray(CObjectPlane)
DECLARE_CDynamicArray(CObjectMaterial)
DECLARE_CDynamicArray(CObjectPolygon)

#undef DECLARE_CDynamicArray

#define DECLARE_CDynamicArray(TYPE)\
  SECAPI CDynamicArray_##TYPE##_* CDynamicArray_##TYPE##_new();\
  SECAPI CDynamicArray_##TYPE##_* CDynamicArray_##TYPE##_clone(CDynamicArray_##TYPE##_* p);\
  SECAPI void CDynamicArray_##TYPE##_delete(CDynamicArray_##TYPE##_* p);\
  SECAPI void CDynamicArray_##TYPE##_copy(CDynamicArray_##TYPE##_* a, CDynamicArray_##TYPE##_* b);\
  SECAPI void CDynamicArray_##TYPE##_GrowPointers(CDynamicArray_##TYPE##_* p, INDEX count);\
  SECAPI void CDynamicArray_##TYPE##_ShrinkPointers(CDynamicArray_##TYPE##_* p, INDEX count);\
  SECAPI TYPE* CDynamicArray_##TYPE##_AllocBlock(CDynamicArray_##TYPE##_* p, INDEX count);\
  SECAPI INDEX CDynamicArray_##TYPE##_GetIndex(CDynamicArray_##TYPE##_* p, TYPE* o);\
  SECAPI TYPE* CDynamicArray_##TYPE##_New(CDynamicArray_##TYPE##_* p, INDEX i);\
  SECAPI void CDynamicArray_##TYPE##_Delete(CDynamicArray_##TYPE##_* p, TYPE* o);\
  SECAPI void CDynamicArray_##TYPE##_Clear(CDynamicArray_##TYPE##_* p);\
  SECAPI TYPE* CDynamicArray_##TYPE##_Element(CDynamicArray_##TYPE##_* p, INDEX i);\
  SECAPI const TYPE* CDynamicArray_##TYPE##_Element_const(const CDynamicArray_##TYPE##_* p, INDEX i);\
  SECAPI void CDynamicArray_##TYPE##_MoveArray(CDynamicArray_##TYPE##_* a, CDynamicArray_##TYPE##_* b);\
  SECAPI INDEX CDynamicArray_##TYPE##_Count(const CDynamicArray_##TYPE##_* p);

DECLARE_CDynamicArray(FLOAT)

#undef DECLARE_CDynamicArray

#define DECLARE_CDynamicArray_NoClear(TYPE)\
  SECAPI void CDynamicArray_##TYPE##_GrowPointers(CDynamicArray_##TYPE##_* p, INDEX count);\
  SECAPI void CDynamicArray_##TYPE##_ShrinkPointers(CDynamicArray_##TYPE##_* p, INDEX count);\
  SECAPI TYPE##_* CDynamicArray_##TYPE##_AllocBlock(CDynamicArray_##TYPE##_* p, INDEX count);\
  SECAPI INDEX CDynamicArray_##TYPE##_GetIndex(CDynamicArray_##TYPE##_* p, TYPE##_* o);\
  SECAPI TYPE##_* CDynamicArray_##TYPE##_New(CDynamicArray_##TYPE##_* p, INDEX i);\
  SECAPI TYPE##_* CDynamicArray_##TYPE##_Element(CDynamicArray_##TYPE##_* p, INDEX i);\
  SECAPI const TYPE##_* CDynamicArray_##TYPE##_Element_const(const CDynamicArray_##TYPE##_* p, INDEX i);\
  SECAPI void CDynamicArray_##TYPE##_MoveArray(CDynamicArray_##TYPE##_* a, CDynamicArray_##TYPE##_* b);\
  SECAPI INDEX CDynamicArray_##TYPE##_Count(const CDynamicArray_##TYPE##_* p);

DECLARE_CDynamicArray_NoClear(CObjectSector)

#undef DECLARE_CDynamicArray_NoClear

#ifdef __cplusplus
}
#endif

#endif
