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

#include "Translation.h"

void InitTranslation_()
{
  InitTranslation();
}

static void sehAddTranslationTable_t_(const CTFileName_* table)
{
  SECAPI_TRY
  AddTranslationTable_t(*((const CTFileName*)table));
  SECAPI_CATCH
}

void AddTranslationTable_t_(const CTFileName_* table)
{
  STREAM_TRY
  sehAddTranslationTable_t_(table);
  STREAM_CATCH
}

static void sehAddTranslationTablesDir_t_(const CTFileName_* dir, const CTFileName_* pattern)
{
  SECAPI_TRY
  AddTranslationTablesDir_t(*((const CTFileName*)dir), *((const CTFileName*)pattern));
  SECAPI_CATCH
}

void AddTranslationTablesDir_t_(const CTFileName_* dir, const CTFileName_* pattern)
{
  STREAM_TRY
  sehAddTranslationTablesDir_t_(dir, pattern);
  STREAM_CATCH
}

void FinishTranslationTable_()
{
  FinishTranslationTable();
}

static void sehReadTranslationTable_t_(CDynamicArray_CTranslationPair_* pairs, const CTFileName_* table)
{
  SECAPI_TRY
  ReadTranslationTable_t(*((CDynamicArray<CTranslationPair>*)pairs), *((const CTFileName*)table));
  SECAPI_CATCH
}

void ReadTranslationTable_t_(CDynamicArray_CTranslationPair_* pairs, const CTFileName_* table)
{
  STREAM_TRY
  sehReadTranslationTable_t_(pairs, table);
  STREAM_CATCH
}

char* Translate_(char* str, INDEX offset)
{
  return Translate(str, offset);
}

const char* TranslateConst_(const char* str, INDEX offset)
{
  return TranslateConst(str, offset);
}