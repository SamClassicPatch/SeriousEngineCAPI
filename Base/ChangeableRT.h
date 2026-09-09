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

#ifndef SECAPI_BASE_CHANGEABLERT_H
#define SECAPI_BASE_CHANGEABLERT_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CChangeableRT_* CChangeableRT_new();
SECAPI CChangeableRT_* CChangeableRT_clone(const CChangeableRT_* p);
SECAPI void CChangeableRT_delete(CChangeableRT_* p);
SECAPI void CChangeableRT_copy(CChangeableRT_* a, const CChangeableRT_* b);
SECAPI void CChangeableRT_MarkChanged(CChangeableRT_* p);
SECAPI BOOL CChangeableRT_IsUpToDate(const CChangeableRT_* p, const CUpdateableRT_* u);

#ifdef __cplusplus
}
#endif

#endif
