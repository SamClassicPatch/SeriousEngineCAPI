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

#include "Stock_CTextureData.h"
#include <Engine/Templates/Stock_CTextureData.h>

static CTextureData_* seh_pTextureStock_Obtain_t_(const CTFileName_* f)
{
  CTextureData* res = NULL;
  SECAPI_TRY
  res = _pTextureStock->Obtain_t(*((const CTFileName*)f));
  SECAPI_CATCH
  return (CTextureData_*)res;
}

CTextureData_* _pTextureStock_Obtain_t_(const CTFileName_* f)
{
  CTextureData_* res = NULL;
  STREAM_TRY
  res = seh_pTextureStock_Obtain_t_(f);
  STREAM_CATCH
  return res;
}

void _pTextureStock_Release(CTextureData_* p)
{
  _pTextureStock->Release((CTextureData*)p);
}

void _pTextureStock_FreeUnused()
{
  _pTextureStock->FreeUnused();
}
