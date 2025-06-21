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
