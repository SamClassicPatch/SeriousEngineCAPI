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

#include "TerrainLayer.h"
#include <Engine/Terrain/TerrainLayer.h>

CTerrainLayer_* CTerrainLayer_new()
{
  return (CTerrainLayer_*)(new CTerrainLayer());
}

void CTerrainLayer_delete(CTerrainLayer_* p)
{
  delete ((CTerrainLayer*)p);
}

void CTerrainLayer_copy(CTerrainLayer_* a, const CTerrainLayer_* b)
{
  *((CTerrainLayer*)a) = *((const CTerrainLayer*)b);
}

static void sehCTerrainLayer_ImportLayerMask_t(CTerrainLayer_* p, CTFileName_* fnLayerMask)
{
  SECAPI_TRY
  ((CTerrainLayer*)p)->ImportLayerMask_t(*((CTFileName*)fnLayerMask));
  SECAPI_CATCH
}

void CTerrainLayer_ImportLayerMask_t(CTerrainLayer_* p, CTFileName_* fnLayerMask)
{
  STREAM_TRY
  sehCTerrainLayer_ImportLayerMask_t(p, fnLayerMask);
  STREAM_CATCH
}

static void sehCTerrainLayer_ExportLayerMask_t(CTerrainLayer_* p, CTFileName_* fnLayerMask)
{
  SECAPI_TRY
  ((CTerrainLayer*)p)->ExportLayerMask_t(*((CTFileName*)fnLayerMask));
  SECAPI_CATCH
}

void CTerrainLayer_ExportLayerMask_t(CTerrainLayer_* p, CTFileName_* fnLayerMask)
{
  STREAM_TRY
  sehCTerrainLayer_ExportLayerMask_t(p, fnLayerMask);
  STREAM_CATCH
}

void CTerrainLayer_SetLayerSize(CTerrainLayer_* p, INDEX iTerrainWidth, INDEX iTerrainHeight)
{
  ((CTerrainLayer*)p)->SetLayerSize(iTerrainWidth, iTerrainHeight);
}

static void sehCTerrainLayer_SetLayerTexture_t(CTerrainLayer_* p, CTFileName_* fnTexture)
{
  SECAPI_TRY
  ((CTerrainLayer*)p)->SetLayerTexture_t(*((CTFileName*)fnTexture));
  SECAPI_CATCH
}

void CTerrainLayer_SetLayerTexture_t(CTerrainLayer_* p, CTFileName_* fnTexture)
{
  STREAM_TRY
  sehCTerrainLayer_SetLayerTexture_t(p, fnTexture);
  STREAM_CATCH
}

void CTerrainLayer_SetTilesPerRow(CTerrainLayer_* p, INDEX ctTilesInRow)
{
  ((CTerrainLayer*)p)->SetTilesPerRow(ctTilesInRow);
}

INDEX CTerrainLayer_GetTilesPerRow(CTerrainLayer_* p)
{
  return ((CTerrainLayer*)p)->GetTilesPerRow();
}

CTextureData_* CTerrainLayer_GetThumbnail(CTerrainLayer_* p, INDEX iWidth, INDEX iHeight)
{
  return (CTextureData_*)(((CTerrainLayer*)p)->GetThumbnail(iWidth, iHeight));
}

void CTerrainLayer_ResetLayerMask(CTerrainLayer_* p, UBYTE ubMaskFill)
{
  ((CTerrainLayer*)p)->ResetLayerMask(ubMaskFill);
}

void CTerrainLayer_ResetLayerParams(CTerrainLayer_* p)
{
  ((CTerrainLayer*)p)->ResetLayerParams();
}

static void sehCTerrainLayer_Read_t(CTerrainLayer_* p, CTStream_* istrFile, INDEX iSavedVersion)
{
  SECAPI_TRY
  ((CTerrainLayer*)p)->Read_t((CTStream*)istrFile, iSavedVersion);
  SECAPI_CATCH
}

void CTerrainLayer_Read_t(CTerrainLayer_* p, CTStream_* istrFile, INDEX iSavedVersion)
{
  STREAM_TRY
  sehCTerrainLayer_Read_t(p, istrFile, iSavedVersion);
  STREAM_CATCH
}

static void sehCTerrainLayer_Write_t(CTerrainLayer_* p, CTStream_* ostrFile)
{
  SECAPI_TRY
  ((CTerrainLayer*)p)->Write_t((CTStream*)ostrFile);
  SECAPI_CATCH
}

void CTerrainLayer_Write_t(CTerrainLayer_* p, CTStream_* ostrFile)
{
  STREAM_TRY
  sehCTerrainLayer_Write_t(p, ostrFile);
  STREAM_CATCH
}

void CTerrainLayer_Clear(CTerrainLayer_* p)
{
  ((CTerrainLayer*)p)->Clear();
}

SLONG CTerrainLayer_GetUsedMemory(CTerrainLayer_* p)
{
  return ((CTerrainLayer*)p)->GetUsedMemory();
}

