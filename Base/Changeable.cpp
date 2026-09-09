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

#include "Changeable.h"

CChangeable_* CChangeable_new()
{
  return (CChangeable_*)(new CChangeable());
}

CChangeable_* CChangeable_clone(const CChangeable_* p)
{
  return (CChangeable_*)(new CChangeable(*((const CChangeable*)p)));
}

void CChangeable_delete(CChangeable_* p)
{
  delete ((CChangeable*)p);
}

void CChangeable_copy(CChangeable_* a, const CChangeable_* b)
{
  *((CChangeable*)a) = *((const CChangeable*)b);
}

void CChangeable_MarkChanged(CChangeable_* p)
{
  ((CChangeable*)p)->MarkChanged();
}

BOOL CChangeable_IsUpToDate(const CChangeable_* p, const CUpdateable_* u)
{
  return ((const CChangeable*)p)->IsUpToDate(*((const CUpdateable*)u));
}

