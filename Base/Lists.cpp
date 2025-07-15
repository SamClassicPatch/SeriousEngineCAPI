#include "Lists.h"

BOOL CListNode_IsValid(const CListNode_* p)
{
  return ((const CListNode*)p)->IsValid();
}

BOOL CListNode_IsLinked(const CListNode_* p)
{
   return ((const CListNode*)p)->IsLinked();
}

void CListNode_AddAfter(CListNode_* a, CListNode_* b)
{
  ((CListNode*)a)->AddAfter(*((CListNode*)b));
}

void CListNode_AddBefore(CListNode_* a, CListNode_* b)
{
  ((CListNode*)a)->AddBefore(*((CListNode*)b));
}

void CListNode_Remove(CListNode_* p)
{
  ((CListNode*)p)->Remove();
}

BOOL CListNode_IsHeadMarker(const CListNode_* p)
{
  return ((const CListNode*)p)->IsHeadMarker();
}

BOOL CListNode_IsTailMarker(const CListNode_* p)
{
  return ((const CListNode*)p)->IsTailMarker();
}

BOOL CListNode_IsHead(const CListNode_* p)
{
  return ((const CListNode*)p)->IsHead();
}

BOOL CListNode_IsTail(const CListNode_* p)
{
  return ((const CListNode*)p)->IsTail();
}

CListNode_* CListNode_Succ(const CListNode_* p)
{
  return (CListNode_*)(&(((CListNode*)p)->Succ()));
}

CListNode_* CListNode_Pred(const CListNode_* p)
{
  return (CListNode_*)(&(((CListNode*)p)->Pred()));
}

void CListNode_IterationInsertBefore(CListNode_* a, CListNode_* b)
{
  ((CListNode*)a)->IterationInsertBefore(*((CListNode*)b));
}

void CListNode_IterationInsertAfter(CListNode_* a, CListNode_* b)
{
  ((CListNode*)a)->IterationInsertAfter(*((CListNode*)b));
}

CListHead_* CListNode_GetHead(CListNode_* p)
{
  return (CListHead_*)(&(((CListNode*)p)->GetHead()));
}


BOOL CListHead_IsValid(const CListHead_* p)
{
  return ((const CListHead*)p)->IsValid();
}

void CListHead_Clear(CListHead_* p)
{
  ((CListHead*)p)->Clear();
}

CListNode_* CListHead_Head(const CListHead_* p)
{
  return (CListNode_*)(&(((const CListHead*)p)->Head()));
}

CListNode_* CListHead_Tail(const CListHead_* p)
{
  return (CListNode_*)(&(((const CListHead*)p)->Tail()));
}

void CListHead_AddHead(CListHead_* a, CListNode_* b)
{
  ((CListHead*)a)->AddHead(*((CListNode*)b));
}

void CListHead_AddTail(CListHead_* a, CListNode_* b)
{
  ((CListHead*)a)->AddTail(*((CListNode*)b));
}

void CListHead_RemHead(CListHead_* p)
{
  ((CListHead*)p)->RemHead();
}

void CListHead_RemTail(CListHead_* p)
{
  ((CListHead*)p)->RemTail();
}

void CListHead_RemAll(CListHead_* p)
{
  ((CListHead*)p)->RemAll();
}

BOOL CListHead_IsEmpty(const CListHead_* p)
{
  return ((const CListHead*)p)->IsEmpty();
}

void CListHead_MoveList(CListHead_* a, CListHead_* b)
{
  ((CListHead*)a)->MoveList(*((CListHead*)b));
}

INDEX CListHead_Count(const CListHead_* p)
{
  return ((const CListHead*)p)->Count();
}

__declspec(thread) INDEX (*g_comp)(const void*, const void*) = NULL;
static int _Comp(const void* lhs, const void* rhs)
{
  return g_comp(lhs, rhs);
}

void CListHead_Sort(CListHead_* p, INDEX (*comp)(const void*, const void*), INDEX offset)
{
  g_comp = comp;
  ((CListHead*)p)->Sort(_Comp, offset);
  g_comp = NULL;
}

