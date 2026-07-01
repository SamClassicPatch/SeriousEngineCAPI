#ifndef SECAPI_TEMPLATES_STATIC_ARRAY_H
#define SECAPI_TEMPLATES_STATIC_ARRAY_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define DECLARE_CStaticArray(TYPE)\
  SECAPI CStaticArray_##TYPE##_* CStaticArray_##TYPE##_new();\
  SECAPI CStaticArray_##TYPE##_* CStaticArray_##TYPE##_clone(const CStaticArray_##TYPE##_* p);\
  SECAPI void CStaticArray_##TYPE##_delete(CStaticArray_##TYPE##_* p);\
  SECAPI void CStaticArray_##TYPE##_copy(CStaticArray_##TYPE##_* a, const CStaticArray_##TYPE##_* b);\
  SECAPI void CStaticArray_##TYPE##_New(CStaticArray_##TYPE##_* p, INDEX count);\
  SECAPI void CStaticArray_##TYPE##_Expand(CStaticArray_##TYPE##_* p, INDEX count);\
  SECAPI void CStaticArray_##TYPE##_Delete(CStaticArray_##TYPE##_* p);\
  SECAPI void CStaticArray_##TYPE##_Clear(CStaticArray_##TYPE##_* p);\
  SECAPI TYPE##_* CStaticArray_##TYPE##_Element(CStaticArray_##TYPE##_* p, INDEX i);\
  SECAPI const TYPE##_* CStaticArray_##TYPE##_Element_const(const CStaticArray_##TYPE##_* p, INDEX i);\
  SECAPI INDEX CStaticArray_##TYPE##_Count(const CStaticArray_##TYPE##_* p);\
  SECAPI INDEX CStaticArray_##TYPE##_Index(CStaticArray_##TYPE##_* p, TYPE##_* e);\
  SECAPI void CStaticArray_##TYPE##_CopyArray(CStaticArray_##TYPE##_* a, const CStaticArray_##TYPE##_* b);\
  SECAPI void CStaticArray_##TYPE##_MoveArray(CStaticArray_##TYPE##_* a, CStaticArray_##TYPE##_* b);

DECLARE_CStaticArray(PolygonsPerPatch)
DECLARE_CStaticArray(ModelPolygon)
DECLARE_CStaticArray(ModelTextureVertex)
DECLARE_CStaticArray(MappingSurface)
DECLARE_CStaticArray(ModelFrameVertex8)
DECLARE_CStaticArray(ModelFrameVertex16)
DECLARE_CStaticArray(ModelFrameInfo)
DECLARE_CStaticArray(TransformedVertexData)
DECLARE_CStaticArray(ModelPolygonVertex)
DECLARE_CStaticArray(PIX2D)
DECLARE_CStaticArray(FLOAT2D)
DECLARE_CStaticArray(FLOAT3D)
DECLARE_CStaticArray(DOUBLE3D)
DECLARE_CStaticArray(GFXColor)
DECLARE_CStaticArray(GFXTexCoord)
DECLARE_CStaticArray(GFXVertex4)
DECLARE_CStaticArray(TileLayer)
DECLARE_CStaticArray(TileArrays)
DECLARE_CStaticArray(QuadTreeNode)
DECLARE_CStaticArray(QuadTreeLevel)
DECLARE_CStaticArray(CTerrainTile)
DECLARE_CStaticArray(CArrayHolder)
DECLARE_CStaticArray(CTerrainLayer)
DECLARE_CStaticArray(CBrushVertex)
DECLARE_CStaticArray(CBrushPolygon)
DECLARE_CStaticArray(CBrushPolygonEdge)
DECLARE_CStaticArray(CBrushEdge)
DECLARE_CStaticArray(CBrushPlane)
DECLARE_CStaticArray(CTextureTransformation)
DECLARE_CStaticArray(CTextureBlending)
DECLARE_CStaticArray(CSurfaceType)
DECLARE_CStaticArray(CContentType)
DECLARE_CStaticArray(CEnvironmentType)
DECLARE_CStaticArray(CIlluminationType)

#undef DECLARE_CStaticArray

#define DECLARE_CStaticArray(TYPE)\
  SECAPI CStaticArray_##TYPE##_* CStaticArray_##TYPE##_new();\
  SECAPI CStaticArray_##TYPE##_* CStaticArray_##TYPE##_clone(const CStaticArray_##TYPE##_* p);\
  SECAPI void CStaticArray_##TYPE##_delete(CStaticArray_##TYPE##_* p);\
  SECAPI void CStaticArray_##TYPE##_copy(CStaticArray_##TYPE##_* a, const CStaticArray_##TYPE##_* b);\
  SECAPI void CStaticArray_##TYPE##_New(CStaticArray_##TYPE##_* p, INDEX count);\
  SECAPI void CStaticArray_##TYPE##_Expand(CStaticArray_##TYPE##_* p, INDEX count);\
  SECAPI void CStaticArray_##TYPE##_Delete(CStaticArray_##TYPE##_* p);\
  SECAPI void CStaticArray_##TYPE##_Clear(CStaticArray_##TYPE##_* p);\
  SECAPI TYPE* CStaticArray_##TYPE##_Element(CStaticArray_##TYPE##_* p, INDEX i);\
  SECAPI const TYPE* CStaticArray_##TYPE##_Element_const(const CStaticArray_##TYPE##_* p, INDEX i);\
  SECAPI INDEX CStaticArray_##TYPE##_Count(const CStaticArray_##TYPE##_* p);\
  SECAPI INDEX CStaticArray_##TYPE##_Index(CStaticArray_##TYPE##_* p, TYPE* e);\
  SECAPI void CStaticArray_##TYPE##_CopyArray(CStaticArray_##TYPE##_* a, const CStaticArray_##TYPE##_* b);\
  SECAPI void CStaticArray_##TYPE##_MoveArray(CStaticArray_##TYPE##_* a, CStaticArray_##TYPE##_* b);

DECLARE_CStaticArray(UWORD)
DECLARE_CStaticArray(ULONG)
DECLARE_CStaticArray(INDEX)
DECLARE_CStaticArray(SLONG)
DECLARE_CStaticArray(CBrushVertexPtr_)

#undef DECLARE_CStaticArray

#ifdef __cplusplus
}
#endif

#endif
