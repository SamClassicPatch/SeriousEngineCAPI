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

SECAPI INDEX _pShell_sh_assSymbols_Count();
SECAPI CShellSymbol_* _pShell_sh_assSymbols_Get(INDEX i);
SECAPI ULONG* CShellSymbol_ss_ulFlags(CShellSymbol_* p);
SECAPI CTString_* CShellSymbol_GetCompletionString(const CShellSymbol_* p);

#ifndef SERIOUSENGINECAPI_EXPORTS
// symbol flags
#define SSF_CONSTANT    (1L<<0)   // the symbol cannot be changed
#define SSF_USER        (1L<<1)   // the symbol is visible to user (with ListSymbols() )
#define SSF_PERSISTENT  (1L<<2)   // the symbol is saved when exiting
#define SSF_EXTERNAL    (1L<<3)   // the symbol was declared externally (in a script)

#endif

#ifdef __cplusplus
}
#endif

#endif
