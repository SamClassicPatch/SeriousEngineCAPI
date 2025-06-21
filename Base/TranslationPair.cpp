#include "TranslationPair.h"
#include <Engine/Base/TranslationPair.h>

CTranslationPair_* CTranslationPair_new()
{
  return (CTranslationPair_*)(new CTranslationPair());
}

CTranslationPair_* CTranslationPair_clone(const CTranslationPair_* p)
{
  return (CTranslationPair_*)(new CTranslationPair(*((const CTranslationPair*)p)));
}

void CTranslationPair_delete(CTranslationPair_* p)
{
  delete ((CTranslationPair*)p);
}

void CTranslationPair_copy(CTranslationPair_* a, const CTranslationPair_* b)
{
  *((CTranslationPair*)a) = *((const CTranslationPair*)b);
}

void CTranslationPair_Clear(CTranslationPair_* p)
{
  ((CTranslationPair*)p)->Clear();
}

BOOL* CTranslationPair_m_bUsed(CTranslationPair_* p)
{
  return &(((CTranslationPair*)p)->m_bUsed);
}

const BOOL* CTranslationPair_m_bUsed_const(const CTranslationPair_* p)
{
  return &(((const CTranslationPair*)p)->m_bUsed);
}

CTString_* CTranslationPair_tp_strSrc(CTranslationPair_* p)
{
  return (CTString_*)(&(((CTranslationPair*)p)->tp_strSrc));
}

const CTString_* CTranslationPair_tp_strSrc_const(const CTranslationPair_* p)
{
  return (const CTString_*)(&(((const CTranslationPair*)p)->tp_strSrc));
}

CTString_* CTranslationPair_tp_strDst(CTranslationPair_* p)
{
  return (CTString_*)(&(((CTranslationPair*)p)->tp_strDst));
}

const CTString_* CTranslationPair_tp_strDst_const(const CTranslationPair_* p)
{
  return (const CTString_*)(&(((const CTranslationPair*)p)->tp_strDst));
}

const CTString_* CTranslationPair_GetName(const CTranslationPair_* p)
{
  return (const CTString_*)(&(((const CTranslationPair*)p)->GetName()));
}

