#include "Translation.h"

void InitTranslation_()
{
  InitTranslation();
}

void AddTranslationTable_t_(const CTFileName_* table)
{
  SECAPI_TRY
  AddTranslationTable_t(*((const CTFileName*)table));
  SECAPI_CATCH
}

void AddTranslationTablesDir_t_(const CTFileName_* dir, const CTFileName_* pattern)
{
  SECAPI_TRY
  AddTranslationTablesDir_t(*((const CTFileName*)dir), *((const CTFileName*)pattern));
  SECAPI_CATCH
}

void FinishTranslationTable_()
{
  FinishTranslationTable();
}

void ReadTranslationTable_t_(CDynamicArray_CTranslationPair_* pairs, const CTFileName_* table)
{
  SECAPI_TRY
  ReadTranslationTable_t(*((CDynamicArray<CTranslationPair>*)pairs), *((const CTFileName*)table));
  SECAPI_CATCH
}

char* Translate_(char* str, INDEX offset)
{
  return Translate(str, offset);
}

const char* TranslateConst_(const char* str, INDEX offset)
{
  return TranslateConst(str, offset);
}