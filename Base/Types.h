#ifndef SECAPI_TYPES_H
#define SECAPI_TYPES_H

#ifdef SERIOUSENGINECAPI_EXPORTS
#define SECAPI __declspec(dllexport)
#include <Engine/Engine.h>
typedef __int64 int64_t;
#else
#define SECAPI __declspec(dllimport)
#include <stdint.h>

typedef int32_t BOOL;
typedef int32_t INDEX;
typedef int32_t PIX;
typedef int32_t MEX;
typedef int16_t SWORD;
typedef uint16_t UWORD;
typedef int32_t SLONG;
#ifndef BASETYPES
typedef uint32_t ULONG; // on redefinition error, make sure its included after <windows.h>
#endif
typedef uint32_t COLOR;
typedef signed char SBYTE;
typedef unsigned char UBYTE;
typedef float FLOAT;
typedef float ANGLE;
typedef float TIME;
typedef double DOUBLE;
#endif

typedef INDEX SurfaceShadingType_;
typedef INDEX SurfaceTranslucencyType_;

typedef struct FLOAT2D_ FLOAT2D_;
typedef struct FLOAT3D_ FLOAT3D_;
typedef struct FLOAT4D_ FLOAT4D_;
typedef FLOAT3D_ ANGLE3D_;
typedef struct DOUBLE2D_ DOUBLE2D_;
typedef struct DOUBLE3D_ DOUBLE3D_;
typedef struct DOUBLE4D_ DOUBLE4D_;
typedef struct INDEX2D_ INDEX2D_;
typedef struct INDEX3D_ INDEX3D_;
typedef struct INDEX4D_ INDEX4D_;
typedef INDEX2D_ PIX2D_;
typedef INDEX2D_ MEX2D_;
typedef struct SWORD3D_ SWORD3D_;
typedef struct SBYTE3D_ SBYTE3D_;
typedef SWORD3D_ SWPOINT3D_;
typedef SBYTE3D_ SBPOINT3D_;

typedef struct FLOATmatrix2D_ FLOATmatrix2D_;
typedef struct FLOATmatrix3D_ FLOATmatrix3D_;
typedef struct FLOATmatrix4D_ FLOATmatrix4D_;
typedef FLOATmatrix3D_ ANGLEmatrix3D_;
typedef struct DOUBLEmatrix2D_ DOUBLEmatrix2D_;
typedef struct DOUBLEmatrix3D_ DOUBLEmatrix3D_;
typedef struct DOUBLEmatrix4D_ DOUBLEmatrix4D_;
typedef struct INDEXmatrix2D_ INDEXmatrix2D_;
typedef struct INDEXmatrix3D_ INDEXmatrix3D_;
typedef struct INDEXmatrix4D_ INDEXmatrix4D_;
typedef INDEXmatrix2D_ PIXmatrix2D_;
typedef INDEXmatrix2D_ MEXmatrix2D_;

typedef struct INDEXaabbox2D_ INDEXaabbox2D_;
typedef INDEXaabbox2D_ PIXaabbox2D_;
typedef INDEXaabbox2D_ MEXaabbox2D_;
typedef struct FLOATaabbox2D_ FLOATaabbox2D_;
typedef struct FLOATaabbox3D_ FLOATaabbox3D_;
typedef struct DOUBLEaabbox2D_ DOUBLEaabbox2D_;
typedef struct DOUBLEaabbox3D_ DOUBLEaabbox3D_;

typedef struct FLOATobbox3D_ FLOATobbox3D_;
typedef struct DOUBLEobbox3D_ DOUBLEobbox3D_;

typedef struct CPlacement3D_ CPlacement3D_;

typedef struct FLOATquat3D_ FLOATquat3D_;
typedef struct DOUBLEquat3D_ DOUBLEquat3D_;

typedef struct FLOATplane3D_ FLOATplane3D_;
typedef struct DOUBLEplane3D_ DOUBLEplane3D_;

typedef struct CProjection3D_ CProjection3D_;
typedef struct CPerspectiveProjection3D_ CPerspectiveProjection3D_;
typedef struct CIsometricProjection3D_ CIsometricProjection3D_;
typedef struct CParallelProjection3D_ CParallelProjection3D_;
typedef struct CSimpleProjection3D_ CSimpleProjection3D_;
typedef struct CAnyProjection3D_ CAnyProjection3D_;

typedef struct CPlanarGradients_ CPlanarGradients_;
typedef struct CMappingDefinitionUI_ CMappingDefinitionUI_;
typedef struct CMappingVectors_ CMappingVectors_;
typedef struct CMappingDefinition_ CMappingDefinition_;

