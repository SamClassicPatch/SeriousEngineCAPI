#include "Shell.h"

void _pShell_DeclareSymbol_(const CTString_* s, void* val)
{
  _pShell->DeclareSymbol(*((const CTString*)s), val);
}

void _pShell_Execute_(const CTString_* s)
{
  _pShell->Execute(*((const CTString*)s));
}

void _pShell_StorePersistentSymbols_(const CTFileName_* f)
{
  _pShell->StorePersistentSymbols(*((const CTFileName*)f));
}

FLOAT _pShell_GetFLOAT_(const CTString_* strName)
{
  return _pShell->GetFLOAT(*((const CTString*)strName));
}

void _pShell_SetFLOAT_(const CTString_* strName, FLOAT fValue)
{
  _pShell->SetFLOAT(*((const CTString*)strName), fValue);
}

INDEX _pShell_GetINDEX_(const CTString_* strName)
{
  return _pShell->GetINDEX(*((const CTString*)strName));
}

void _pShell_SetINDEX_(const CTString_* strName, INDEX iValue)
{
  _pShell->SetINDEX(*((const CTString*)strName), iValue);
}

CTString_* _pShell_GetString_(const CTString_* strName)
{
  CTString res = _pShell->GetString(*((const CTString*)strName));
  return (CTString_*)(new CTString(res));
}

void _pShell_SetString_(const CTString_* strName, const CTString_* strValue)
{
  _pShell->SetString(*((const CTString*)strName), *((const CTString*)strValue));
}

CTString_* _pShell_GetValue_(const CTString_* strName)
{
  CTString res = _pShell->GetValue(*((const CTString*)strName));
  return (CTString_*)(new CTString(res));
}

void _pShell_SetValue_(const CTString_* strName, const CTString_* strValue)
{
  _pShell->SetValue(*((const CTString*)strName), *((const CTString*)strValue));
}

