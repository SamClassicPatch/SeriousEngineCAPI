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

#include "EntityPointer.h"

CEntityPointer_* CEntityPointer_new()
{
  return (CEntityPointer_*)(new CEntityPointer());
}

CEntityPointer_* CEntityPointer_new_e(CEntity_* p)
{
  return (CEntityPointer_*)(new CEntityPointer((CEntity*)p));
}

CEntityPointer_* CEntityPointer_clone(const CEntityPointer_* p)
{
  return (CEntityPointer_*)(new CEntityPointer(*((const CEntityPointer*)p)));
}

void CEntityPointer_delete(CEntityPointer_* p)
{
  delete ((CEntityPointer*)p);
}

void CEntityPointer_copy(CEntityPointer_* a, const CEntityPointer_* b)
{
  *((CEntityPointer*)a) = *((const CEntityPointer*)b);
}

void CEntityPointer_copy_e(CEntityPointer_* a, CEntity_* b)
{
  *((CEntityPointer*)a) = (CEntity*)b;
}

BOOL CEntityPointer_equal(const CEntityPointer_* a, const CEntityPointer_* b)
{
  return (*((const CEntityPointer*)a)) == (*((const CEntityPointer*)b));
}

CEntity_** CEntityPointer_ep_pen(const CEntityPointer_* p)
{
  const CEntityPointer& bc = *((const CEntityPointer*)p);
  return (CEntity_**)(&(bc.ep_pen));
}
