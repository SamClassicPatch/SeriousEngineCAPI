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

#ifndef SECAPI_ENTITIES_ENTITY_POINTER_H
#define SECAPI_ENTITIES_ENTITY_POINTER_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CEntityPointer_* CEntityPointer_new();
SECAPI CEntityPointer_* CEntityPointer_new_e(CEntity_* p);
SECAPI CEntityPointer_* CEntityPointer_clone(const CEntityPointer_* p);
SECAPI void CEntityPointer_delete(CEntityPointer_* p);
SECAPI void CEntityPointer_copy(CEntityPointer_* a, const CEntityPointer_* b);
SECAPI void CEntityPointer_copy_e(CEntityPointer_* a, CEntity_* b);
SECAPI BOOL CEntityPointer_equal(const CEntityPointer_* a, const CEntityPointer_* b);
SECAPI CEntity_** CEntityPointer_ep_pen(const CEntityPointer_* p);

#ifdef __cplusplus
}
#endif

#endif
