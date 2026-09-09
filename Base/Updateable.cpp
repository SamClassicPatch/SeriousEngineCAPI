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

#include "Updateable.h"

CUpdateable_* CUpdateable_new()
{
  return (CUpdateable_*)(new CUpdateable());
}

CUpdateable_* CUpdateable_clone(const CUpdateable_* p)
{
  return (CUpdateable_*)(new CUpdateable(*((const CUpdateable*)p)));
}

void CUpdateable_delete(CUpdateable_* p)
{
  delete ((CUpdateable*)p);
}

void CUpdateable_copy(CUpdateable_* a, const CUpdateable_* b)
{
  *((CUpdateable*)a) = *((const CUpdateable*)b);
}

TIME CUpdateable_LastUpdateTime(const CUpdateable_* p)
{
  return ((const CUpdateable*)p)->LastUpdateTime();
}

void CUpdateable_MarkUpdated(CUpdateable_* p)
{
  ((CUpdateable*)p)->MarkUpdated();
}

void CUpdateable_Invalidate(CUpdateable_* p)
{
  ((CUpdateable*)p)->Invalidate();
}