CTextureData_** CTerrainLayer_tl_ptdTexture(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return (CTextureData_**)(&t.tl_ptdTexture);
}

UBYTE** CTerrainLayer_tl_aubColors(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_aubColors;
}

CTextureData_* CTerrainLayer_tl_tdThumbNail(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return (CTextureData_*)(&t.tl_tdThumbNail);
}

INDEX* CTerrainLayer_tl_iMaskWidth(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_iMaskWidth;
}

INDEX* CTerrainLayer_tl_iMaskHeight(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_iMaskHeight;
}

CTString_* CTerrainLayer_tl_strName(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return (CTString_*)(&t.tl_strName);
}

BOOL* CTerrainLayer_tl_bVisible(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_bVisible;
}

COLOR* CTerrainLayer_tl_colMultiply(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_colMultiply;
}

FLOAT* CTerrainLayer_tl_fSmoothness(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fSmoothness;
}

LayerType_* CTerrainLayer_tl_ltType(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return (LayerType_*)(&t.tl_ltType);
}

FLOAT* CTerrainLayer_tl_fRotateX(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fRotateX;
}

FLOAT* CTerrainLayer_tl_fRotateY(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fRotateY;
}

FLOAT* CTerrainLayer_tl_fStretchX(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fStretchX;
}

FLOAT* CTerrainLayer_tl_fStretchY(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fStretchY;
}

FLOAT* CTerrainLayer_tl_fOffsetX(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fOffsetX;
}

FLOAT* CTerrainLayer_tl_fOffsetY(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fOffsetY;
}

BOOL* CTerrainLayer_tl_bAutoRegenerated(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_bAutoRegenerated;
}

FLOAT* CTerrainLayer_tl_fCoverage(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fCoverage;
}

FLOAT* CTerrainLayer_tl_fCoverageNoise(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fCoverageNoise;
}

FLOAT* CTerrainLayer_tl_fCoverageRandom(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fCoverageRandom;
}

BOOL* CTerrainLayer_tl_bApplyMinAltitude(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_bApplyMinAltitude;
}

FLOAT* CTerrainLayer_tl_fMinAltitude(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fMinAltitude;
}

FLOAT* CTerrainLayer_tl_fMinAltitudeFade(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fMinAltitudeFade;
}

FLOAT* CTerrainLayer_tl_fMinAltitudeNoise(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fMinAltitudeNoise;
}

FLOAT* CTerrainLayer_tl_fMinAltitudeRandom(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fMinAltitudeRandom;
}

BOOL* CTerrainLayer_tl_bApplyMaxAltitude(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_bApplyMaxAltitude;
}

FLOAT* CTerrainLayer_tl_fMaxAltitude(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fMaxAltitude;
}

FLOAT* CTerrainLayer_tl_fMaxAltitudeFade(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fMaxAltitudeFade;
}

FLOAT* CTerrainLayer_tl_fMaxAltitudeNoise(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fMaxAltitudeNoise;
}

FLOAT* CTerrainLayer_tl_fMaxAltitudeRandom(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fMaxAltitudeRandom;
}

BOOL* CTerrainLayer_tl_bApplyMinSlope(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_bApplyMinSlope;
}

FLOAT* CTerrainLayer_tl_fMinSlope(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fMinSlope;
}

FLOAT* CTerrainLayer_tl_fMinSlopeFade(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fMinSlopeFade;
}

FLOAT* CTerrainLayer_tl_fMinSlopeNoise(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fMinSlopeNoise;
}

FLOAT* CTerrainLayer_tl_fMinSlopeRandom(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fMinSlopeRandom;
}

BOOL* CTerrainLayer_tl_bApplyMaxSlope(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_bApplyMaxSlope;
}

FLOAT* CTerrainLayer_tl_fMaxSlope(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fMaxSlope;
}

FLOAT* CTerrainLayer_tl_fMaxSlopeFade(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fMaxSlopeFade;
}

FLOAT* CTerrainLayer_tl_fMaxSlopeNoise(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fMaxSlopeNoise;
}

FLOAT* CTerrainLayer_tl_fMaxSlopeRandom(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fMaxSlopeRandom;
}

INDEX* CTerrainLayer_tl_ctTilesInRow(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_ctTilesInRow;
}

INDEX* CTerrainLayer_tl_ctTilesInCol(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_ctTilesInCol;
}

INDEX* CTerrainLayer_tl_iSelectedTile(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_iSelectedTile;
}

PIX* CTerrainLayer_tl_pixTileWidth(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_pixTileWidth;
}

PIX* CTerrainLayer_tl_pixTileHeight(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_pixTileHeight;
}

FLOAT* CTerrainLayer_tl_fTileU(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fTileU;
}

FLOAT* CTerrainLayer_tl_fTileV(CTerrainLayer_* p)
{
  CTerrainLayer& t = *((CTerrainLayer*)p);
  return &t.tl_fTileV;
}
