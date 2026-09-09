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
