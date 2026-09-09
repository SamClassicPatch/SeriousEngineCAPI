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

#ifndef SECAPI_BASE_LISTS_H
#define SECAPI_BASE_LISTS_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI BOOL CListNode_IsValid(const CListNode_* p);
SECAPI BOOL CListNode_IsLinked(const CListNode_* p);
SECAPI void CListNode_AddAfter(CListNode_* a, CListNode_* b);
SECAPI void CListNode_AddBefore(CListNode_* a, CListNode_* b);
SECAPI void CListNode_Remove(CListNode_* p);
SECAPI BOOL CListNode_IsHeadMarker(const CListNode_* p);
SECAPI BOOL CListNode_IsTailMarker(const CListNode_* p);
SECAPI BOOL CListNode_IsHead(const CListNode_* p);
SECAPI BOOL CListNode_IsTail(const CListNode_* p);
SECAPI CListNode_* CListNode_Succ(const CListNode_* p);
SECAPI CListNode_* CListNode_Pred(const CListNode_* p);
SECAPI void CListNode_IterationInsertBefore(CListNode_* a, CListNode_* b);
SECAPI void CListNode_IterationInsertAfter(CListNode_* a, CListNode_* b);
SECAPI CListHead_* CListNode_GetHead(CListNode_* p);

SECAPI BOOL CListHead_IsValid(const CListHead_* p);
SECAPI void CListHead_Clear(CListHead_* p);
SECAPI CListNode_* CListHead_Head(const CListHead_* p);
SECAPI CListNode_* CListHead_Tail(const CListHead_* p);
SECAPI void CListHead_AddHead(CListHead_* a, CListNode_* b);
SECAPI void CListHead_AddTail(CListHead_* a, CListNode_* b);
SECAPI void CListHead_RemHead(CListHead_* p);
SECAPI void CListHead_RemTail(CListHead_* p);
SECAPI void CListHead_RemAll(CListHead_* p);
SECAPI BOOL CListHead_IsEmpty(const CListHead_* p);
SECAPI void CListHead_MoveList(CListHead_* a, CListHead_* b);
SECAPI INDEX CListHead_Count(const CListHead_* p);
SECAPI void CListHead_Sort(CListHead_* p, INDEX (*comp)(const void*, const void*), INDEX offset);

#ifdef __cplusplus
}
#endif

#endif
