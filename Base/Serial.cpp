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

static void Load_t(CSerial_* p, const CTFileName_* f)
{
  SECAPI_TRY
  ((CSerial*)p)->Load_t(*((const CTFileName*)f));
  SECAPI_CATCH
}

void CSerial_Load_t(CSerial_* p, const CTFileName_* f)
{
  STREAM_TRY
  Load_t(p, f);
  STREAM_CATCH
}

static void Save_t(CSerial_* p, const CTFileName_* f)
{
  SECAPI_TRY
  ((CSerial*)p)->Save_t(*((const CTFileName*)f));
  SECAPI_CATCH
}

void CSerial_Save_t(CSerial_* p, const CTFileName_* f)
{
  STREAM_TRY
  Save_t(p, f);
  STREAM_CATCH
}

static void Reload(CSerial_* p)
{
  SECAPI_TRY
  ((CSerial*)p)->Reload();
  SECAPI_CATCH
}

void CSerial_Reload(CSerial_* p)
{
  STREAM_TRY
  Reload(p);
  STREAM_CATCH
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

static void Clear(CSerial_* p)
{
  SECAPI_TRY
  ((CSerial*)p)->Clear();
  SECAPI_CATCH
}

void CSerial_Clear(CSerial_* p)
{
  STREAM_TRY
  Clear(p);
  STREAM_CATCH
}

static void Read_t(CSerial_* p, CTStream_* s)
{
  SECAPI_TRY
  ((CSerial*)p)->Read_t((CTStream*)s);
  SECAPI_CATCH
}

void CSerial_Read_t(CSerial_* p, CTStream_* s)
{
  STREAM_TRY
  Read_t(p, s);
  STREAM_CATCH
}

static void Write_t(CSerial_* p, CTStream_* s)
{
  SECAPI_TRY
  ((CSerial*)p)->Write_t((CTStream*)s);
  SECAPI_CATCH
}

void CSerial_Write_t(CSerial_* p, CTStream_* s)
{
  STREAM_TRY
  Write_t(p, s);
  STREAM_CATCH
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
  SECAPI_TRY
  ((CSerial*)p)->AddToCRCTable();
  SECAPI_CATCH
}
