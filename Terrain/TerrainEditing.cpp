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
