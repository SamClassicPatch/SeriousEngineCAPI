#include "DynamicContainer.h"

#define IMPL_CDynamicContainer(TYPE)\
  CDynamicContainer_##TYPE##_* CDynamicContainer_##TYPE##_new()\
  {\
    return (CDynamicContainer_##TYPE##_*)(new CDynamicContainer<TYPE>());\
  }\
  CDynamicContainer_##TYPE##_* CDynamicContainer_##TYPE##_clone(const CDynamicContainer_##TYPE##_* p)\
  {\
    return (CDynamicContainer_##TYPE##_*)(new CDynamicContainer<TYPE>(*((CDynamicContainer<TYPE>*)p)));\
  }\
  void CDynamicContainer_##TYPE##_delete(CDynamicContainer_##TYPE##_* p)\
  {\
    delete ((CDynamicContainer<TYPE>*)p);\
  }\
  void CDynamicContainer_##TYPE##_copy(CDynamicContainer_##TYPE##_* a, CDynamicContainer_##TYPE##_* b)\
  {\
    *((CDynamicContainer<TYPE>*)a) = *((CDynamicContainer<TYPE>*)b);\
  }\
  INDEX CDynamicContainer_##TYPE##_GetIndex(CDynamicContainer_##TYPE##_* p, TYPE##_* ptMember)\
  {\
    return ((CDynamicContainer<TYPE>*)p)->GetIndex((TYPE*)ptMember);\
  }\
  void CDynamicContainer_##TYPE##_Add(CDynamicContainer_##TYPE##_* p, TYPE##_* ptNewObject)\
  {\
    ((CDynamicContainer<TYPE>*)p)->Add((TYPE*)ptNewObject);\
  }\
  void CDynamicContainer_##TYPE##_Remove(CDynamicContainer_##TYPE##_* p, TYPE##_* ptOldObject)\
  {\
    ((CDynamicContainer<TYPE>*)p)->Remove((TYPE*)ptOldObject);\
  }\
  void CDynamicContainer_##TYPE##_Clear(CDynamicContainer_##TYPE##_* p)\
  {\
    ((CDynamicContainer<TYPE>*)p)->Clear();\
  }\
  BOOL CDynamicContainer_##TYPE##_IsMember(CDynamicContainer_##TYPE##_* p, TYPE##_* ptOldObject)\
  {\
    return ((CDynamicContainer<TYPE>*)p)->IsMember((TYPE*)ptOldObject);\
  }\
  TYPE##_* CDynamicContainer_##TYPE##_Element(CDynamicContainer_##TYPE##_* p, INDEX iObject)\
  {\
    return (TYPE##_*)(((CDynamicContainer<TYPE>*)p)->Pointer(iObject));\
  }\
  const TYPE##_* CDynamicContainer_##TYPE##_Element_const(const CDynamicContainer_##TYPE##_* p, INDEX iObject)\
  {\
    return (const TYPE##_*)(((const CDynamicContainer<TYPE>*)p)->Pointer(iObject));\
  }\
  void CDynamicContainer_##TYPE##_MoveContainer(CDynamicContainer_##TYPE##_* p, CDynamicContainer_##TYPE##_* coOther)\
  {\
    ((CDynamicContainer<TYPE>*)p)->MoveContainer(*((CDynamicContainer<TYPE>*)coOther));\
  }\
  TYPE##_* CDynamicContainer_##TYPE##_GetFirst(CDynamicContainer_##TYPE##_* p)\
  {\
    return (TYPE##_*)(&((CDynamicContainer<TYPE>*)p)->GetFirst());\
  }

IMPL_CDynamicContainer(CTextureData)
IMPL_CDynamicContainer(CBrushVertex)

#undef IMPL_CDynamicContainer

#define IMPL_CDynamicContainer(TYPE)\
  CDynamicContainer_##TYPE##_* CDynamicContainer_##TYPE##_new()\
  {\
    return (CDynamicContainer_##TYPE##_*)(new CDynamicContainer<TYPE>());\
  }\
  CDynamicContainer_##TYPE##_* CDynamicContainer_##TYPE##_clone(const CDynamicContainer_##TYPE##_* p)\
  {\
    return (CDynamicContainer_##TYPE##_*)(new CDynamicContainer<TYPE>(*((CDynamicContainer<TYPE>*)p)));\
  }\
  void CDynamicContainer_##TYPE##_delete(CDynamicContainer_##TYPE##_* p)\
  {\
    delete ((CDynamicContainer<TYPE>*)p);\
  }\
  void CDynamicContainer_##TYPE##_copy(CDynamicContainer_##TYPE##_* a, CDynamicContainer_##TYPE##_* b)\
  {\
    *((CDynamicContainer<TYPE>*)a) = *((CDynamicContainer<TYPE>*)b);\
  }\
  INDEX CDynamicContainer_##TYPE##_GetIndex(CDynamicContainer_##TYPE##_* p, TYPE* ptMember)\
  {\
    return ((CDynamicContainer<TYPE>*)p)->GetIndex(ptMember);\
  }\
  void CDynamicContainer_##TYPE##_Add(CDynamicContainer_##TYPE##_* p, TYPE* ptNewObject)\
  {\
    ((CDynamicContainer<TYPE>*)p)->Add(ptNewObject);\
  }\
  void CDynamicContainer_##TYPE##_Remove(CDynamicContainer_##TYPE##_* p, TYPE* ptOldObject)\
  {\
    ((CDynamicContainer<TYPE>*)p)->Remove(ptOldObject);\
  }\
  void CDynamicContainer_##TYPE##_Clear(CDynamicContainer_##TYPE##_* p)\
  {\
    ((CDynamicContainer<TYPE>*)p)->Clear();\
  }\
  BOOL CDynamicContainer_##TYPE##_IsMember(CDynamicContainer_##TYPE##_* p, TYPE* ptOldObject)\
  {\
    return ((CDynamicContainer<TYPE>*)p)->IsMember(ptOldObject);\
  }\
  TYPE* CDynamicContainer_##TYPE##_Element(CDynamicContainer_##TYPE##_* p, INDEX iObject)\
  {\
    return ((CDynamicContainer<TYPE>*)p)->Pointer(iObject);\
  }\
  const TYPE* CDynamicContainer_##TYPE##_Element_const(const CDynamicContainer_##TYPE##_* p, INDEX iObject)\
  {\
    return ((const CDynamicContainer<TYPE>*)p)->Pointer(iObject);\
  }\
  void CDynamicContainer_##TYPE##_MoveContainer(CDynamicContainer_##TYPE##_* p, CDynamicContainer_##TYPE##_* coOther)\
  {\
    ((CDynamicContainer<TYPE>*)p)->MoveContainer(*((CDynamicContainer<TYPE>*)coOther));\
  }\
  TYPE* CDynamicContainer_##TYPE##_GetFirst(CDynamicContainer_##TYPE##_* p)\
  {\
    return &((CDynamicContainer<TYPE>*)p)->GetFirst();\
  }
