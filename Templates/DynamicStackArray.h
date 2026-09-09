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

#ifndef SECAPI_TEMPLATES_DYNAMIC_STACK_ARRAY_H
#define SECAPI_TEMPLATES_DYNAMIC_STACK_ARRAY_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define DECLARE_CDynamicStackArray(TYPE)\
  inline CDynamicArray_##TYPE##_* CDynamicStackArray_##TYPE##_ToArray(CDynamicStackArray_##TYPE##_* p) { return (CDynamicArray_##TYPE##_*)p; }\
  inline const CDynamicArray_##TYPE##_* CDynamicStackArray_##TYPE##_ToArray_const(const CDynamicStackArray_##TYPE##_* p) { return (const CDynamicArray_##TYPE##_*)p; }\
  SECAPI CDynamicStackArray_##TYPE##_* CDynamicStackArray_##TYPE##_new();\
  SECAPI CDynamicStackArray_##TYPE##_* CDynamicStackArray_##TYPE##_clone(CDynamicStackArray_##TYPE##_* p);\
  SECAPI void CDynamicStackArray_##TYPE##_delete(CDynamicStackArray_##TYPE##_* p);\
  SECAPI void CDynamicStackArray_##TYPE##_copy(CDynamicStackArray_##TYPE##_* a, CDynamicStackArray_##TYPE##_* b);\
  SECAPI void CDynamicStackArray_##TYPE##_SetAllocationStep(CDynamicStackArray_##TYPE##_* p, INDEX step);\
  SECAPI void CDynamicStackArray_##TYPE##_Clear(CDynamicStackArray_##TYPE##_* p);\
  SECAPI TYPE##_* CDynamicStackArray_##TYPE##_Push(CDynamicStackArray_##TYPE##_* p);\
  SECAPI TYPE##_* CDynamicStackArray_##TYPE##_Push_i(CDynamicStackArray_##TYPE##_* p, INDEX count);\
  SECAPI void CDynamicStackArray_##TYPE##_PopAll(CDynamicStackArray_##TYPE##_* p);\
  SECAPI INDEX CDynamicStackArray_##TYPE##_Count(const CDynamicStackArray_##TYPE##_* p);

DECLARE_CDynamicStackArray(CTString)
DECLARE_CDynamicStackArray(CTFileName)

#undef DECLARE_CDynamicStackArray

#define DECLARE_CDynamicStackArray(TYPE)\
  inline CDynamicArray_##TYPE##_* CDynamicStackArray_##TYPE##_ToArray(CDynamicStackArray_##TYPE##_* p) { return (CDynamicArray_##TYPE##_*)p; }\
  inline const CDynamicArray_##TYPE##_* CDynamicStackArray_##TYPE##_ToArray_const(const CDynamicStackArray_##TYPE##_* p) { return (const CDynamicArray_##TYPE##_*)p; }\
  SECAPI CDynamicStackArray_##TYPE##_* CDynamicStackArray_##TYPE##_new();\
  SECAPI CDynamicStackArray_##TYPE##_* CDynamicStackArray_##TYPE##_clone(CDynamicStackArray_##TYPE##_* p);\
  SECAPI void CDynamicStackArray_##TYPE##_delete(CDynamicStackArray_##TYPE##_* p);\
  SECAPI void CDynamicStackArray_##TYPE##_copy(CDynamicStackArray_##TYPE##_* a, CDynamicStackArray_##TYPE##_* b);\
  SECAPI void CDynamicStackArray_##TYPE##_SetAllocationStep(CDynamicStackArray_##TYPE##_* p, INDEX step);\
  SECAPI void CDynamicStackArray_##TYPE##_Clear(CDynamicStackArray_##TYPE##_* p);\
  SECAPI TYPE* CDynamicStackArray_##TYPE##_Push(CDynamicStackArray_##TYPE##_* p);\
  SECAPI TYPE* CDynamicStackArray_##TYPE##_Push_i(CDynamicStackArray_##TYPE##_* p, INDEX count);\
  SECAPI void CDynamicStackArray_##TYPE##_PopAll(CDynamicStackArray_##TYPE##_* p);\
  SECAPI INDEX CDynamicStackArray_##TYPE##_Count(const CDynamicStackArray_##TYPE##_* p);

DECLARE_CDynamicStackArray(FLOAT)

#undef DECLARE_CDynamicStackArray
#ifdef __cplusplus
}
#endif

#endif
