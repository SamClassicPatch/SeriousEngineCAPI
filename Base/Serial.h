#ifndef SECAPI_BASE_SERIAL_H
#define SECAPI_BASE_SERIAL_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

inline CSerial_* CSerial_From_CChangeable(CChangeable_* p)
{
  return (CSerial_*)(((unsigned char*)p) - 4);
}
inline const CSerial_* CSerial_From_CChangeable_const(const CChangeable_* p)
{
  return (const CSerial_*)(((unsigned char*)p) - 4);
}
inline CChangeable_* CChangeable_From_CSerial(CSerial_* p)
{
  return (CChangeable_*)(((unsigned char*)p) + 4);
}

SECAPI const CTFileName_* CSerial_GetName(CSerial_* p);
SECAPI CTString_* CSerial_GetDescription(CSerial_* p);
SECAPI void CSerial_Load_t(CSerial_* p, const CTFileName_* f);
SECAPI void CSerial_Save_t(CSerial_* p, const CTFileName_* f);
SECAPI void CSerial_Reload(CSerial_* p);
SECAPI void CSerial_MarkUsed(CSerial_* p);
SECAPI void CSerial_MarkUnused(CSerial_* p);
SECAPI BOOL CSerial_IsUsed(CSerial_* p);
SECAPI INDEX CSerial_GetUsedCount(CSerial_* p);
SECAPI void CSerial_Clear(CSerial_* p);
SECAPI void CSerial_Read_t(CSerial_* p, CTStream_* s);
SECAPI void CSerial_Write_t(CSerial_* p, CTStream_* s);
SECAPI BOOL CSerial_IsAutoFreed(CSerial_* p);
SECAPI SLONG CSerial_GetUsedMemory(CSerial_* p);
SECAPI void CSerial_AddToCRCTable(CSerial_* p);

#ifdef __cplusplus
}
#endif

#endif
