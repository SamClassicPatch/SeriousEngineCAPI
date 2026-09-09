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

#ifndef SECAPI_TERRAIN_TERRAIN_LAYER_H
#define SECAPI_TERRAIN_TERRAIN_LAYER_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define LayerType_LT_NORMAL 0
#define LayerType_LT_TILE 1

#ifndef SERIOUSENGINECAPI_EXPORTS
#define TL_FLIPX_SHIFT   4
#define TL_FLIPY_SHIFT   5
#define TL_SWAPXY_SHIFT  6
#define TL_VISIBLE_SHIFT 7

#define TL_TILE_INDEX 0x0F
#define TL_VISIBLE    (1<<TL_VISIBLE_SHIFT)
#define TL_FLIPX      (1<<TL_FLIPX_SHIFT)
#define TL_FLIPY      (1<<TL_FLIPY_SHIFT)
#define TL_SWAPXY     (1<<TL_SWAPXY_SHIFT)
#endif

SECAPI CTerrainLayer_* CTerrainLayer_new();
SECAPI void CTerrainLayer_delete(CTerrainLayer_* p);
SECAPI void CTerrainLayer_copy(CTerrainLayer_* a, const CTerrainLayer_* b);
SECAPI void CTerrainLayer_ImportLayerMask_t(CTerrainLayer_* p, CTFileName_* fnLayerMask);
SECAPI void CTerrainLayer_ExportLayerMask_t(CTerrainLayer_* p, CTFileName_* fnLayerMask);
SECAPI void CTerrainLayer_SetLayerSize(CTerrainLayer_* p, INDEX iTerrainWidth, INDEX iTerrainHeight);
SECAPI void CTerrainLayer_SetLayerTexture_t(CTerrainLayer_* p, CTFileName_* fnTexture);
SECAPI void CTerrainLayer_SetTilesPerRow(CTerrainLayer_* p, INDEX ctTilesInRow);
SECAPI INDEX CTerrainLayer_GetTilesPerRow(CTerrainLayer_* p);
SECAPI CTextureData_* CTerrainLayer_GetThumbnail(CTerrainLayer_* p, INDEX iWidth, INDEX iHeight);
SECAPI void CTerrainLayer_ResetLayerMask(CTerrainLayer_* p, UBYTE ubMaskFill);
SECAPI void CTerrainLayer_ResetLayerParams(CTerrainLayer_* p);
SECAPI void CTerrainLayer_Read_t(CTerrainLayer_* p, CTStream_* istrFile,INDEX iSavedVersion);
SECAPI void CTerrainLayer_Write_t(CTerrainLayer_* p, CTStream_* ostrFile);
SECAPI void CTerrainLayer_Clear(CTerrainLayer_* p);
SECAPI SLONG CTerrainLayer_GetUsedMemory(CTerrainLayer_* p);
SECAPI CTextureData_** CTerrainLayer_tl_ptdTexture(CTerrainLayer_* p);
SECAPI UBYTE** CTerrainLayer_tl_aubColors(CTerrainLayer_* p);
SECAPI CTextureData_* CTerrainLayer_tl_tdThumbNail(CTerrainLayer_* p);
SECAPI INDEX* CTerrainLayer_tl_iMaskWidth(CTerrainLayer_* p);
SECAPI INDEX* CTerrainLayer_tl_iMaskHeight(CTerrainLayer_* p);
SECAPI CTString_* CTerrainLayer_tl_strName(CTerrainLayer_* p);
SECAPI BOOL* CTerrainLayer_tl_bVisible(CTerrainLayer_* p);
SECAPI COLOR* CTerrainLayer_tl_colMultiply(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fSmoothness(CTerrainLayer_* p);
SECAPI LayerType_* CTerrainLayer_tl_ltType(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fRotateX(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fRotateY(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fStretchX(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fStretchY(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fOffsetX(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fOffsetY(CTerrainLayer_* p);
SECAPI BOOL* CTerrainLayer_tl_bAutoRegenerated(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fCoverage(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fCoverageNoise(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fCoverageRandom(CTerrainLayer_* p);
SECAPI BOOL* CTerrainLayer_tl_bApplyMinAltitude(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fMinAltitude(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fMinAltitudeFade(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fMinAltitudeNoise(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fMinAltitudeRandom(CTerrainLayer_* p);
SECAPI BOOL* CTerrainLayer_tl_bApplyMaxAltitude(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fMaxAltitude(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fMaxAltitudeFade(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fMaxAltitudeNoise(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fMaxAltitudeRandom(CTerrainLayer_* p);
SECAPI BOOL* CTerrainLayer_tl_bApplyMinSlope(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fMinSlope(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fMinSlopeFade(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fMinSlopeNoise(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fMinSlopeRandom(CTerrainLayer_* p);
SECAPI BOOL* CTerrainLayer_tl_bApplyMaxSlope(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fMaxSlope(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fMaxSlopeFade(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fMaxSlopeNoise(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fMaxSlopeRandom(CTerrainLayer_* p);
SECAPI INDEX* CTerrainLayer_tl_ctTilesInRow(CTerrainLayer_* p);
SECAPI INDEX* CTerrainLayer_tl_ctTilesInCol(CTerrainLayer_* p); 
SECAPI INDEX* CTerrainLayer_tl_iSelectedTile(CTerrainLayer_* p);
SECAPI PIX* CTerrainLayer_tl_pixTileWidth(CTerrainLayer_* p);
SECAPI PIX* CTerrainLayer_tl_pixTileHeight(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fTileU(CTerrainLayer_* p);
SECAPI FLOAT* CTerrainLayer_tl_fTileV(CTerrainLayer_* p);

#ifdef __cplusplus
}
#endif

#endif
