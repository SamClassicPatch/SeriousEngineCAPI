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
