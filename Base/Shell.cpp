#include "Shell.h"

void _pShell_DeclareSymbol_(const CTString_* s, void* val)
{
  STREAM_TRY
  _pShell->DeclareSymbol(*((const CTString*)s), val);
  STREAM_CATCH
}

void _pShell_Execute_(const CTString_* s)
{
  STREAM_TRY
  _pShell->Execute(*((const CTString*)s));
  STREAM_CATCH
}

void _pShell_StorePersistentSymbols_(const CTFileName_* f)
{
  STREAM_TRY
  _pShell->StorePersistentSymbols(*((const CTFileName*)f));
  STREAM_CATCH
}

FLOAT _pShell_GetFLOAT_(const CTString_* strName)
{
  return _pShell->GetFLOAT(*((const CTString*)strName));
}

void _pShell_SetFLOAT_(const CTString_* strName, FLOAT fValue)
{
  STREAM_TRY
  _pShell->SetFLOAT(*((const CTString*)strName), fValue);
  STREAM_CATCH
}

INDEX _pShell_GetINDEX_(const CTString_* strName)
{
  return _pShell->GetINDEX(*((const CTString*)strName));
}

void _pShell_SetINDEX_(const CTString_* strName, INDEX iValue)
{
  STREAM_TRY
  _pShell->SetINDEX(*((const CTString*)strName), iValue);
  STREAM_CATCH
}

CTString_* _pShell_GetString_(const CTString_* strName)
{
  CTString res = _pShell->GetString(*((const CTString*)strName));
  return (CTString_*)(new CTString(res));
}

void _pShell_SetString_(const CTString_* strName, const CTString_* strValue)
{
  STREAM_TRY
  _pShell->SetString(*((const CTString*)strName), *((const CTString*)strValue));
  STREAM_CATCH
}

CTString_* _pShell_GetValue_(const CTString_* strName)
{
  CTString res = _pShell->GetValue(*((const CTString*)strName));
  return (CTString_*)(new CTString(res));
}

void _pShell_SetValue_(const CTString_* strName, const CTString_* strValue)
{
  STREAM_TRY
  _pShell->SetValue(*((const CTString*)strName), *((const CTString*)strValue));
  STREAM_CATCH
}

