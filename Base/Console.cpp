#include "Console.h"

void CPutString_(const char* s)
{
  CPutString(s);
}

BOOL REG_GetString_(const CTString_* k, CTString_* s)
{
  return REG_GetString(*((const CTString*)k), *((CTString*)s));
}

INDEX _pConsole_con_ctLines()
{
  return _pConsole->con_ctLines;
}

INDEX _pConsole_con_ctCharsPerLine()
{
  return _pConsole->con_ctCharsPerLine;
}

const char* _pConsole_GetBuffer()
{
  return _pConsole->GetBuffer();
}
