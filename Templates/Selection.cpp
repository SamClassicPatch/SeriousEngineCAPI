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

#include "Selection.h"

#define IMPL_CSelection(TYPE, FLAG)\
  CSelection_##TYPE##_* CSelection_##TYPE##_new()\
  {\
    return (CSelection_##TYPE##_*)(new CSelection<TYPE, FLAG>());\
  }\
  void CSelection_##TYPE##_delete(CSelection_##TYPE##_* p)\
  {\
    delete ((CSelection<TYPE, FLAG>*)p);\
  }\
  void CSelection_##TYPE##_Clear(CSelection_##TYPE##_* p)\
  {\
    ((CSelection<TYPE, FLAG>*)p)->Clear();\
  }\
  void CSelection_##TYPE##_Select(CSelection_##TYPE##_* p, TYPE##_* b)\
  {\
    ((CSelection<TYPE, FLAG>*)p)->Select(*((TYPE*)b));\
  }\
  void CSelection_##TYPE##_Deselect(CSelection_##TYPE##_* p, TYPE##_* b)\
  {\
    ((CSelection<TYPE, FLAG>*)p)->Deselect(*((TYPE*)b));\
  }\
  BOOL CSelection_##TYPE##_IsSelected(CSelection_##TYPE##_* p, TYPE##_* b)\
  {\
    return ((CSelection<TYPE, FLAG>*)p)->IsSelected(*((TYPE*)b));\
  }\
  TYPE##_* CSelection_##TYPE##_GetFirstInSelection(CSelection_##TYPE##_* p)\
  {\
    return (TYPE##_*)(((CSelection<TYPE, FLAG>*)p)->GetFirstInSelection());\
  }

IMPL_CSelection(CBrushVertex, BVXF_SELECTED)
IMPL_CSelection(CBrushPolygon, BPOF_SELECTED)
IMPL_CSelection(CBrushSector, BSCF_SELECTED)
IMPL_CSelection(CEntity, ENF_SELECTED)