typedef struct CTCriticalSection_ CTCriticalSection_;
typedef struct CTSingleLock_ CTSingleLock_;
typedef struct CTimerValue_ CTimerValue_;
typedef struct CTimerHandler_ CTimerHandler_;
typedef struct CTimer_ CTimer_;
typedef struct CUpdateable_ CUpdateable_;
typedef struct CChangeable_ CChangeable_;
typedef struct CSerial_ CSerial_;
typedef struct CAnimInfo_ CAnimInfo_;
typedef struct COneAnim_ COneAnim_;
typedef struct CAnimData_ CAnimData_;
typedef struct CAnimObject_ CAnimObject_;
typedef struct CChunkID_ CChunkID_;
typedef struct CListNode_ CListNode_;
typedef struct CListHead_ CListHead_;
typedef struct CTStream_ CTStream_;
typedef struct CTFileStream_ CTFileStream_;
typedef struct CTMemoryStream_ CTMemoryStream_;
typedef struct CTString_ CTString_;
typedef struct CTFileName_ CTFileName_;
typedef struct CTranslationPair_ CTranslationPair_;

typedef struct CDynamicArray_FLOAT_ CDynamicArray_FLOAT_;
typedef struct CDynamicArray_CTString_ CDynamicArray_CTString_;
typedef struct CDynamicArray_CTFileName_ CDynamicArray_CTFileName_;
typedef struct CDynamicArray_CTranslationPair_ CDynamicArray_CTranslationPair_;
typedef struct CDynamicArray_CModelCollisionBox_ CDynamicArray_CModelCollisionBox_;
typedef struct CDynamicArray_CAttachedModelPosition_ CDynamicArray_CAttachedModelPosition_;

typedef struct CDynamicStackArray_FLOAT_ CDynamicStackArray_FLOAT_;
typedef struct CDynamicStackArray_CTString_ CDynamicStackArray_CTString_;
typedef struct CDynamicStackArray_CTFileName_ CDynamicStackArray_CTFileName_;

typedef struct CStaticArray_PolygonsPerPatch_ CStaticArray_PolygonsPerPatch_;
typedef struct CStaticArray_ModelPolygon_ CStaticArray_ModelPolygon_;
typedef struct CStaticArray_ModelTextureVertex_ CStaticArray_ModelTextureVertex_;
typedef struct CStaticArray_MappingSurface_ CStaticArray_MappingSurface_;
typedef struct CStaticArray_ModelFrameVertex8_ CStaticArray_ModelFrameVertex8_;
typedef struct CStaticArray_ModelFrameVertex16_ CStaticArray_ModelFrameVertex16_;
typedef struct CStaticArray_ModelFrameInfo_ CStaticArray_ModelFrameInfo_;
typedef struct CStaticArray_TransformedVertexData_ CStaticArray_TransformedVertexData_;
typedef struct CStaticArray_ModelPolygonVertex_ CStaticArray_ModelPolygonVertex_;
typedef struct CStaticArray_UWORD_ CStaticArray_UWORD_;
typedef struct CStaticArray_ULONG_ CStaticArray_ULONG_;
typedef struct CStaticArray_SLONG_ CStaticArray_SLONG_;
typedef struct CStaticArray_INDEX_ CStaticArray_INDEX_;
typedef struct CStaticArray_FLOAT2D_ CStaticArray_FLOAT2D_;
typedef struct CStaticArray_FLOAT3D_ CStaticArray_FLOAT3D_;
typedef struct CStaticArray_PIX2D_ CStaticArray_PIX2D_;

typedef struct CStaticStackArray_PIX2D_ CStaticStackArray_PIX2D_;
typedef struct CStaticStackArray_FLOAT3D_ CStaticStackArray_FLOAT3D_;
typedef struct CStaticStackArray_SLONG_ CStaticStackArray_SLONG_;
typedef struct CStaticStackArray_INDEX_ CStaticStackArray_INDEX_;

typedef struct CImageInfo_ CImageInfo_;
typedef struct CTextureData_ CTextureData_;
typedef struct CTextureObject_ CTextureObject_;

typedef struct ModelPolygonVertex_ ModelPolygonVertex_;
typedef struct PolygonsPerPatch_ PolygonsPerPatch_;
typedef struct ModelPolygon_ ModelPolygon_;
typedef struct ModelTextureVertex_ ModelTextureVertex_;
typedef struct MappingSurface_ MappingSurface_;
typedef struct ModelFrameVertex8_ ModelFrameVertex8_;
typedef struct ModelFrameVertex16_ ModelFrameVertex16_;
typedef struct ModelFrameInfo_ ModelFrameInfo_;
typedef struct TransformedVertexData_ TransformedVertexData_;
typedef struct CModelCollisionBox_ CModelCollisionBox_;
typedef struct CAttachedModelPosition_ CAttachedModelPosition_;
typedef struct CMipInfo_ CMipInfo_;
typedef struct CModelInfo_ CModelInfo_;
typedef struct CModelPatch_ CModelPatch_;
typedef struct ModelMipInfo_ ModelMipInfo_;
typedef struct CModelData_ CModelData_;
typedef struct CModelRenderPrefs_ CModelRenderPrefs_;
typedef struct CRenderModel_ CRenderModel_;
typedef struct CModelObject_ CModelObject_;
typedef struct CAttachmentModelObject_ CAttachmentModelObject_;

typedef struct CDrawPort_ CDrawPort_;

SECAPI BOOL HasException();
SECAPI char* GrabException();
void SetException(char* s);

#define SECAPI_TRY\
  try {
#define SECAPI_CATCH\
  } catch (char* e) { SetException(e); }

#endif
