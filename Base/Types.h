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
typedef struct CPlacement3D_ CPlacement3D_;
typedef struct FLOATquat3D_ FLOATquat3D_;
typedef struct DOUBLEquat3D_ DOUBLEquat3D_;

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

typedef struct CDynamicStackArray_FLOAT_ CDynamicStackArray_FLOAT_;
typedef struct CDynamicStackArray_CTString_ CDynamicStackArray_CTString_;
typedef struct CDynamicStackArray_CTFileName_ CDynamicStackArray_CTFileName_;

// enums for open mode
#define CTStream_OM_READ 1
#define CTStream_OM_WRITE 2
// enums for seek dir
#define CTStream_SD_BEG 0
#define CTStream_SD_END 2
#define CTStream_SD_CUR 1
// flags for ExpandFilePath_
#define CTStream_EFP_READ   (1UL<<0)  // will open for reading
#define CTStream_EFP_WRITE  (1UL<<1)  // will open for writing
#define CTStream_EFP_NOZIPS (1UL<<31) // add this flag to forbid searching in zips
#define CTStream_EFP_NODISK (1UL<<30) // add this flag to forbid searching on disk
// these are return values 
#define CTStream_EFP_NONE       0  // doesn't exist
#define CTStream_EFP_FILE       1  // generic file on disk
#define CTStream_EFP_BASEZIP    2  // file in one of base zips
#define CTStream_EFP_MODZIP     3  // file in one of mod zips
// these are input flags for directory reading
#define CTStream_DLI_RECURSIVE  (1UL<<0)  // recurse into subdirs
#define CTStream_DLI_SEARCHCD   (1UL<<1)  // search the CD path also

SECAPI BOOL HasException();
SECAPI char* GrabException();
void SetException(char* s);

#define SECAPI_TRY\
  try {
#define SECAPI_CATCH\
  } catch (char* e) { SetException(e); }

#endif
