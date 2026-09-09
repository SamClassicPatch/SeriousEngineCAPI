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

#include "TerrainEditing.h"
#include <Engine/Terrain/TerrainEditing.h>

UWORD* GetBufferForEditing_(CTerrain_* ptrTerrain, Rect_* rcExtract, BufferType_ btBufferType, INDEX iBufferData)
{
  return GetBufferForEditing((CTerrain*)ptrTerrain, *((Rect*)rcExtract), (BufferType)btBufferType, iBufferData);
}

void SetBufferForEditing_(CTerrain_* ptrTerrain, UWORD* puwEditedBuffer, Rect_* rcExtract, BufferType_ btBufferType, INDEX iBufferData)
{
  SetBufferForEditing((CTerrain*)ptrTerrain, puwEditedBuffer, *((Rect*)rcExtract), (BufferType)btBufferType, iBufferData);
}

void ShowSelection_(CTerrain_* ptrTerrain, Rect_* rcExtract, CTextureData_* ptdBrush, COLOR colSelection, FLOAT fStrenght, SelectionFill_ sfFill)
{
  ShowSelection((CTerrain*)ptrTerrain, *((Rect*)rcExtract), (CTextureData*)ptdBrush, colSelection, fStrenght, (SelectionFill)sfFill);
}
