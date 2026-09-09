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

#ifndef SECAPI_BASE_TRANSLATION_PAIR_H
#define SECAPI_BASE_TRANSLATION_PAIR_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CTranslationPair_* CTranslationPair_new();
SECAPI CTranslationPair_* CTranslationPair_clone(const CTranslationPair_* p);
SECAPI void CTranslationPair_delete(CTranslationPair_* p);
SECAPI void CTranslationPair_copy(CTranslationPair_* a, const CTranslationPair_* b);
SECAPI void CTranslationPair_Clear(CTranslationPair_* p);
SECAPI BOOL* CTranslationPair_m_bUsed(CTranslationPair_* p);
SECAPI const BOOL* CTranslationPair_m_bUsed_const(const CTranslationPair_* p);
SECAPI CTString_* CTranslationPair_tp_strSrc(CTranslationPair_* p);
SECAPI const CTString_* CTranslationPair_tp_strSrc_const(const CTranslationPair_* p);
SECAPI CTString_* CTranslationPair_tp_strDst(CTranslationPair_* p);
SECAPI const CTString_* CTranslationPair_tp_strDst_const(const CTranslationPair_* p);
SECAPI const CTString_* CTranslationPair_GetName(const CTranslationPair_* p);

#ifdef __cplusplus
}
#endif

#endif
