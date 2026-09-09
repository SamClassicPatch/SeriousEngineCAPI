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

#ifndef SECAPI_BASE_TRANSLATION_H
#define SECAPI_BASE_TRANSLATION_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI void InitTranslation_();
SECAPI void AddTranslationTable_t_(const CTFileName_* table);
SECAPI void AddTranslationTablesDir_t_(const CTFileName_* dir, const CTFileName_* pattern);
SECAPI void FinishTranslationTable_();
SECAPI void ReadTranslationTable_t_(CDynamicArray_CTranslationPair_* pairs, const CTFileName_* table);
SECAPI char* Translate_(char* str, INDEX offset);
SECAPI const char* TranslateConst_(const char* str, INDEX offset);

#ifdef __cplusplus
}
#endif

#endif
