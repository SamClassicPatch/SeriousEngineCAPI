#ifndef SECAPI_TEMPLATES_DYNAMIC_CONTAINER_H
#define SECAPI_TEMPLATES_DYNAMIC_CONTAINER_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define DECLARE_CDynamicContainer(TYPE)\
  inline CStaticStackArray_##TYPE##_* CDynamicContainer_##TYPE##_ToStackArray(CDynamicContainer_##TYPE##_* p) { return (CStaticStackArray_##TYPE##_*)p; }\
  inline const CStaticStackArray_##TYPE##_* CDynamicContainer_##TYPE##_ToStackArray_const(const CDynamicContainer_##TYPE##_* p) { return (const CStaticStackArray_##TYPE##_*)p; }\
  SECAPI CDynamicContainer_##TYPE##_* CDynamicContainer_##TYPE##_new();\
  SECAPI CDynamicContainer_##TYPE##_* CDynamicContainer_##TYPE##_clone(const CDynamicContainer_##TYPE##_* p);\
  SECAPI void CDynamicContainer_##TYPE##_delete(CDynamicContainer_##TYPE##_* p);\
  SECAPI void CDynamicContainer_##TYPE##_copy(CDynamicContainer_##TYPE##_* a, CDynamicContainer_##TYPE##_* b);\
  SECAPI INDEX CDynamicContainer_##TYPE##_GetIndex(CDynamicContainer_##TYPE##_* p, TYPE##_* ptMember);\
  SECAPI void CDynamicContainer_##TYPE##_Add(CDynamicContainer_##TYPE##_* p, TYPE##_* ptNewObject);\
  SECAPI void CDynamicContainer_##TYPE##_Remove(CDynamicContainer_##TYPE##_* p, TYPE##_* ptOldObject);\
  SECAPI void CDynamicContainer_##TYPE##_Clear(CDynamicContainer_##TYPE##_* p);\
  SECAPI BOOL CDynamicContainer_##TYPE##_IsMember(CDynamicContainer_##TYPE##_* p, TYPE##_* ptOldObject);\
  SECAPI TYPE##_* CDynamicContainer_##TYPE##_Element(CDynamicContainer_##TYPE##_* p, INDEX iObject);\
  SECAPI const TYPE##_* CDynamicContainer_##TYPE##_Element_const(const CDynamicContainer_##TYPE##_* p, INDEX iObject);\
  SECAPI void CDynamicContainer_##TYPE##_MoveContainer(CDynamicContainer_##TYPE##_* p, CDynamicContainer_##TYPE##_* coOther);\
  SECAPI TYPE##_* CDynamicContainer_##TYPE##_GetFirst(CDynamicContainer_##TYPE##_* p);

DECLARE_CDynamicContainer(CTextureData)
DECLARE_CDynamicContainer(CBrushVertex)

#undef DECLARE_CDynamicContainer

#define DECLARE_CDynamicContainer(TYPE)\
  inline CStaticStackArray_##TYPE##_* CDynamicContainer_##TYPE##_ToStackArray(CDynamicContainer_##TYPE##_* p) { return (CStaticStackArray_##TYPE##_*)p; }\
  inline const CStaticStackArray_##TYPE##_* CDynamicContainer_##TYPE##_ToStackArray_const(const CDynamicContainer_##TYPE##_* p) { return (const CStaticStackArray_##TYPE##_*)p; }\
  SECAPI CDynamicContainer_##TYPE##_* CDynamicContainer_##TYPE##_new();\
  SECAPI CDynamicContainer_##TYPE##_* CDynamicContainer_##TYPE##_clone(const CDynamicContainer_##TYPE##_* p);\
  SECAPI void CDynamicContainer_##TYPE##_delete(CDynamicContainer_##TYPE##_* p);\
  SECAPI void CDynamicContainer_##TYPE##_copy(CDynamicContainer_##TYPE##_* a, CDynamicContainer_##TYPE##_* b);\
  SECAPI INDEX CDynamicContainer_##TYPE##_GetIndex(CDynamicContainer_##TYPE##_* p, TYPE* ptMember);\
  SECAPI void CDynamicContainer_##TYPE##_Add(CDynamicContainer_##TYPE##_* p, TYPE* ptNewObject);\
  SECAPI void CDynamicContainer_##TYPE##_Remove(CDynamicContainer_##TYPE##_* p, TYPE* ptOldObject);\
  SECAPI void CDynamicContainer_##TYPE##_Clear(CDynamicContainer_##TYPE##_* p);\
  SECAPI BOOL CDynamicContainer_##TYPE##_IsMember(CDynamicContainer_##TYPE##_* p, TYPE* ptOldObject);\
  SECAPI TYPE* CDynamicContainer_##TYPE##_Element(CDynamicContainer_##TYPE##_* p, INDEX iObject);\
  SECAPI const TYPE* CDynamicContainer_##TYPE##_Element_const(const CDynamicContainer_##TYPE##_* p, INDEX iObject);\
  SECAPI void CDynamicContainer_##TYPE##_MoveContainer(CDynamicContainer_##TYPE##_* p, CDynamicContainer_##TYPE##_* coOther);\
  SECAPI TYPE_* CDynamicContainer_##TYPE##_GetFirst(CDynamicContainer_##TYPE##_* p);

#undef DECLARE_CDynamicContainer
#ifdef __cplusplus
}
#endif

#endif
