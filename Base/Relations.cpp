#include "Relations.h"

CListHead_* CRelationLnk_GetSrc(CRelationLnk_* p)
{
  return (CListHead_*)(&(((CRelationLnk*)p)->GetSrc()));
}

CListHead_* CRelationLnk_GetDst(CRelationLnk_* p)
{
  return (CListHead_*)(&(((CRelationLnk*)p)->GetDst()));
}


CRelationLnk_* CRelationLnk_from_rl_lnSrc(CListNode_* p)
{
  CListNode& node = *((CListNode*)p);
  CRelationLnk* res = ((CRelationLnk*)(((UBYTE*)(&node)) - offsetof(CRelationLnk, rl_lnSrc)));
  return (CRelationLnk_*)res;
}

CRelationLnk_* CRelationLnk_from_rl_lnDst(CListNode_* p)
{
  CListNode& node = *((CListNode*)p);
  CRelationLnk* res = ((CRelationLnk*)(((UBYTE*)(&node)) - offsetof(CRelationLnk, rl_lnDst)));
  return (CRelationLnk_*)res;
}
