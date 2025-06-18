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

#endif
