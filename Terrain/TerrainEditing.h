#ifndef SECAPI_TERRAIN_TERRAIN_EDITING_H
#define SECAPI_TERRAIN_TERRAIN_EDITING_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define ET_NONE_ 0
#define ET_HEIGHT_TOOL_ 1
#define ET_SMOTH_TOOL_ 2
#define ET_EQUALIZE_ 3
#define ET_ERASE_ 4
#define ET_FLATERN_ 5
#define ET_NOISE_ 6

#define BT_INVALID_ 0
#define BT_HEIGHT_MAP_ 1
#define BT_LAYER_MASK_ 2
#define BT_EDGE_MAP_ 3

#define SF_POLYGON_ 0
#define SF_WIREFRAME_ 1
#define SF_POINTS_ 2

SECAPI UWORD* GetBufferForEditing_(CTerrain_* ptrTerrain, Rect_* rcExtract, BufferType_ btBufferType, INDEX iBufferData);
SECAPI void SetBufferForEditing_(CTerrain_* ptrTerrain, UWORD* puwEditedBuffer, Rect_* rcExtract, BufferType_ btBufferType, INDEX iBufferData);
SECAPI void ShowSelection_(CTerrain_* ptrTerrain, Rect_* rcExtract, CTextureData_* ptdBrush, COLOR colSelection, FLOAT fStrenght, SelectionFill_ sfFill);

#ifdef __cplusplus
}
#endif

#endif
