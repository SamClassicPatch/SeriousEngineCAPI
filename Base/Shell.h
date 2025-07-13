#ifndef SECAPI_BASE_SHELL_H
#define SECAPI_BASE_SHELL_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI void _pShell_DeclareSymbol_(const CTString_* s, void* val);
SECAPI void _pShell_Execute_(const CTString_* s);
SECAPI void _pShell_StorePersistentSymbols_(const CTFileName_* f);
SECAPI FLOAT _pShell_GetFLOAT_(const CTString_* strName);
SECAPI void _pShell_SetFLOAT_(const CTString_* strName, FLOAT fValue);
SECAPI INDEX _pShell_GetINDEX_(const CTString_* strName);
SECAPI void _pShell_SetINDEX_(const CTString_* strName, INDEX iValue);
SECAPI CTString_* _pShell_GetString_(const CTString_* strName);
SECAPI void _pShell_SetString_(const CTString_* strName, const CTString_* strValue);
SECAPI CTString_* _pShell_GetValue_(const CTString_* strName);
SECAPI void _pShell_SetValue_(const CTString_* strName, const CTString_* strValue);

#ifdef __cplusplus
}
#endif

#endif
