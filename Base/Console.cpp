#include "Console.h"

void CPutString_(const char* s)
{
  CPutString(s);
}

BOOL REG_GetString_(const CTString_* k, CTString_* s)
{
  return REG_GetString(*((const CTString*)k), *((CTString*)s));
}
