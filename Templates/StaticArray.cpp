#include "StaticArray.h"
#include <Engine/Terrain/ArrayHolder.h>
#include <Engine/Terrain/Terrain.h>

#define IMPL_CStaticArray(TYPE)\
  CStaticArray_##TYPE##_* CStaticArray_##TYPE##_new()\
  {\
    return (CStaticArray_##TYPE##_*)(new CStaticArray<TYPE>());\
  }\
  CStaticArray_##TYPE##_* CStaticArray_##TYPE##_clone(const CStaticArray_##TYPE##_* p)\
  {\
    CStaticArray<TYPE>* r = new CStaticArray<TYPE>();\
    *r = *((const CStaticArray<TYPE>*)p);\
    return (CStaticArray_##TYPE##_*)r;\
  }\
  void CStaticArray_##TYPE##_delete(CStaticArray_##TYPE##_* p)\
  {\
    delete ((CStaticArray<TYPE>*)p);\
  }\
  void CStaticArray_##TYPE##_copy(CStaticArray_##TYPE##_* a, const CStaticArray_##TYPE##_* b)\
  {\
    *((CStaticArray<TYPE>*)a) = *((const CStaticArray<TYPE>*)b);\
  }\
  void CStaticArray_##TYPE##_New(CStaticArray_##TYPE##_* p, INDEX count)\
  {\
    ((CStaticArray<TYPE>*)p)->New(count);\
  }\
  void CStaticArray_##TYPE##_Expand(CStaticArray_##TYPE##_* p, INDEX count)\
  {\
    ((CStaticArray<TYPE>*)p)->Expand(count);\
  }\
  void CStaticArray_##TYPE##_Delete(CStaticArray_##TYPE##_* p)\
  {\
    ((CStaticArray<TYPE>*)p)->Delete();\
  }\
  void CStaticArray_##TYPE##_Clear(CStaticArray_##TYPE##_* p)\
  {\
    ((CStaticArray<TYPE>*)p)->Clear();\
  }\
  TYPE##_* CStaticArray_##TYPE##_Element(CStaticArray_##TYPE##_* p, INDEX i)\
  {\
    CStaticArray<TYPE>& a = *((CStaticArray<TYPE>*)p);\
    return (TYPE##_*)(&(a[i]));\
  }\
  const TYPE##_* CStaticArray_##TYPE##_Element_const(const CStaticArray_##TYPE##_* p, INDEX i)\
  {\
    const CStaticArray<TYPE>& a = *((const CStaticArray<TYPE>*)p);\
    return (const TYPE##_*)(&(a[i]));\
  }\
  INDEX CStaticArray_##TYPE##_Count(const CStaticArray_##TYPE##_* p)\
  {\
    return ((const CStaticArray<TYPE>*)p)->Count();\
  }\
  INDEX CStaticArray_##TYPE##_Index(CStaticArray_##TYPE##_* p, TYPE##_* e)\
  {\
    return ((CStaticArray<TYPE>*)p)->Index((TYPE*)e);\
  }\
  void CStaticArray_##TYPE##_CopyArray(CStaticArray_##TYPE##_* a, const CStaticArray_##TYPE##_* b)\
  {\
    ((CStaticArray<TYPE>*)a)->CopyArray(*((const CStaticArray<TYPE>*)b));\
  }\
  void CStaticArray_##TYPE##_MoveArray(CStaticArray_##TYPE##_* a, CStaticArray_##TYPE##_* b)\
  {\
    ((CStaticArray<TYPE>*)a)->MoveArray(*((CStaticArray<TYPE>*)b));\
  }

IMPL_CStaticArray(PolygonsPerPatch)
IMPL_CStaticArray(ModelPolygon)
IMPL_CStaticArray(ModelTextureVertex)
IMPL_CStaticArray(MappingSurface)
IMPL_CStaticArray(ModelFrameVertex8)
IMPL_CStaticArray(ModelFrameVertex16)
IMPL_CStaticArray(ModelFrameInfo)
IMPL_CStaticArray(TransformedVertexData)
IMPL_CStaticArray(ModelPolygonVertex)
IMPL_CStaticArray(PIX2D)
IMPL_CStaticArray(FLOAT2D)
IMPL_CStaticArray(FLOAT3D)
IMPL_CStaticArray(DOUBLE3D)
IMPL_CStaticArray(GFXColor)
IMPL_CStaticArray(GFXTexCoord)
IMPL_CStaticArray(GFXVertex4)
IMPL_CStaticArray(TileLayer)
IMPL_CStaticArray(TileArrays)
IMPL_CStaticArray(CTextureData)
IMPL_CStaticArray(QuadTreeNode)
IMPL_CStaticArray(QuadTreeLevel)
IMPL_CStaticArray(CTerrainTile)
IMPL_CStaticArray(CArrayHolder)
IMPL_CStaticArray(CTerrainLayer)
IMPL_CStaticArray(CBrushVertex)

#undef IMPL_CStaticArray

#define IMPL_CStaticArray(TYPE)\
  CStaticArray_##TYPE##_* CStaticArray_##TYPE##_new()\
  {\
    return (CStaticArray_##TYPE##_*)(new CStaticArray<TYPE>());\
  }\
  CStaticArray_##TYPE##_* CStaticArray_##TYPE##_clone(const CStaticArray_##TYPE##_* p)\
  {\
    CStaticArray<TYPE>* r = new CStaticArray<TYPE>();\
    *r = *((const CStaticArray<TYPE>*)p);\
    return (CStaticArray_##TYPE##_*)r;\
  }\
  void CStaticArray_##TYPE##_delete(CStaticArray_##TYPE##_* p)\
  {\
    delete ((CStaticArray<TYPE>*)p);\
  }\
  void CStaticArray_##TYPE##_copy(CStaticArray_##TYPE##_* a, const CStaticArray_##TYPE##_* b)\
  {\
    *((CStaticArray<TYPE>*)a) = *((const CStaticArray<TYPE>*)b);\
  }\
  void CStaticArray_##TYPE##_New(CStaticArray_##TYPE##_* p, INDEX count)\
  {\
    ((CStaticArray<TYPE>*)p)->New(count);\
  }\
  void CStaticArray_##TYPE##_Expand(CStaticArray_##TYPE##_* p, INDEX count)\
  {\
    ((CStaticArray<TYPE>*)p)->Expand(count);\
  }\
  void CStaticArray_##TYPE##_Delete(CStaticArray_##TYPE##_* p)\
  {\
    ((CStaticArray<TYPE>*)p)->Delete();\
  }\
  void CStaticArray_##TYPE##_Clear(CStaticArray_##TYPE##_* p)\
  {\
    ((CStaticArray<TYPE>*)p)->Clear();\
  }\
  TYPE* CStaticArray_##TYPE##_Element(CStaticArray_##TYPE##_* p, INDEX i)\
  {\
    CStaticArray<TYPE>& a = *((CStaticArray<TYPE>*)p);\
    return &(a[i]);\
  }\
  const TYPE* CStaticArray_##TYPE##_Element_const(const CStaticArray_##TYPE##_* p, INDEX i)\
  {\
    const CStaticArray<TYPE>& a = *((const CStaticArray<TYPE>*)p);\
    return &(a[i]);\
  }\
  INDEX CStaticArray_##TYPE##_Count(const CStaticArray_##TYPE##_* p)\
  {\
    return ((const CStaticArray<TYPE>*)p)->Count();\
  }\
  INDEX CStaticArray_##TYPE##_Index(CStaticArray_##TYPE##_* p, TYPE* e)\
  {\
    return ((CStaticArray<TYPE>*)p)->Index(e);\
  }\
  void CStaticArray_##TYPE##_CopyArray(CStaticArray_##TYPE##_* a, const CStaticArray_##TYPE##_* b)\
  {\
    ((CStaticArray<TYPE>*)a)->CopyArray(*((const CStaticArray<TYPE>*)b));\
  }\
  void CStaticArray_##TYPE##_MoveArray(CStaticArray_##TYPE##_* a, CStaticArray_##TYPE##_* b)\
  {\
    ((CStaticArray<TYPE>*)a)->MoveArray(*((CStaticArray<TYPE>*)b));\
  }

IMPL_CStaticArray(UWORD)
IMPL_CStaticArray(ULONG)
IMPL_CStaticArray(INDEX)
IMPL_CStaticArray(SLONG)
