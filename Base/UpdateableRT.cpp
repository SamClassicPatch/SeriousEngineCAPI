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

#include "UpdateableRT.h"
#include <Engine/Base/UpdateableRT.h>

CUpdateableRT_* CUpdateableRT_new()
{
  return (CUpdateableRT_*)(new CUpdateableRT());
}

CUpdateableRT_* CUpdateableRT_clone(const CUpdateableRT_* p)
{
  return (CUpdateableRT_*)(new CUpdateableRT(*((const CUpdateableRT*)p)));
}

void CUpdateableRT_delete(CUpdateableRT_* p)
{
  delete ((CUpdateableRT*)p);
}

void CUpdateableRT_copy(CUpdateableRT_* a, const CUpdateableRT_* b)
{
  *((CUpdateableRT*)a) = *((const CUpdateableRT*)b);
}

TIME CUpdateableRT_LastUpdateTime(const CUpdateableRT_* p)
{
  return ((const CUpdateableRT*)p)->LastUpdateTime();
}

void CUpdateableRT_MarkUpdated(CUpdateableRT_* p)
{
  ((CUpdateableRT*)p)->MarkUpdated();
}

void CUpdateableRT_Invalidate(CUpdateableRT_* p)
{
  ((CUpdateableRT*)p)->Invalidate();
}
