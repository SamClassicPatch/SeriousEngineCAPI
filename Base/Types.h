#ifndef SECAPI_TYPES_H
#define SECAPI_TYPES_H

#ifdef SERIOUSENGINECAPI_EXPORTS
#define SECAPI __declspec(dllexport)
#include <Engine/Engine.h>
#else
#define SECAPI __declspec(dllimport)
#include <stdint.h>

typedef int32_t BOOL;
typedef int32_t INDEX;
typedef int32_t PIX;
typedef int32_t MEX;
typedef int32_t SLONG;
#ifndef BASETYPES
typedef uint32_t ULONG; // on redefinition error, make sure its included after <windows.h>
#endif
typedef uint32_t COLOR;
typedef signed char SBYTE;
typedef unsigned char UBYTE;
typedef float FLOAT;
typedef double DOUBLE;
#endif

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

typedef struct CTStream_ CTStream_;
typedef struct CTString_ CTString_;
typedef struct CTFileName_ CTFileName_;
typedef struct CTranslationPair_ CTranslationPair_;
typedef struct CDynamicArray_CTFileName_ CDynamicArray_CTFileName_;
typedef struct CDynamicArray_CTranslationPair_ CDynamicArray_CTranslationPair_;

SECAPI BOOL HasException();
SECAPI char* GrabException();
void SetException(char* s);

#define SECAPI_TRY\
  try {
#define SECAPI_CATCH\
  } catch (char* e) { SetException(e); }

#endif
