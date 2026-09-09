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

#ifndef SECAPI_TEMPLATES_DYNAMIC_CONTAINER_H
#define SECAPI_TEMPLATES_DYNAMIC_CONTAINER_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define DECLARE_CDynamicContainer(TYPE)\
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
  SECAPI INDEX CDynamicContainer_##TYPE##_Count(const CDynamicContainer_##TYPE##_* p);\
  SECAPI TYPE##_* CDynamicContainer_##TYPE##_GetFirst(CDynamicContainer_##TYPE##_* p);

DECLARE_CDynamicContainer(CTextureData)
DECLARE_CDynamicContainer(CBrushVertex)
DECLARE_CDynamicContainer(CBrushPolygon)
DECLARE_CDynamicContainer(CBrushSector)
DECLARE_CDynamicContainer(CEntity)

#undef DECLARE_CDynamicContainer

#define DECLARE_CDynamicContainer(TYPE)\
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
  SECAPI INDEX CDynamicContainer_##TYPE##_Count(const CDynamicContainer_##TYPE##_* p);\
  SECAPI TYPE_* CDynamicContainer_##TYPE##_GetFirst(CDynamicContainer_##TYPE##_* p);

#undef DECLARE_CDynamicContainer
#ifdef __cplusplus
}
#endif

#endif
