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

#include "DynamicStackArray.h"

#define IMPL_CDynamicStackArray(TYPE)\
  CDynamicStackArray_##TYPE##_* CDynamicStackArray_##TYPE##_new()\
  {\
    return (CDynamicStackArray_##TYPE##_*)(new CDynamicStackArray<TYPE>());\
  }\
  CDynamicStackArray_##TYPE##_* CDynamicStackArray_##TYPE##_clone(CDynamicStackArray_##TYPE##_* p)\
  {\
    CDynamicStackArray<TYPE>* a = new CDynamicStackArray<TYPE>();\
    *a = *((CDynamicStackArray<TYPE>*)p);\
    return (CDynamicStackArray_##TYPE##_*)a;\
  }\
  void CDynamicStackArray_##TYPE##_delete(CDynamicStackArray_##TYPE##_* p)\
  {\
    delete ((CDynamicStackArray<TYPE>*)p);\
  }\
  void CDynamicStackArray_##TYPE##_copy(CDynamicStackArray_##TYPE##_* a, CDynamicStackArray_##TYPE##_* b)\
  {\
    *((CDynamicStackArray<TYPE>*)a) = *((CDynamicStackArray<TYPE>*)b);\
  }\
  void CDynamicStackArray_##TYPE##_SetAllocationStep(CDynamicStackArray_##TYPE##_* p, INDEX step)\
  {\
    ((CDynamicStackArray<TYPE>*)p)->SetAllocationStep(step);\
  }\
  void CDynamicStackArray_##TYPE##_Clear(CDynamicStackArray_##TYPE##_* p)\
  {\
    ((CDynamicStackArray<TYPE>*)p)->Clear();\
  }\
  TYPE##_* CDynamicStackArray_##TYPE##_Push(CDynamicStackArray_##TYPE##_* p)\
  {\
    return (TYPE##_*)(&(((CDynamicStackArray<TYPE>*)p)->Push()));\
  }\
  TYPE##_* CDynamicStackArray_##TYPE##_Push_i(CDynamicStackArray_##TYPE##_* p, INDEX count)\
  {\
    return (TYPE##_*)(((CDynamicStackArray<TYPE>*)p)->Push(count));\
  }\
  void CDynamicStackArray_##TYPE##_PopAll(CDynamicStackArray_##TYPE##_* p)\
  {\
    ((CDynamicStackArray<TYPE>*)p)->PopAll();\
  }\
  INDEX CDynamicStackArray_##TYPE##_Count(const CDynamicStackArray_##TYPE##_* p)\
  {\
    return ((CDynamicStackArray<TYPE>*)p)->Count();\
  }

IMPL_CDynamicStackArray(CTString)
IMPL_CDynamicStackArray(CTFileName)

#undef IMPL_CDynamicStackArray

#define IMPL_CDynamicStackArray(TYPE)\
  CDynamicStackArray_##TYPE##_* CDynamicStackArray_##TYPE##_new()\
  {\
    return (CDynamicStackArray_##TYPE##_*)(new CDynamicStackArray<TYPE>());\
  }\
  CDynamicStackArray_##TYPE##_* CDynamicStackArray_##TYPE##_clone(CDynamicStackArray_##TYPE##_* p)\
  {\
    CDynamicStackArray<TYPE>* a = new CDynamicStackArray<TYPE>();\
    *a = *((CDynamicStackArray<TYPE>*)p);\
    return (CDynamicStackArray_##TYPE##_*)a;\
  }\
  void CDynamicStackArray_##TYPE##_delete(CDynamicStackArray_##TYPE##_* p)\
  {\
    delete ((CDynamicStackArray<TYPE>*)p);\
  }\
  void CDynamicStackArray_##TYPE##_copy(CDynamicStackArray_##TYPE##_* a, CDynamicStackArray_##TYPE##_* b)\
  {\
    *((CDynamicStackArray<TYPE>*)a) = *((CDynamicStackArray<TYPE>*)b);\
  }\
  void CDynamicStackArray_##TYPE##_SetAllocationStep(CDynamicStackArray_##TYPE##_* p, INDEX step)\
  {\
    ((CDynamicStackArray<TYPE>*)p)->SetAllocationStep(step);\
  }\
  void CDynamicStackArray_##TYPE##_Clear(CDynamicStackArray_##TYPE##_* p)\
  {\
    ((CDynamicStackArray<TYPE>*)p)->Clear();\
  }\
  TYPE* CDynamicStackArray_##TYPE##_Push(CDynamicStackArray_##TYPE##_* p)\
  {\
    return &(((CDynamicStackArray<TYPE>*)p)->Push());\
  }\
  TYPE* CDynamicStackArray_##TYPE##_Push_i(CDynamicStackArray_##TYPE##_* p, INDEX count)\
  {\
    return ((CDynamicStackArray<TYPE>*)p)->Push(count);\
  }\
  void CDynamicStackArray_##TYPE##_PopAll(CDynamicStackArray_##TYPE##_* p)\
  {\
    ((CDynamicStackArray<TYPE>*)p)->PopAll();\
  }\
  INDEX CDynamicStackArray_##TYPE##_Count(const CDynamicStackArray_##TYPE##_* p)\
  {\
    return ((CDynamicStackArray<TYPE>*)p)->Count();\
  }

IMPL_CDynamicStackArray(FLOAT)
