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
