/* Copyright (c) 2026 SeriousAlexej.
This program is free software; you can redistribute it and/or modify
it under the terms of version 2 of the GNU General Public License as published by
the Free Software Foundation


This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA. */

#include "DynamicArray.h"
#include <Engine/Base/TranslationPair.h>

#define IMPL_CDynamicArray(TYPE)\
  CDynamicArray_##TYPE##_* CDynamicArray_##TYPE##_new()\
  {\
    return (CDynamicArray_##TYPE##_*)(new CDynamicArray<TYPE>());\
  }\
  CDynamicArray_##TYPE##_* CDynamicArray_##TYPE##_clone(CDynamicArray_##TYPE##_* p)\
  {\
    return (CDynamicArray_##TYPE##_*)(new CDynamicArray<TYPE>(*((CDynamicArray<TYPE>*)p)));\
  }\
  void CDynamicArray_##TYPE##_delete(CDynamicArray_##TYPE##_* p)\
  {\
    delete ((CDynamicArray<TYPE>*)p);\
  }\
  void CDynamicArray_##TYPE##_copy(CDynamicArray_##TYPE##_* a, CDynamicArray_##TYPE##_* b)\
  {\
    *((CDynamicArray<TYPE>*)a) = *((CDynamicArray<TYPE>*)b);\
  }\
  void CDynamicArray_##TYPE##_GrowPointers(CDynamicArray_##TYPE##_* p, INDEX count)\
  {\
    ((CDynamicArray<TYPE>*)p)->GrowPointers(count);\
  }\
  void CDynamicArray_##TYPE##_ShrinkPointers(CDynamicArray_##TYPE##_* p, INDEX count)\
  {\
    ((CDynamicArray<TYPE>*)p)->ShrinkPointers(count);\
  }\
  TYPE##_* CDynamicArray_##TYPE##_AllocBlock(CDynamicArray_##TYPE##_* p, INDEX count)\
  {\
    return (TYPE##_*)(((CDynamicArray<TYPE>*)p)->AllocBlock(count));\
  }\
  INDEX CDynamicArray_##TYPE##_GetIndex(CDynamicArray_##TYPE##_* p, TYPE##_* o)\
  {\
    return ((CDynamicArray<TYPE>*)p)->GetIndex((TYPE*)o);\
  }\
  TYPE##_* CDynamicArray_##TYPE##_New(CDynamicArray_##TYPE##_* p, INDEX i)\
  {\
    return (TYPE##_*)(((CDynamicArray<TYPE>*)p)->New(i));\
  }\
  void CDynamicArray_##TYPE##_Delete(CDynamicArray_##TYPE##_* p, TYPE##_* o)\
  {\
    ((CDynamicArray<TYPE>*)p)->Delete((TYPE*)o);\
  }\
  void CDynamicArray_##TYPE##_Clear(CDynamicArray_##TYPE##_* p)\
  {\
    ((CDynamicArray<TYPE>*)p)->Clear();\
  }\
  TYPE##_* CDynamicArray_##TYPE##_Element(CDynamicArray_##TYPE##_* p, INDEX i)\
  {\
    return (TYPE##_*)(((CDynamicArray<TYPE>*)p)->Pointer(i));\
  }\
  const TYPE##_* CDynamicArray_##TYPE##_Element_const(const CDynamicArray_##TYPE##_* p, INDEX i)\
  {\
    return (const TYPE##_*)(((const CDynamicArray<TYPE>*)p)->Pointer(i));\
  }\
  void CDynamicArray_##TYPE##_MoveArray(CDynamicArray_##TYPE##_* a, CDynamicArray_##TYPE##_* b)\
  {\
    ((CDynamicArray<TYPE>*)a)->MoveArray(*((CDynamicArray<TYPE>*)b));\
  }\
  INDEX CDynamicArray_##TYPE##_Count(const CDynamicArray_##TYPE##_* p)\
  {\
    return ((CDynamicArray<TYPE>*)p)->Count();\
  }


IMPL_CDynamicArray(CTString)
IMPL_CDynamicArray(CTFileName)
IMPL_CDynamicArray(CTranslationPair)
IMPL_CDynamicArray(CModelCollisionBox)
IMPL_CDynamicArray(CAttachedModelPosition)
IMPL_CDynamicArray(CObjectPolygonEdge)
IMPL_CDynamicArray(CObjectEdge)
IMPL_CDynamicArray(CObjectVertex)
IMPL_CDynamicArray(CObjectPlane)
IMPL_CDynamicArray(CObjectMaterial)
IMPL_CDynamicArray(CObjectPolygon)
IMPL_CDynamicArray(CBrushSector)

#undef IMPL_CDynamicArray

#define IMPL_CDynamicArray(TYPE)\
  CDynamicArray_##TYPE##_* CDynamicArray_##TYPE##_new()\
  {\
    return (CDynamicArray_##TYPE##_*)(new CDynamicArray<TYPE>());\
  }\
  CDynamicArray_##TYPE##_* CDynamicArray_##TYPE##_clone(CDynamicArray_##TYPE##_* p)\
  {\
    return (CDynamicArray_##TYPE##_*)(new CDynamicArray<TYPE>(*((CDynamicArray<TYPE>*)p)));\
  }\
  void CDynamicArray_##TYPE##_delete(CDynamicArray_##TYPE##_* p)\
  {\
    delete ((CDynamicArray<TYPE>*)p);\
  }\
  void CDynamicArray_##TYPE##_copy(CDynamicArray_##TYPE##_* a, CDynamicArray_##TYPE##_* b)\
  {\
    *((CDynamicArray<TYPE>*)a) = *((CDynamicArray<TYPE>*)b);\
  }\
  void CDynamicArray_##TYPE##_GrowPointers(CDynamicArray_##TYPE##_* p, INDEX count)\
  {\
    ((CDynamicArray<TYPE>*)p)->GrowPointers(count);\
  }\
  void CDynamicArray_##TYPE##_ShrinkPointers(CDynamicArray_##TYPE##_* p, INDEX count)\
  {\
    ((CDynamicArray<TYPE>*)p)->ShrinkPointers(count);\
  }\
  TYPE* CDynamicArray_##TYPE##_AllocBlock(CDynamicArray_##TYPE##_* p, INDEX count)\
  {\
    return ((CDynamicArray<TYPE>*)p)->AllocBlock(count);\
  }\
  INDEX CDynamicArray_##TYPE##_GetIndex(CDynamicArray_##TYPE##_* p, TYPE* o)\
  {\
    return ((CDynamicArray<TYPE>*)p)->GetIndex(o);\
  }\
  TYPE* CDynamicArray_##TYPE##_New(CDynamicArray_##TYPE##_* p, INDEX i)\
  {\
    return ((CDynamicArray<TYPE>*)p)->New(i);\
  }\
  void CDynamicArray_##TYPE##_Delete(CDynamicArray_##TYPE##_* p, TYPE* o)\
  {\
    ((CDynamicArray<TYPE>*)p)->Delete(o);\
  }\
  void CDynamicArray_##TYPE##_Clear(CDynamicArray_##TYPE##_* p)\
  {\
    ((CDynamicArray<TYPE>*)p)->Clear();\
  }\
  TYPE* CDynamicArray_##TYPE##_Element(CDynamicArray_##TYPE##_* p, INDEX i)\
  {\
    return ((CDynamicArray<TYPE>*)p)->Pointer(i);\
  }\
  const TYPE* CDynamicArray_##TYPE##_Element_const(const CDynamicArray_##TYPE##_* p, INDEX i)\
  {\
    return ((const CDynamicArray<TYPE>*)p)->Pointer(i);\
  }\
  void CDynamicArray_##TYPE##_MoveArray(CDynamicArray_##TYPE##_* a, CDynamicArray_##TYPE##_* b)\
  {\
    ((CDynamicArray<TYPE>*)a)->MoveArray(*((CDynamicArray<TYPE>*)b));\
  }\
  INDEX CDynamicArray_##TYPE##_Count(const CDynamicArray_##TYPE##_* p)\
  {\
    return ((CDynamicArray<TYPE>*)p)->Count();\
  }


IMPL_CDynamicArray(FLOAT)

// stupid workaround when Clear member function is not available
#define IMPL_CDynamicArray_NoClear(TYPE)\
  void CDynamicArray_##TYPE##_GrowPointers(CDynamicArray_##TYPE##_* p, INDEX count)\
  {\
    ((CDynamicArray<TYPE>*)p)->GrowPointers(count);\
  }\
  void CDynamicArray_##TYPE##_ShrinkPointers(CDynamicArray_##TYPE##_* p, INDEX count)\
  {\
    ((CDynamicArray<TYPE>*)p)->ShrinkPointers(count);\
  }\
  TYPE##_* CDynamicArray_##TYPE##_AllocBlock(CDynamicArray_##TYPE##_* p, INDEX count)\
  {\
    return (TYPE##_*)(((CDynamicArray<TYPE>*)p)->AllocBlock(count));\
  }\
  INDEX CDynamicArray_##TYPE##_GetIndex(CDynamicArray_##TYPE##_* p, TYPE##_* o)\
  {\
    return ((CDynamicArray<TYPE>*)p)->GetIndex((TYPE*)o);\
  }\
  TYPE##_* CDynamicArray_##TYPE##_New(CDynamicArray_##TYPE##_* p, INDEX i)\
  {\
    return (TYPE##_*)(((CDynamicArray<TYPE>*)p)->New(i));\
  }\
  TYPE##_* CDynamicArray_##TYPE##_Element(CDynamicArray_##TYPE##_* p, INDEX i)\
  {\
    return (TYPE##_*)(((CDynamicArray<TYPE>*)p)->Pointer(i));\
  }\
  const TYPE##_* CDynamicArray_##TYPE##_Element_const(const CDynamicArray_##TYPE##_* p, INDEX i)\
  {\
    return (const TYPE##_*)(((const CDynamicArray<TYPE>*)p)->Pointer(i));\
  }\
  void CDynamicArray_##TYPE##_MoveArray(CDynamicArray_##TYPE##_* a, CDynamicArray_##TYPE##_* b)\
  {\
    ((CDynamicArray<TYPE>*)a)->MoveArray(*((CDynamicArray<TYPE>*)b));\
  }\
  INDEX CDynamicArray_##TYPE##_Count(const CDynamicArray_##TYPE##_* p)\
  {\
    return ((CDynamicArray<TYPE>*)p)->Count();\
  }

IMPL_CDynamicArray_NoClear(CObjectSector)
