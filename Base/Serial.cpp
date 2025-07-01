#include "Serial.h"

const CTFileName_* CSerial_GetName(CSerial_* p)
{
  return (CTFileName_*)(&(((CSerial*)p)->GetName()));
}

CTString_* CSerial_GetDescription(CSerial_* p)
{
  CTString res = ((CSerial*)p)->GetDescription();
  return (CTString_*)(new CTString(res));
}

void CSerial_Load_t(CSerial_* p, const CTFileName_* f)
{
  SECAPI_TRY
  ((CSerial*)p)->Load_t(*((const CTFileName*)f));
  SECAPI_CATCH
}

void CSerial_Save_t(CSerial_* p, const CTFileName_* f)
{
  SECAPI_TRY
  ((CSerial*)p)->Save_t(*((const CTFileName*)f));
  SECAPI_CATCH
}

void CSerial_Reload(CSerial_* p)
{
  ((CSerial*)p)->Reload();
}

void CSerial_MarkUsed(CSerial_* p)
{
  ((CSerial*)p)->MarkUsed();
}

void CSerial_MarkUnused(CSerial_* p)
{
  ((CSerial*)p)->MarkUnused();
}

BOOL CSerial_IsUsed(CSerial_* p)
{
  return ((CSerial*)p)->IsUsed();
}

INDEX CSerial_GetUsedCount(CSerial_* p)
{
  return ((CSerial*)p)->GetUsedCount();
}

void CSerial_Clear(CSerial_* p)
{
  ((CSerial*)p)->Clear();
}

void CSerial_Read_t(CSerial_* p, CTStream_* s)
{
  SECAPI_TRY
  ((CSerial*)p)->Read_t((CTStream*)s);
  SECAPI_CATCH
}

void CSerial_Write_t(CSerial_* p, CTStream_* s)
{
  SECAPI_TRY
  ((CSerial*)p)->Write_t((CTStream*)s);
  SECAPI_CATCH
}

BOOL CSerial_IsAutoFreed(CSerial_* p)
{
  return ((CSerial*)p)->IsAutoFreed();
}

SLONG CSerial_GetUsedMemory(CSerial_* p)
{
  return ((CSerial*)p)->GetUsedMemory();
}

void CSerial_AddToCRCTable(CSerial_* p)
{
  ((CSerial*)p)->AddToCRCTable();
}
