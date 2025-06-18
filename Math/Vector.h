#ifndef SECAPI_MATH_VECTOR_H
#define SECAPI_MATH_VECTOR_H
#include "../Base/Types.h"
#include "../Base/Stream.h"
#include "Matrix.h"

#ifdef __cplusplus
extern "C" {
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

// FLOAT2D
SECAPI FLOAT2D_* FLOAT2D_new();
SECAPI FLOAT2D_* FLOAT2D_new_xy(FLOAT x, FLOAT y);
SECAPI FLOAT2D_* FLOAT2D_clone(const FLOAT2D_* p);
SECAPI void FLOAT2D_delete(FLOAT2D_* p);
SECAPI void FLOAT2D_Clear(FLOAT2D_* p);
SECAPI FLOAT FLOAT2D_Length(const FLOAT2D_* p);
SECAPI FLOAT FLOAT2D_ManhattanNorm(const FLOAT2D_* p);
SECAPI FLOAT FLOAT2D_MaxNorm(const FLOAT2D_* p);
SECAPI FLOAT* FLOAT2D_operator_braces(FLOAT2D_* p, INDEX i);
SECAPI FLOAT FLOAT2D_operator_braces_const(const FLOAT2D_* p, INDEX i);
SECAPI void FLOAT2D_Normalize(FLOAT2D_* p);
SECAPI void FLOAT2D_SafeNormalize(FLOAT2D_* p);
SECAPI void FLOAT2D_Flip(FLOAT2D_* p);
SECAPI FLOAT2D_* FLOAT2D_operator_unary_minus(const FLOAT2D_* p);
SECAPI FLOAT2D_* FLOAT2D_operator_plus(const FLOAT2D_* a, const FLOAT2D_* b);
SECAPI void FLOAT2D_operator_plusequal(FLOAT2D_* a, const FLOAT2D_* b);
SECAPI FLOAT2D_* FLOAT2D_operator_minus(const FLOAT2D_* a, const FLOAT2D_* b);
SECAPI void FLOAT2D_operator_minusequal(FLOAT2D_* a, const FLOAT2D_* b);
SECAPI FLOAT2D_* FLOAT2D_operator_mul(const FLOAT2D_* a, FLOAT b);
SECAPI void FLOAT2D_operator_mulequal(FLOAT2D_* a, FLOAT b);
SECAPI FLOAT2D_* FLOAT2D_operator_div(const FLOAT2D_* a, FLOAT b);
SECAPI void FLOAT2D_operator_divequal(FLOAT2D_* a, FLOAT b);
SECAPI FLOAT2D_* FLOAT2D_operator_mul_matrix(const FLOAT2D_* a, const FLOATmatrix2D_* b);
SECAPI void FLOAT2D_operator_mulequal_matrix(FLOAT2D_* a, const FLOATmatrix2D_* b);
SECAPI FLOAT FLOAT2D_Dot(const FLOAT2D_* a, const FLOAT2D_* b);
SECAPI FLOAT2D_* FLOAT2D_operator_mul_vector(const FLOAT2D_* a, const FLOAT2D_* b);
SECAPI void FLOAT2D_operator_mulequal_vector(FLOAT2D_* a, const FLOAT2D_* b);
SECAPI BOOL FLOAT2D_operator_equals(const FLOAT2D_* a, const FLOAT2D_* b);
SECAPI BOOL FLOAT2D_operator_notequals(const FLOAT2D_* a, const FLOAT2D_* b);
SECAPI void FLOAT2D_operator_extraction(CTStream_* s, FLOAT2D_* p);
SECAPI void FLOAT2D_operator_insertion(CTStream_* s, FLOAT2D_* p);

// FLOAT3D
SECAPI FLOAT3D_* FLOAT3D_new();
SECAPI FLOAT3D_* FLOAT3D_new_xyz(FLOAT x, FLOAT y, FLOAT z);
SECAPI FLOAT3D_* FLOAT3D_clone(const FLOAT3D_* p);
SECAPI void FLOAT3D_delete(FLOAT3D_* p);
SECAPI void FLOAT3D_Clear(FLOAT3D_* p);
SECAPI FLOAT FLOAT3D_Length(const FLOAT3D_* p);
SECAPI FLOAT FLOAT3D_ManhattanNorm(const FLOAT3D_* p);
SECAPI FLOAT FLOAT3D_MaxNorm(const FLOAT3D_* p);
SECAPI FLOAT* FLOAT3D_operator_braces(FLOAT3D_* p, INDEX i);
SECAPI FLOAT FLOAT3D_operator_braces_const(const FLOAT3D_* p, INDEX i);
SECAPI void FLOAT3D_Normalize(FLOAT3D_* p);
SECAPI void FLOAT3D_SafeNormalize(FLOAT3D_* p);
SECAPI void FLOAT3D_Flip(FLOAT3D_* p);
SECAPI FLOAT3D_* FLOAT3D_operator_unary_minus(const FLOAT3D_* p);
SECAPI FLOAT3D_* FLOAT3D_operator_plus(const FLOAT3D_* a, const FLOAT3D_* b);
SECAPI void FLOAT3D_operator_plusequal(FLOAT3D_* a, const FLOAT3D_* b);
SECAPI FLOAT3D_* FLOAT3D_operator_minus(const FLOAT3D_* a, const FLOAT3D_* b);
SECAPI void FLOAT3D_operator_minusequal(FLOAT3D_* a, const FLOAT3D_* b);
SECAPI FLOAT3D_* FLOAT3D_operator_mul(const FLOAT3D_* a, FLOAT b);
SECAPI void FLOAT3D_operator_mulequal(FLOAT3D_* a, FLOAT b);
SECAPI FLOAT3D_* FLOAT3D_operator_div(const FLOAT3D_* a, FLOAT b);
SECAPI void FLOAT3D_operator_divequal(FLOAT3D_* a, FLOAT b);
SECAPI FLOAT3D_* FLOAT3D_operator_mul_matrix(const FLOAT3D_* a, const FLOATmatrix3D_* b);
SECAPI void FLOAT3D_operator_mulequal_matrix(FLOAT3D_* a, const FLOATmatrix3D_* b);
SECAPI FLOAT FLOAT3D_Dot(const FLOAT3D_* a, const FLOAT3D_* b);
SECAPI FLOAT3D_* FLOAT3D_operator_mul_vector(const FLOAT3D_* a, const FLOAT3D_* b);
SECAPI void FLOAT3D_operator_mulequal_vector(FLOAT3D_* a, const FLOAT3D_* b);
SECAPI BOOL FLOAT3D_operator_equals(const FLOAT3D_* a, const FLOAT3D_* b);
SECAPI BOOL FLOAT3D_operator_notequals(const FLOAT3D_* a, const FLOAT3D_* b);
SECAPI void FLOAT3D_operator_extraction(CTStream_* s, FLOAT3D_* p);
SECAPI void FLOAT3D_operator_insertion(CTStream_* s, FLOAT3D_* p);

// FLOAT4D
SECAPI FLOAT4D_* FLOAT4D_new();
SECAPI FLOAT4D_* FLOAT4D_new_xyzw(FLOAT x, FLOAT y, FLOAT z, FLOAT w);
SECAPI FLOAT4D_* FLOAT4D_clone(const FLOAT4D_* p);
SECAPI void FLOAT4D_delete(FLOAT4D_* p);
SECAPI void FLOAT4D_Clear(FLOAT4D_* p);
SECAPI FLOAT FLOAT4D_Length(const FLOAT4D_* p);
SECAPI FLOAT FLOAT4D_ManhattanNorm(const FLOAT4D_* p);
SECAPI FLOAT FLOAT4D_MaxNorm(const FLOAT4D_* p);
SECAPI FLOAT* FLOAT4D_operator_braces(FLOAT4D_* p, INDEX i);
SECAPI FLOAT FLOAT4D_operator_braces_const(const FLOAT4D_* p, INDEX i);
SECAPI void FLOAT4D_Normalize(FLOAT4D_* p);
SECAPI void FLOAT4D_SafeNormalize(FLOAT4D_* p);
SECAPI void FLOAT4D_Flip(FLOAT4D_* p);
SECAPI FLOAT4D_* FLOAT4D_operator_unary_minus(const FLOAT4D_* p);
SECAPI FLOAT4D_* FLOAT4D_operator_plus(const FLOAT4D_* a, const FLOAT4D_* b);
SECAPI void FLOAT4D_operator_plusequal(FLOAT4D_* a, const FLOAT4D_* b);
SECAPI FLOAT4D_* FLOAT4D_operator_minus(const FLOAT4D_* a, const FLOAT4D_* b);
SECAPI void FLOAT4D_operator_minusequal(FLOAT4D_* a, const FLOAT4D_* b);
SECAPI FLOAT4D_* FLOAT4D_operator_mul(const FLOAT4D_* a, FLOAT b);
SECAPI void FLOAT4D_operator_mulequal(FLOAT4D_* a, FLOAT b);
SECAPI FLOAT4D_* FLOAT4D_operator_div(const FLOAT4D_* a, FLOAT b);
SECAPI void FLOAT4D_operator_divequal(FLOAT4D_* a, FLOAT b);
SECAPI FLOAT4D_* FLOAT4D_operator_mul_matrix(const FLOAT4D_* a, const FLOATmatrix4D_* b);
SECAPI void FLOAT4D_operator_mulequal_matrix(FLOAT4D_* a, const FLOATmatrix4D_* b);
SECAPI FLOAT FLOAT4D_Dot(const FLOAT4D_* a, const FLOAT4D_* b);
SECAPI FLOAT4D_* FLOAT4D_operator_mul_vector(const FLOAT4D_* a, const FLOAT4D_* b);
SECAPI void FLOAT4D_operator_mulequal_vector(FLOAT4D_* a, const FLOAT4D_* b);
SECAPI BOOL FLOAT4D_operator_equals(const FLOAT4D_* a, const FLOAT4D_* b);
SECAPI BOOL FLOAT4D_operator_notequals(const FLOAT4D_* a, const FLOAT4D_* b);
SECAPI void FLOAT4D_operator_extraction(CTStream_* s, FLOAT4D_* p);
SECAPI void FLOAT4D_operator_insertion(CTStream_* s, FLOAT4D_* p);

// DOUBLE2D
SECAPI DOUBLE2D_* DOUBLE2D_new();
SECAPI DOUBLE2D_* DOUBLE2D_new_xy(DOUBLE x, DOUBLE y);
SECAPI DOUBLE2D_* DOUBLE2D_clone(const DOUBLE2D_* p);
SECAPI void DOUBLE2D_delete(DOUBLE2D_* p);
SECAPI void DOUBLE2D_Clear(DOUBLE2D_* p);
SECAPI DOUBLE DOUBLE2D_Length(const DOUBLE2D_* p);
SECAPI DOUBLE DOUBLE2D_ManhattanNorm(const DOUBLE2D_* p);
SECAPI DOUBLE DOUBLE2D_MaxNorm(const DOUBLE2D_* p);
SECAPI DOUBLE* DOUBLE2D_operator_braces(DOUBLE2D_* p, INDEX i);
SECAPI DOUBLE DOUBLE2D_operator_braces_const(const DOUBLE2D_* p, INDEX i);
SECAPI void DOUBLE2D_Normalize(DOUBLE2D_* p);
SECAPI void DOUBLE2D_SafeNormalize(DOUBLE2D_* p);
SECAPI void DOUBLE2D_Flip(DOUBLE2D_* p);
SECAPI DOUBLE2D_* DOUBLE2D_operator_unary_minus(const DOUBLE2D_* p);
SECAPI DOUBLE2D_* DOUBLE2D_operator_plus(const DOUBLE2D_* a, const DOUBLE2D_* b);
SECAPI void DOUBLE2D_operator_plusequal(DOUBLE2D_* a, const DOUBLE2D_* b);
SECAPI DOUBLE2D_* DOUBLE2D_operator_minus(const DOUBLE2D_* a, const DOUBLE2D_* b);
SECAPI void DOUBLE2D_operator_minusequal(DOUBLE2D_* a, const DOUBLE2D_* b);
SECAPI DOUBLE2D_* DOUBLE2D_operator_mul(const DOUBLE2D_* a, DOUBLE b);
SECAPI void DOUBLE2D_operator_mulequal(DOUBLE2D_* a, DOUBLE b);
SECAPI DOUBLE2D_* DOUBLE2D_operator_div(const DOUBLE2D_* a, DOUBLE b);
SECAPI void DOUBLE2D_operator_divequal(DOUBLE2D_* a, DOUBLE b);
SECAPI DOUBLE2D_* DOUBLE2D_operator_mul_matrix(const DOUBLE2D_* a, const DOUBLEmatrix2D_* b);
SECAPI void DOUBLE2D_operator_mulequal_matrix(DOUBLE2D_* a, const DOUBLEmatrix2D_* b);
SECAPI DOUBLE DOUBLE2D_Dot(const DOUBLE2D_* a, const DOUBLE2D_* b);
SECAPI DOUBLE2D_* DOUBLE2D_operator_mul_vector(const DOUBLE2D_* a, const DOUBLE2D_* b);
SECAPI void DOUBLE2D_operator_mulequal_vector(DOUBLE2D_* a, const DOUBLE2D_* b);
SECAPI BOOL DOUBLE2D_operator_equals(const DOUBLE2D_* a, const DOUBLE2D_* b);
SECAPI BOOL DOUBLE2D_operator_notequals(const DOUBLE2D_* a, const DOUBLE2D_* b);
SECAPI void DOUBLE2D_operator_extraction(CTStream_* s, DOUBLE2D_* p);
SECAPI void DOUBLE2D_operator_insertion(CTStream_* s, DOUBLE2D_* p);

// DOUBLE3D
SECAPI DOUBLE3D_* DOUBLE3D_new();
SECAPI DOUBLE3D_* DOUBLE3D_new_xyz(DOUBLE x, DOUBLE y, DOUBLE z);
SECAPI DOUBLE3D_* DOUBLE3D_clone(const DOUBLE3D_* p);
SECAPI void DOUBLE3D_delete(DOUBLE3D_* p);
SECAPI void DOUBLE3D_Clear(DOUBLE3D_* p);
SECAPI DOUBLE DOUBLE3D_Length(const DOUBLE3D_* p);
SECAPI DOUBLE DOUBLE3D_ManhattanNorm(const DOUBLE3D_* p);
SECAPI DOUBLE DOUBLE3D_MaxNorm(const DOUBLE3D_* p);
SECAPI DOUBLE* DOUBLE3D_operator_braces(DOUBLE3D_* p, INDEX i);
SECAPI DOUBLE DOUBLE3D_operator_braces_const(const DOUBLE3D_* p, INDEX i);
SECAPI void DOUBLE3D_Normalize(DOUBLE3D_* p);
SECAPI void DOUBLE3D_SafeNormalize(DOUBLE3D_* p);
SECAPI void DOUBLE3D_Flip(DOUBLE3D_* p);
SECAPI DOUBLE3D_* DOUBLE3D_operator_unary_minus(const DOUBLE3D_* p);
SECAPI DOUBLE3D_* DOUBLE3D_operator_plus(const DOUBLE3D_* a, const DOUBLE3D_* b);
SECAPI void DOUBLE3D_operator_plusequal(DOUBLE3D_* a, const DOUBLE3D_* b);
SECAPI DOUBLE3D_* DOUBLE3D_operator_minus(const DOUBLE3D_* a, const DOUBLE3D_* b);
SECAPI void DOUBLE3D_operator_minusequal(DOUBLE3D_* a, const DOUBLE3D_* b);
SECAPI DOUBLE3D_* DOUBLE3D_operator_mul(const DOUBLE3D_* a, DOUBLE b);
SECAPI void DOUBLE3D_operator_mulequal(DOUBLE3D_* a, DOUBLE b);
SECAPI DOUBLE3D_* DOUBLE3D_operator_div(const DOUBLE3D_* a, DOUBLE b);
SECAPI void DOUBLE3D_operator_divequal(DOUBLE3D_* a, DOUBLE b);
SECAPI DOUBLE3D_* DOUBLE3D_operator_mul_matrix(const DOUBLE3D_* a, const DOUBLEmatrix3D_* b);
SECAPI void DOUBLE3D_operator_mulequal_matrix(DOUBLE3D_* a, const DOUBLEmatrix3D_* b);
SECAPI DOUBLE DOUBLE3D_Dot(const DOUBLE3D_* a, const DOUBLE3D_* b);
SECAPI DOUBLE3D_* DOUBLE3D_operator_mul_vector(const DOUBLE3D_* a, const DOUBLE3D_* b);
SECAPI void DOUBLE3D_operator_mulequal_vector(DOUBLE3D_* a, const DOUBLE3D_* b);
SECAPI BOOL DOUBLE3D_operator_equals(const DOUBLE3D_* a, const DOUBLE3D_* b);
SECAPI BOOL DOUBLE3D_operator_notequals(const DOUBLE3D_* a, const DOUBLE3D_* b);
SECAPI void DOUBLE3D_operator_extraction(CTStream_* s, DOUBLE3D_* p);
SECAPI void DOUBLE3D_operator_insertion(CTStream_* s, DOUBLE3D_* p);

// DOUBLE4D
SECAPI DOUBLE4D_* DOUBLE4D_new();
SECAPI DOUBLE4D_* DOUBLE4D_new_xyzw(DOUBLE x, DOUBLE y, DOUBLE z, DOUBLE w);
SECAPI DOUBLE4D_* DOUBLE4D_clone(const DOUBLE4D_* p);
SECAPI void DOUBLE4D_delete(DOUBLE4D_* p);
SECAPI void DOUBLE4D_Clear(DOUBLE4D_* p);
SECAPI DOUBLE DOUBLE4D_Length(const DOUBLE4D_* p);
SECAPI DOUBLE DOUBLE4D_ManhattanNorm(const DOUBLE4D_* p);
SECAPI DOUBLE DOUBLE4D_MaxNorm(const DOUBLE4D_* p);
SECAPI DOUBLE* DOUBLE4D_operator_braces(DOUBLE4D_* p, INDEX i);
SECAPI DOUBLE DOUBLE4D_operator_braces_const(const DOUBLE4D_* p, INDEX i);
SECAPI void DOUBLE4D_Normalize(DOUBLE4D_* p);
SECAPI void DOUBLE4D_SafeNormalize(DOUBLE4D_* p);
SECAPI void DOUBLE4D_Flip(DOUBLE4D_* p);
SECAPI DOUBLE4D_* DOUBLE4D_operator_unary_minus(const DOUBLE4D_* p);
SECAPI DOUBLE4D_* DOUBLE4D_operator_plus(const DOUBLE4D_* a, const DOUBLE4D_* b);
SECAPI void DOUBLE4D_operator_plusequal(DOUBLE4D_* a, const DOUBLE4D_* b);
SECAPI DOUBLE4D_* DOUBLE4D_operator_minus(const DOUBLE4D_* a, const DOUBLE4D_* b);
SECAPI void DOUBLE4D_operator_minusequal(DOUBLE4D_* a, const DOUBLE4D_* b);
SECAPI DOUBLE4D_* DOUBLE4D_operator_mul(const DOUBLE4D_* a, DOUBLE b);
SECAPI void DOUBLE4D_operator_mulequal(DOUBLE4D_* a, DOUBLE b);
SECAPI DOUBLE4D_* DOUBLE4D_operator_div(const DOUBLE4D_* a, DOUBLE b);
SECAPI void DOUBLE4D_operator_divequal(DOUBLE4D_* a, DOUBLE b);
SECAPI DOUBLE4D_* DOUBLE4D_operator_mul_matrix(const DOUBLE4D_* a, const DOUBLEmatrix4D_* b);
SECAPI void DOUBLE4D_operator_mulequal_matrix(DOUBLE4D_* a, const DOUBLEmatrix4D_* b);
SECAPI DOUBLE DOUBLE4D_Dot(const DOUBLE4D_* a, const DOUBLE4D_* b);
SECAPI DOUBLE4D_* DOUBLE4D_operator_mul_vector(const DOUBLE4D_* a, const DOUBLE4D_* b);
SECAPI void DOUBLE4D_operator_mulequal_vector(DOUBLE4D_* a, const DOUBLE4D_* b);
SECAPI BOOL DOUBLE4D_operator_equals(const DOUBLE4D_* a, const DOUBLE4D_* b);
SECAPI BOOL DOUBLE4D_operator_notequals(const DOUBLE4D_* a, const DOUBLE4D_* b);
SECAPI void DOUBLE4D_operator_extraction(CTStream_* s, DOUBLE4D_* p);
SECAPI void DOUBLE4D_operator_insertion(CTStream_* s, DOUBLE4D_* p);

// INDEX2D
SECAPI INDEX2D_* INDEX2D_new();
SECAPI INDEX2D_* INDEX2D_new_xy(INDEX x, INDEX y);
SECAPI INDEX2D_* INDEX2D_clone(const INDEX2D_* p);
SECAPI void INDEX2D_delete(INDEX2D_* p);
SECAPI void INDEX2D_Clear(INDEX2D_* p);
SECAPI INDEX INDEX2D_Length(const INDEX2D_* p);
SECAPI INDEX INDEX2D_ManhattanNorm(const INDEX2D_* p);
SECAPI INDEX INDEX2D_MaxNorm(const INDEX2D_* p);
SECAPI INDEX* INDEX2D_operator_braces(INDEX2D_* p, INDEX i);
SECAPI INDEX INDEX2D_operator_braces_const(const INDEX2D_* p, INDEX i);
SECAPI void INDEX2D_Normalize(INDEX2D_* p);
SECAPI void INDEX2D_SafeNormalize(INDEX2D_* p);
SECAPI void INDEX2D_Flip(INDEX2D_* p);
SECAPI INDEX2D_* INDEX2D_operator_unary_minus(const INDEX2D_* p);
SECAPI INDEX2D_* INDEX2D_operator_plus(const INDEX2D_* a, const INDEX2D_* b);
SECAPI void INDEX2D_operator_plusequal(INDEX2D_* a, const INDEX2D_* b);
SECAPI INDEX2D_* INDEX2D_operator_minus(const INDEX2D_* a, const INDEX2D_* b);
SECAPI void INDEX2D_operator_minusequal(INDEX2D_* a, const INDEX2D_* b);
SECAPI INDEX2D_* INDEX2D_operator_mul(const INDEX2D_* a, INDEX b);
SECAPI void INDEX2D_operator_mulequal(INDEX2D_* a, INDEX b);
SECAPI INDEX2D_* INDEX2D_operator_div(const INDEX2D_* a, INDEX b);
SECAPI void INDEX2D_operator_divequal(INDEX2D_* a, INDEX b);
SECAPI INDEX2D_* INDEX2D_operator_mul_matrix(const INDEX2D_* a, const INDEXmatrix2D_* b);
SECAPI void INDEX2D_operator_mulequal_matrix(INDEX2D_* a, const INDEXmatrix2D_* b);
SECAPI INDEX INDEX2D_Dot(const INDEX2D_* a, const INDEX2D_* b);
SECAPI INDEX2D_* INDEX2D_operator_mul_vector(const INDEX2D_* a, const INDEX2D_* b);
SECAPI void INDEX2D_operator_mulequal_vector(INDEX2D_* a, const INDEX2D_* b);
SECAPI BOOL INDEX2D_operator_equals(const INDEX2D_* a, const INDEX2D_* b);
SECAPI BOOL INDEX2D_operator_notequals(const INDEX2D_* a, const INDEX2D_* b);
SECAPI void INDEX2D_operator_extraction(CTStream_* s, INDEX2D_* p);
SECAPI void INDEX2D_operator_insertion(CTStream_* s, INDEX2D_* p);

// INDEX3D
SECAPI INDEX3D_* INDEX3D_new();
SECAPI INDEX3D_* INDEX3D_new_xyz(INDEX x, INDEX y, INDEX z);
SECAPI INDEX3D_* INDEX3D_clone(const INDEX3D_* p);
SECAPI void INDEX3D_delete(INDEX3D_* p);
SECAPI void INDEX3D_Clear(INDEX3D_* p);
SECAPI INDEX INDEX3D_Length(const INDEX3D_* p);
SECAPI INDEX INDEX3D_ManhattanNorm(const INDEX3D_* p);
SECAPI INDEX INDEX3D_MaxNorm(const INDEX3D_* p);
SECAPI INDEX* INDEX3D_operator_braces(INDEX3D_* p, INDEX i);
SECAPI INDEX INDEX3D_operator_braces_const(const INDEX3D_* p, INDEX i);
SECAPI void INDEX3D_Normalize(INDEX3D_* p);
SECAPI void INDEX3D_SafeNormalize(INDEX3D_* p);
SECAPI void INDEX3D_Flip(INDEX3D_* p);
SECAPI INDEX3D_* INDEX3D_operator_unary_minus(const INDEX3D_* p);
SECAPI INDEX3D_* INDEX3D_operator_plus(const INDEX3D_* a, const INDEX3D_* b);
SECAPI void INDEX3D_operator_plusequal(INDEX3D_* a, const INDEX3D_* b);
SECAPI INDEX3D_* INDEX3D_operator_minus(const INDEX3D_* a, const INDEX3D_* b);
SECAPI void INDEX3D_operator_minusequal(INDEX3D_* a, const INDEX3D_* b);
SECAPI INDEX3D_* INDEX3D_operator_mul(const INDEX3D_* a, INDEX b);
SECAPI void INDEX3D_operator_mulequal(INDEX3D_* a, INDEX b);
SECAPI INDEX3D_* INDEX3D_operator_div(const INDEX3D_* a, INDEX b);
SECAPI void INDEX3D_operator_divequal(INDEX3D_* a, INDEX b);
SECAPI INDEX3D_* INDEX3D_operator_mul_matrix(const INDEX3D_* a, const INDEXmatrix3D_* b);
SECAPI void INDEX3D_operator_mulequal_matrix(INDEX3D_* a, const INDEXmatrix3D_* b);
SECAPI INDEX INDEX3D_Dot(const INDEX3D_* a, const INDEX3D_* b);
SECAPI INDEX3D_* INDEX3D_operator_mul_vector(const INDEX3D_* a, const INDEX3D_* b);
SECAPI void INDEX3D_operator_mulequal_vector(INDEX3D_* a, const INDEX3D_* b);
SECAPI BOOL INDEX3D_operator_equals(const INDEX3D_* a, const INDEX3D_* b);
SECAPI BOOL INDEX3D_operator_notequals(const INDEX3D_* a, const INDEX3D_* b);
SECAPI void INDEX3D_operator_extraction(CTStream_* s, INDEX3D_* p);
SECAPI void INDEX3D_operator_insertion(CTStream_* s, INDEX3D_* p);

// INDEX4D
SECAPI INDEX4D_* INDEX4D_new();
SECAPI INDEX4D_* INDEX4D_new_xyzw(INDEX x, INDEX y, INDEX z, INDEX w);
SECAPI INDEX4D_* INDEX4D_clone(const INDEX4D_* p);
SECAPI void INDEX4D_delete(INDEX4D_* p);
SECAPI void INDEX4D_Clear(INDEX4D_* p);
SECAPI INDEX INDEX4D_Length(const INDEX4D_* p);
SECAPI INDEX INDEX4D_ManhattanNorm(const INDEX4D_* p);
SECAPI INDEX INDEX4D_MaxNorm(const INDEX4D_* p);
SECAPI INDEX* INDEX4D_operator_braces(INDEX4D_* p, INDEX i);
SECAPI INDEX INDEX4D_operator_braces_const(const INDEX4D_* p, INDEX i);
SECAPI void INDEX4D_Normalize(INDEX4D_* p);
SECAPI void INDEX4D_SafeNormalize(INDEX4D_* p);
SECAPI void INDEX4D_Flip(INDEX4D_* p);
SECAPI INDEX4D_* INDEX4D_operator_unary_minus(const INDEX4D_* p);
SECAPI INDEX4D_* INDEX4D_operator_plus(const INDEX4D_* a, const INDEX4D_* b);
SECAPI void INDEX4D_operator_plusequal(INDEX4D_* a, const INDEX4D_* b);
SECAPI INDEX4D_* INDEX4D_operator_minus(const INDEX4D_* a, const INDEX4D_* b);
SECAPI void INDEX4D_operator_minusequal(INDEX4D_* a, const INDEX4D_* b);
SECAPI INDEX4D_* INDEX4D_operator_mul(const INDEX4D_* a, INDEX b);
SECAPI void INDEX4D_operator_mulequal(INDEX4D_* a, INDEX b);
SECAPI INDEX4D_* INDEX4D_operator_div(const INDEX4D_* a, INDEX b);
SECAPI void INDEX4D_operator_divequal(INDEX4D_* a, INDEX b);
SECAPI INDEX4D_* INDEX4D_operator_mul_matrix(const INDEX4D_* a, const INDEXmatrix4D_* b);
SECAPI void INDEX4D_operator_mulequal_matrix(INDEX4D_* a, const INDEXmatrix4D_* b);
SECAPI INDEX INDEX4D_Dot(const INDEX4D_* a, const INDEX4D_* b);
SECAPI INDEX4D_* INDEX4D_operator_mul_vector(const INDEX4D_* a, const INDEX4D_* b);
SECAPI void INDEX4D_operator_mulequal_vector(INDEX4D_* a, const INDEX4D_* b);
SECAPI BOOL INDEX4D_operator_equals(const INDEX4D_* a, const INDEX4D_* b);
SECAPI BOOL INDEX4D_operator_notequals(const INDEX4D_* a, const INDEX4D_* b);
SECAPI void INDEX4D_operator_extraction(CTStream_* s, INDEX4D_* p);
SECAPI void INDEX4D_operator_insertion(CTStream_* s, INDEX4D_* p);

#ifdef __cplusplus
}
#endif

#endif
