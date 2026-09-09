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

#ifndef SECAPI_BASE_RELATIONS_H
#define SECAPI_BASE_RELATIONS_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CListHead_* CRelationLnk_GetSrc(CRelationLnk_* p);
SECAPI CListHead_* CRelationLnk_GetDst(CRelationLnk_* p);

SECAPI CRelationLnk_* CRelationLnk_from_rl_lnSrc(CListNode_* p);
SECAPI CRelationLnk_* CRelationLnk_from_rl_lnDst(CListNode_* p);

#ifdef __cplusplus
}
#endif

#endif
