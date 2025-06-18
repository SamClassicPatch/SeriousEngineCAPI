#include "Vector.h"
#include <Engine/Math/Vector.h>

typedef Vector<FLOAT, 4> FLOAT4D;
typedef Vector<DOUBLE, 4> DOUBLE4D;
typedef Vector<INDEX, 2> INDEX2D;
typedef Vector<INDEX, 3> INDEX3D;
typedef Vector<INDEX, 4> INDEX4D;
typedef Matrix<FLOAT, 4, 4> FLOATmatrix4D;
typedef Matrix<DOUBLE, 2, 2> DOUBLEmatrix2D;
typedef Matrix<DOUBLE, 4, 4> DOUBLEmatrix4D;
typedef Matrix<INDEX, 2, 2> INDEXmatrix2D;
typedef Matrix<INDEX, 3, 3> INDEXmatrix3D;
typedef Matrix<INDEX, 4, 4> INDEXmatrix4D;

// FLOAT2D
FLOAT2D_* FLOAT2D_new()
{
  return (FLOAT2D_*)(new FLOAT2D());
}

FLOAT2D_* FLOAT2D_new_xy(FLOAT x, FLOAT y)
{
  return (FLOAT2D_*)(new FLOAT2D(x, y));
}

FLOAT2D_* FLOAT2D_clone(const FLOAT2D_* p)
{
  return (FLOAT2D_*)(new FLOAT2D(*((const FLOAT2D*)p)));
}

void FLOAT2D_delete(FLOAT2D_* p)
{
  delete ((FLOAT2D*)p);
}

void FLOAT2D_Clear(FLOAT2D_* p)
{
  ((FLOAT2D*)p)->Clear();
}

FLOAT FLOAT2D_Length(const FLOAT2D_* p)
{
  return ((const FLOAT2D*)p)->Length();
}

FLOAT FLOAT2D_ManhattanNorm(const FLOAT2D_* p)
{
  return ((const FLOAT2D*)p)->ManhattanNorm();
}

FLOAT FLOAT2D_MaxNorm(const FLOAT2D_* p)
{
  return ((const FLOAT2D*)p)->MaxNorm();
}

FLOAT* FLOAT2D_operator_braces(FLOAT2D_* p, INDEX i)
{
  return &( (*((FLOAT2D*)p))(i) );
}

FLOAT FLOAT2D_operator_braces_const(const FLOAT2D_* p, INDEX i)
{
  return (*((const FLOAT2D*)p))(i);
}

void FLOAT2D_Normalize(FLOAT2D_* p)
{
  ((FLOAT2D*)p)->Normalize();
}

void FLOAT2D_SafeNormalize(FLOAT2D_* p)
{
  ((FLOAT2D*)p)->SafeNormalize();
}

void FLOAT2D_Flip(FLOAT2D_* p)
{
  ((FLOAT2D*)p)->Flip();
}

FLOAT2D_* FLOAT2D_operator_unary_minus(const FLOAT2D_* p)
{
  FLOAT2D result = ((const FLOAT2D*)p)->operator-();
  return (FLOAT2D_*)(new FLOAT2D(result));
}

FLOAT2D_* FLOAT2D_operator_plus(const FLOAT2D_* a, const FLOAT2D_* b)
{
  FLOAT2D result = ((const FLOAT2D*)a)->operator+(*((const FLOAT2D*)b));
  return (FLOAT2D_*)(new FLOAT2D(result));
}

void FLOAT2D_operator_plusequal(FLOAT2D_* a, const FLOAT2D_* b)
{
  ((FLOAT2D*)a)->operator+=(*((const FLOAT2D*)b));
}

FLOAT2D_* FLOAT2D_operator_minus(const FLOAT2D_* a, const FLOAT2D_* b)
{
  FLOAT2D result = ((const FLOAT2D*)a)->operator-(*((const FLOAT2D*)b));
  return (FLOAT2D_*)(new FLOAT2D(result));
}

void FLOAT2D_operator_minusequal(FLOAT2D_* a, const FLOAT2D_* b)
{
  ((FLOAT2D*)a)->operator-=(*((const FLOAT2D*)b));
}

FLOAT2D_* FLOAT2D_operator_mul(const FLOAT2D_* a, FLOAT b)
{
  FLOAT2D result = ((const FLOAT2D*)a)->operator*(b);
  return (FLOAT2D_*)(new FLOAT2D(result));
}

void FLOAT2D_operator_mulequal(FLOAT2D_* a, FLOAT b)
{
  ((FLOAT2D*)a)->operator*=(b);
}

FLOAT2D_* FLOAT2D_operator_div(const FLOAT2D_* a, FLOAT b)
{
  FLOAT2D result = ((const FLOAT2D*)a)->operator/(b);
  return (FLOAT2D_*)(new FLOAT2D(result));
}

void FLOAT2D_operator_divequal(FLOAT2D_* a, FLOAT b)
{
  ((FLOAT2D*)a)->operator/=(b);
}

FLOAT2D_* FLOAT2D_operator_mul_matrix(const FLOAT2D_* a, const FLOATmatrix2D_* b)
{
  FLOAT2D result = ((const FLOAT2D*)a)->operator*(*((const FLOATmatrix2D*)b));
  return (FLOAT2D_*)(new FLOAT2D(result));
}

void FLOAT2D_operator_mulequal_matrix(FLOAT2D_* a, const FLOATmatrix2D_* b)
{
  ((FLOAT2D*)a)->operator*=(*((const FLOATmatrix2D*)b));
}

FLOAT FLOAT2D_Dot(const FLOAT2D_* a, const FLOAT2D_* b)
{
  return ((const FLOAT2D*)a)->operator%(*((const FLOAT2D*)b));
}

FLOAT2D_* FLOAT2D_operator_mul_vector(const FLOAT2D_* a, const FLOAT2D_* b)
{
  FLOAT2D result = ((const FLOAT2D*)a)->operator*(*((const FLOAT2D*)b));
  return (FLOAT2D_*)(new FLOAT2D(result));
}

void FLOAT2D_operator_mulequal_vector(FLOAT2D_* a, const FLOAT2D_* b)
{
  ((FLOAT2D*)a)->operator*=(*((const FLOAT2D*)b));
}

BOOL FLOAT2D_operator_equals(const FLOAT2D_* a, const FLOAT2D_* b)
{
  return (*((const FLOAT2D*)a)) == (*((const FLOAT2D*)b));
}

BOOL FLOAT2D_operator_notequals(const FLOAT2D_* a, const FLOAT2D_* b)
{
  return (*((const FLOAT2D*)a)) != (*((const FLOAT2D*)b));
}

void FLOAT2D_operator_extraction(CTStream_* s, FLOAT2D_* p)
{
  (*((CTStream*)s)) >> (*((FLOAT2D*)p));
}

void FLOAT2D_operator_insertion(CTStream_* s, FLOAT2D_* p)
{
  (*((CTStream*)s)) << (*((FLOAT2D*)p));
}

// FLOAT3D
FLOAT3D_* FLOAT3D_new()
{
  return (FLOAT3D_*)(new FLOAT3D());
}

FLOAT3D_* FLOAT3D_new_xyz(FLOAT x, FLOAT y, FLOAT z)
{
  return (FLOAT3D_*)(new FLOAT3D(x, y, z));
}

FLOAT3D_* FLOAT3D_clone(const FLOAT3D_* p)
{
  return (FLOAT3D_*)(new FLOAT3D(*((const FLOAT3D*)p)));
}

void FLOAT3D_delete(FLOAT3D_* p)
{
  delete ((FLOAT3D*)p);
}

void FLOAT3D_Clear(FLOAT3D_* p)
{
  ((FLOAT3D*)p)->Clear();
}

FLOAT FLOAT3D_Length(const FLOAT3D_* p)
{
  return ((const FLOAT3D*)p)->Length();
}

FLOAT FLOAT3D_ManhattanNorm(const FLOAT3D_* p)
{
  return ((const FLOAT3D*)p)->ManhattanNorm();
}

FLOAT FLOAT3D_MaxNorm(const FLOAT3D_* p)
{
  return ((const FLOAT3D*)p)->MaxNorm();
}

FLOAT* FLOAT3D_operator_braces(FLOAT3D_* p, INDEX i)
{
  return &( (*((FLOAT3D*)p))(i) );
}

FLOAT FLOAT3D_operator_braces_const(const FLOAT3D_* p, INDEX i)
{
  return (*((const FLOAT3D*)p))(i);
}

void FLOAT3D_Normalize(FLOAT3D_* p)
{
  ((FLOAT3D*)p)->Normalize();
}

void FLOAT3D_SafeNormalize(FLOAT3D_* p)
{
  ((FLOAT3D*)p)->SafeNormalize();
}

void FLOAT3D_Flip(FLOAT3D_* p)
{
  ((FLOAT3D*)p)->Flip();
}

FLOAT3D_* FLOAT3D_operator_unary_minus(const FLOAT3D_* p)
{
  FLOAT3D result = ((const FLOAT3D*)p)->operator-();
  return (FLOAT3D_*)(new FLOAT3D(result));
}

FLOAT3D_* FLOAT3D_operator_plus(const FLOAT3D_* a, const FLOAT3D_* b)
{
  FLOAT3D result = ((const FLOAT3D*)a)->operator+(*((const FLOAT3D*)b));
  return (FLOAT3D_*)(new FLOAT3D(result));
}

void FLOAT3D_operator_plusequal(FLOAT3D_* a, const FLOAT3D_* b)
{
  ((FLOAT3D*)a)->operator+=(*((const FLOAT3D*)b));
}

FLOAT3D_* FLOAT3D_operator_minus(const FLOAT3D_* a, const FLOAT3D_* b)
{
  FLOAT3D result = ((const FLOAT3D*)a)->operator-(*((const FLOAT3D*)b));
  return (FLOAT3D_*)(new FLOAT3D(result));
}

void FLOAT3D_operator_minusequal(FLOAT3D_* a, const FLOAT3D_* b)
{
  ((FLOAT3D*)a)->operator-=(*((const FLOAT3D*)b));
}

FLOAT3D_* FLOAT3D_operator_mul(const FLOAT3D_* a, FLOAT b)
{
  FLOAT3D result = ((const FLOAT3D*)a)->operator*(b);
  return (FLOAT3D_*)(new FLOAT3D(result));
}

void FLOAT3D_operator_mulequal(FLOAT3D_* a, FLOAT b)
{
  ((FLOAT3D*)a)->operator*=(b);
}

FLOAT3D_* FLOAT3D_operator_div(const FLOAT3D_* a, FLOAT b)
{
  FLOAT3D result = ((const FLOAT3D*)a)->operator/(b);
  return (FLOAT3D_*)(new FLOAT3D(result));
}

void FLOAT3D_operator_divequal(FLOAT3D_* a, FLOAT b)
{
  ((FLOAT3D*)a)->operator/=(b);
}

FLOAT3D_* FLOAT3D_operator_mul_matrix(const FLOAT3D_* a, const FLOATmatrix3D_* b)
{
  FLOAT3D result = ((const FLOAT3D*)a)->operator*(*((const FLOATmatrix3D*)b));
  return (FLOAT3D_*)(new FLOAT3D(result));
}

void FLOAT3D_operator_mulequal_matrix(FLOAT3D_* a, const FLOATmatrix3D_* b)
{
  ((FLOAT3D*)a)->operator*=(*((const FLOATmatrix3D*)b));
}

FLOAT FLOAT3D_Dot(const FLOAT3D_* a, const FLOAT3D_* b)
{
  return ((const FLOAT3D*)a)->operator%(*((const FLOAT3D*)b));
}

FLOAT3D_* FLOAT3D_operator_mul_vector(const FLOAT3D_* a, const FLOAT3D_* b)
{
  FLOAT3D result = ((const FLOAT3D*)a)->operator*(*((const FLOAT3D*)b));
  return (FLOAT3D_*)(new FLOAT3D(result));
}

void FLOAT3D_operator_mulequal_vector(FLOAT3D_* a, const FLOAT3D_* b)
{
  ((FLOAT3D*)a)->operator*=(*((const FLOAT3D*)b));
}

BOOL FLOAT3D_operator_equals(const FLOAT3D_* a, const FLOAT3D_* b)
{
  return (*((const FLOAT3D*)a)) == (*((const FLOAT3D*)b));
}

BOOL FLOAT3D_operator_notequals(const FLOAT3D_* a, const FLOAT3D_* b)
{
  return (*((const FLOAT3D*)a)) != (*((const FLOAT3D*)b));
}

void FLOAT3D_operator_extraction(CTStream_* s, FLOAT3D_* p)
{
  (*((CTStream*)s)) >> (*((FLOAT3D*)p));
}

void FLOAT3D_operator_insertion(CTStream_* s, FLOAT3D_* p)
{
  (*((CTStream*)s)) << (*((FLOAT3D*)p));
}

// FLOAT4D
FLOAT4D_* FLOAT4D_new()
{
  return (FLOAT4D_*)(new FLOAT4D());
}

FLOAT4D_* FLOAT4D_new_xyzw(FLOAT x, FLOAT y, FLOAT z, FLOAT w)
{
  return (FLOAT4D_*)(new FLOAT4D(x, y, z, w));
}

FLOAT4D_* FLOAT4D_clone(const FLOAT4D_* p)
{
  return (FLOAT4D_*)(new FLOAT4D(*((const FLOAT4D*)p)));
}

void FLOAT4D_delete(FLOAT4D_* p)
{
  delete ((FLOAT4D*)p);
}

void FLOAT4D_Clear(FLOAT4D_* p)
{
  ((FLOAT4D*)p)->Clear();
}

FLOAT FLOAT4D_Length(const FLOAT4D_* p)
{
  return ((const FLOAT4D*)p)->Length();
}

FLOAT FLOAT4D_ManhattanNorm(const FLOAT4D_* p)
{
  return ((const FLOAT4D*)p)->ManhattanNorm();
}

FLOAT FLOAT4D_MaxNorm(const FLOAT4D_* p)
{
  return ((const FLOAT4D*)p)->MaxNorm();
}

FLOAT* FLOAT4D_operator_braces(FLOAT4D_* p, INDEX i)
{
  return &( (*((FLOAT4D*)p))(i) );
}

FLOAT FLOAT4D_operator_braces_const(const FLOAT4D_* p, INDEX i)
{
  return (*((const FLOAT4D*)p))(i);
}

void FLOAT4D_Normalize(FLOAT4D_* p)
{
  ((FLOAT4D*)p)->Normalize();
}

void FLOAT4D_SafeNormalize(FLOAT4D_* p)
{
  ((FLOAT4D*)p)->SafeNormalize();
}

void FLOAT4D_Flip(FLOAT4D_* p)
{
  ((FLOAT4D*)p)->Flip();
}

FLOAT4D_* FLOAT4D_operator_unary_minus(const FLOAT4D_* p)
{
  FLOAT4D result = ((const FLOAT4D*)p)->operator-();
  return (FLOAT4D_*)(new FLOAT4D(result));
}

FLOAT4D_* FLOAT4D_operator_plus(const FLOAT4D_* a, const FLOAT4D_* b)
{
  FLOAT4D result = ((const FLOAT4D*)a)->operator+(*((const FLOAT4D*)b));
  return (FLOAT4D_*)(new FLOAT4D(result));
}

void FLOAT4D_operator_plusequal(FLOAT4D_* a, const FLOAT4D_* b)
{
  ((FLOAT4D*)a)->operator+=(*((const FLOAT4D*)b));
}

FLOAT4D_* FLOAT4D_operator_minus(const FLOAT4D_* a, const FLOAT4D_* b)
{
  FLOAT4D result = ((const FLOAT4D*)a)->operator-(*((const FLOAT4D*)b));
  return (FLOAT4D_*)(new FLOAT4D(result));
}

void FLOAT4D_operator_minusequal(FLOAT4D_* a, const FLOAT4D_* b)
{
  ((FLOAT4D*)a)->operator-=(*((const FLOAT4D*)b));
}

FLOAT4D_* FLOAT4D_operator_mul(const FLOAT4D_* a, FLOAT b)
{
  FLOAT4D result = ((const FLOAT4D*)a)->operator*(b);
  return (FLOAT4D_*)(new FLOAT4D(result));
}

void FLOAT4D_operator_mulequal(FLOAT4D_* a, FLOAT b)
{
  ((FLOAT4D*)a)->operator*=(b);
}

FLOAT4D_* FLOAT4D_operator_div(const FLOAT4D_* a, FLOAT b)
{
  FLOAT4D result = ((const FLOAT4D*)a)->operator/(b);
  return (FLOAT4D_*)(new FLOAT4D(result));
}

void FLOAT4D_operator_divequal(FLOAT4D_* a, FLOAT b)
{
  ((FLOAT4D*)a)->operator/=(b);
}

FLOAT4D_* FLOAT4D_operator_mul_matrix(const FLOAT4D_* a, const FLOATmatrix4D_* b)
{
  FLOAT4D result = ((const FLOAT4D*)a)->operator*(*((const FLOATmatrix4D*)b));
  return (FLOAT4D_*)(new FLOAT4D(result));
}

void FLOAT4D_operator_mulequal_matrix(FLOAT4D_* a, const FLOATmatrix4D_* b)
{
  ((FLOAT4D*)a)->operator*=(*((const FLOATmatrix4D*)b));
}

FLOAT FLOAT4D_Dot(const FLOAT4D_* a, const FLOAT4D_* b)
{
  return ((const FLOAT4D*)a)->operator%(*((const FLOAT4D*)b));
}

FLOAT4D_* FLOAT4D_operator_mul_vector(const FLOAT4D_* a, const FLOAT4D_* b)
{
  FLOAT4D result = ((const FLOAT4D*)a)->operator*(*((const FLOAT4D*)b));
  return (FLOAT4D_*)(new FLOAT4D(result));
}

void FLOAT4D_operator_mulequal_vector(FLOAT4D_* a, const FLOAT4D_* b)
{
  ((FLOAT4D*)a)->operator*=(*((const FLOAT4D*)b));
}

BOOL FLOAT4D_operator_equals(const FLOAT4D_* a, const FLOAT4D_* b)
{
  return (*((const FLOAT4D*)a)) == (*((const FLOAT4D*)b));
}

BOOL FLOAT4D_operator_notequals(const FLOAT4D_* a, const FLOAT4D_* b)
{
  return (*((const FLOAT4D*)a)) != (*((const FLOAT4D*)b));
}

void FLOAT4D_operator_extraction(CTStream_* s, FLOAT4D_* p)
{
  (*((CTStream*)s)) >> (*((FLOAT4D*)p));
}

void FLOAT4D_operator_insertion(CTStream_* s, FLOAT4D_* p)
{
  (*((CTStream*)s)) << (*((FLOAT4D*)p));
}

// DOUBLE2D
DOUBLE2D_* DOUBLE2D_new()
{
  return (DOUBLE2D_*)(new DOUBLE2D());
}

DOUBLE2D_* DOUBLE2D_new_xy(DOUBLE x, DOUBLE y)
{
  return (DOUBLE2D_*)(new DOUBLE2D(x, y));
}

DOUBLE2D_* DOUBLE2D_clone(const DOUBLE2D_* p)
{
  return (DOUBLE2D_*)(new DOUBLE2D(*((const DOUBLE2D*)p)));
}

void DOUBLE2D_delete(DOUBLE2D_* p)
{
  delete ((DOUBLE2D*)p);
}

void DOUBLE2D_Clear(DOUBLE2D_* p)
{
  ((DOUBLE2D*)p)->Clear();
}

DOUBLE DOUBLE2D_Length(const DOUBLE2D_* p)
{
  return ((const DOUBLE2D*)p)->Length();
}

DOUBLE DOUBLE2D_ManhattanNorm(const DOUBLE2D_* p)
{
  return ((const DOUBLE2D*)p)->ManhattanNorm();
}

DOUBLE DOUBLE2D_MaxNorm(const DOUBLE2D_* p)
{
  return ((const DOUBLE2D*)p)->MaxNorm();
}

DOUBLE* DOUBLE2D_operator_braces(DOUBLE2D_* p, INDEX i)
{
  return &( (*((DOUBLE2D*)p))(i) );
}

DOUBLE DOUBLE2D_operator_braces_const(const DOUBLE2D_* p, INDEX i)
{
  return (*((const DOUBLE2D*)p))(i);
}

void DOUBLE2D_Normalize(DOUBLE2D_* p)
{
  ((DOUBLE2D*)p)->Normalize();
}

void DOUBLE2D_SafeNormalize(DOUBLE2D_* p)
{
  ((DOUBLE2D*)p)->SafeNormalize();
}

void DOUBLE2D_Flip(DOUBLE2D_* p)
{
  ((DOUBLE2D*)p)->Flip();
}

DOUBLE2D_* DOUBLE2D_operator_unary_minus(const DOUBLE2D_* p)
{
  DOUBLE2D result = ((const DOUBLE2D*)p)->operator-();
  return (DOUBLE2D_*)(new DOUBLE2D(result));
}

DOUBLE2D_* DOUBLE2D_operator_plus(const DOUBLE2D_* a, const DOUBLE2D_* b)
{
  DOUBLE2D result = ((const DOUBLE2D*)a)->operator+(*((const DOUBLE2D*)b));
  return (DOUBLE2D_*)(new DOUBLE2D(result));
}

void DOUBLE2D_operator_plusequal(DOUBLE2D_* a, const DOUBLE2D_* b)
{
  ((DOUBLE2D*)a)->operator+=(*((const DOUBLE2D*)b));
}

DOUBLE2D_* DOUBLE2D_operator_minus(const DOUBLE2D_* a, const DOUBLE2D_* b)
{
  DOUBLE2D result = ((const DOUBLE2D*)a)->operator-(*((const DOUBLE2D*)b));
  return (DOUBLE2D_*)(new DOUBLE2D(result));
}

void DOUBLE2D_operator_minusequal(DOUBLE2D_* a, const DOUBLE2D_* b)
{
  ((DOUBLE2D*)a)->operator-=(*((const DOUBLE2D*)b));
}

DOUBLE2D_* DOUBLE2D_operator_mul(const DOUBLE2D_* a, DOUBLE b)
{
  DOUBLE2D result = ((const DOUBLE2D*)a)->operator*(b);
  return (DOUBLE2D_*)(new DOUBLE2D(result));
}

void DOUBLE2D_operator_mulequal(DOUBLE2D_* a, DOUBLE b)
{
  ((DOUBLE2D*)a)->operator*=(b);
}

DOUBLE2D_* DOUBLE2D_operator_div(const DOUBLE2D_* a, DOUBLE b)
{
  DOUBLE2D result = ((const DOUBLE2D*)a)->operator/(b);
  return (DOUBLE2D_*)(new DOUBLE2D(result));
}

void DOUBLE2D_operator_divequal(DOUBLE2D_* a, DOUBLE b)
{
  ((DOUBLE2D*)a)->operator/=(b);
}

DOUBLE2D_* DOUBLE2D_operator_mul_matrix(const DOUBLE2D_* a, const DOUBLEmatrix2D_* b)
{
  DOUBLE2D result = ((const DOUBLE2D*)a)->operator*(*((const DOUBLEmatrix2D*)b));
  return (DOUBLE2D_*)(new DOUBLE2D(result));
}

void DOUBLE2D_operator_mulequal_matrix(DOUBLE2D_* a, const DOUBLEmatrix2D_* b)
{
  ((DOUBLE2D*)a)->operator*=(*((const DOUBLEmatrix2D*)b));
}

DOUBLE DOUBLE2D_Dot(const DOUBLE2D_* a, const DOUBLE2D_* b)
{
  return ((const DOUBLE2D*)a)->operator%(*((const DOUBLE2D*)b));
}

DOUBLE2D_* DOUBLE2D_operator_mul_vector(const DOUBLE2D_* a, const DOUBLE2D_* b)
{
  DOUBLE2D result = ((const DOUBLE2D*)a)->operator*(*((const DOUBLE2D*)b));
  return (DOUBLE2D_*)(new DOUBLE2D(result));
}

void DOUBLE2D_operator_mulequal_vector(DOUBLE2D_* a, const DOUBLE2D_* b)
{
  ((DOUBLE2D*)a)->operator*=(*((const DOUBLE2D*)b));
}

BOOL DOUBLE2D_operator_equals(const DOUBLE2D_* a, const DOUBLE2D_* b)
{
  return (*((const DOUBLE2D*)a)) == (*((const DOUBLE2D*)b));
}

BOOL DOUBLE2D_operator_notequals(const DOUBLE2D_* a, const DOUBLE2D_* b)
{
  return (*((const DOUBLE2D*)a)) != (*((const DOUBLE2D*)b));
}

void DOUBLE2D_operator_extraction(CTStream_* s, DOUBLE2D_* p)
{
  (*((CTStream*)s)) >> (*((DOUBLE2D*)p));
}

void DOUBLE2D_operator_insertion(CTStream_* s, DOUBLE2D_* p)
{
  (*((CTStream*)s)) << (*((DOUBLE2D*)p));
}

// DOUBLE3D
DOUBLE3D_* DOUBLE3D_new()
{
  return (DOUBLE3D_*)(new DOUBLE3D());
}

DOUBLE3D_* DOUBLE3D_new_xyz(DOUBLE x, DOUBLE y, DOUBLE z)
{
  return (DOUBLE3D_*)(new DOUBLE3D(x, y, z));
}

DOUBLE3D_* DOUBLE3D_clone(const DOUBLE3D_* p)
{
  return (DOUBLE3D_*)(new DOUBLE3D(*((const DOUBLE3D*)p)));
}

void DOUBLE3D_delete(DOUBLE3D_* p)
{
  delete ((DOUBLE3D*)p);
}

void DOUBLE3D_Clear(DOUBLE3D_* p)
{
  ((DOUBLE3D*)p)->Clear();
}

DOUBLE DOUBLE3D_Length(const DOUBLE3D_* p)
{
  return ((const DOUBLE3D*)p)->Length();
}

DOUBLE DOUBLE3D_ManhattanNorm(const DOUBLE3D_* p)
{
  return ((const DOUBLE3D*)p)->ManhattanNorm();
}

DOUBLE DOUBLE3D_MaxNorm(const DOUBLE3D_* p)
{
  return ((const DOUBLE3D*)p)->MaxNorm();
}

DOUBLE* DOUBLE3D_operator_braces(DOUBLE3D_* p, INDEX i)
{
  return &( (*((DOUBLE3D*)p))(i) );
}

DOUBLE DOUBLE3D_operator_braces_const(const DOUBLE3D_* p, INDEX i)
{
  return (*((const DOUBLE3D*)p))(i);
}

void DOUBLE3D_Normalize(DOUBLE3D_* p)
{
  ((DOUBLE3D*)p)->Normalize();
}

void DOUBLE3D_SafeNormalize(DOUBLE3D_* p)
{
  ((DOUBLE3D*)p)->SafeNormalize();
}

void DOUBLE3D_Flip(DOUBLE3D_* p)
{
  ((DOUBLE3D*)p)->Flip();
}

DOUBLE3D_* DOUBLE3D_operator_unary_minus(const DOUBLE3D_* p)
{
  DOUBLE3D result = ((const DOUBLE3D*)p)->operator-();
  return (DOUBLE3D_*)(new DOUBLE3D(result));
}

DOUBLE3D_* DOUBLE3D_operator_plus(const DOUBLE3D_* a, const DOUBLE3D_* b)
{
  DOUBLE3D result = ((const DOUBLE3D*)a)->operator+(*((const DOUBLE3D*)b));
  return (DOUBLE3D_*)(new DOUBLE3D(result));
}

void DOUBLE3D_operator_plusequal(DOUBLE3D_* a, const DOUBLE3D_* b)
{
  ((DOUBLE3D*)a)->operator+=(*((const DOUBLE3D*)b));
}

DOUBLE3D_* DOUBLE3D_operator_minus(const DOUBLE3D_* a, const DOUBLE3D_* b)
{
  DOUBLE3D result = ((const DOUBLE3D*)a)->operator-(*((const DOUBLE3D*)b));
  return (DOUBLE3D_*)(new DOUBLE3D(result));
}

void DOUBLE3D_operator_minusequal(DOUBLE3D_* a, const DOUBLE3D_* b)
{
  ((DOUBLE3D*)a)->operator-=(*((const DOUBLE3D*)b));
}

DOUBLE3D_* DOUBLE3D_operator_mul(const DOUBLE3D_* a, DOUBLE b)
{
  DOUBLE3D result = ((const DOUBLE3D*)a)->operator*(b);
  return (DOUBLE3D_*)(new DOUBLE3D(result));
}

void DOUBLE3D_operator_mulequal(DOUBLE3D_* a, DOUBLE b)
{
  ((DOUBLE3D*)a)->operator*=(b);
}

DOUBLE3D_* DOUBLE3D_operator_div(const DOUBLE3D_* a, DOUBLE b)
{
  DOUBLE3D result = ((const DOUBLE3D*)a)->operator/(b);
  return (DOUBLE3D_*)(new DOUBLE3D(result));
}

void DOUBLE3D_operator_divequal(DOUBLE3D_* a, DOUBLE b)
{
  ((DOUBLE3D*)a)->operator/=(b);
}

DOUBLE3D_* DOUBLE3D_operator_mul_matrix(const DOUBLE3D_* a, const DOUBLEmatrix3D_* b)
{
  DOUBLE3D result = ((const DOUBLE3D*)a)->operator*(*((const DOUBLEmatrix3D*)b));
  return (DOUBLE3D_*)(new DOUBLE3D(result));
}

void DOUBLE3D_operator_mulequal_matrix(DOUBLE3D_* a, const DOUBLEmatrix3D_* b)
{
  ((DOUBLE3D*)a)->operator*=(*((const DOUBLEmatrix3D*)b));
}

DOUBLE DOUBLE3D_Dot(const DOUBLE3D_* a, const DOUBLE3D_* b)
{
  return ((const DOUBLE3D*)a)->operator%(*((const DOUBLE3D*)b));
}

DOUBLE3D_* DOUBLE3D_operator_mul_vector(const DOUBLE3D_* a, const DOUBLE3D_* b)
{
  DOUBLE3D result = ((const DOUBLE3D*)a)->operator*(*((const DOUBLE3D*)b));
  return (DOUBLE3D_*)(new DOUBLE3D(result));
}

void DOUBLE3D_operator_mulequal_vector(DOUBLE3D_* a, const DOUBLE3D_* b)
{
  ((DOUBLE3D*)a)->operator*=(*((const DOUBLE3D*)b));
}

BOOL DOUBLE3D_operator_equals(const DOUBLE3D_* a, const DOUBLE3D_* b)
{
  return (*((const DOUBLE3D*)a)) == (*((const DOUBLE3D*)b));
}

BOOL DOUBLE3D_operator_notequals(const DOUBLE3D_* a, const DOUBLE3D_* b)
{
  return (*((const DOUBLE3D*)a)) != (*((const DOUBLE3D*)b));
}

void DOUBLE3D_operator_extraction(CTStream_* s, DOUBLE3D_* p)
{
  (*((CTStream*)s)) >> (*((DOUBLE3D*)p));
}

void DOUBLE3D_operator_insertion(CTStream_* s, DOUBLE3D_* p)
{
  (*((CTStream*)s)) << (*((DOUBLE3D*)p));
}

// DOUBLE4D
DOUBLE4D_* DOUBLE4D_new()
{
  return (DOUBLE4D_*)(new DOUBLE4D());
}

DOUBLE4D_* DOUBLE4D_new_xyzw(DOUBLE x, DOUBLE y, DOUBLE z, DOUBLE w)
{
  return (DOUBLE4D_*)(new DOUBLE4D(x, y, z, w));
}

DOUBLE4D_* DOUBLE4D_clone(const DOUBLE4D_* p)
{
  return (DOUBLE4D_*)(new DOUBLE4D(*((const DOUBLE4D*)p)));
}

void DOUBLE4D_delete(DOUBLE4D_* p)
{
  delete ((DOUBLE4D*)p);
}

void DOUBLE4D_Clear(DOUBLE4D_* p)
{
  ((DOUBLE4D*)p)->Clear();
}

DOUBLE DOUBLE4D_Length(const DOUBLE4D_* p)
{
  return ((const DOUBLE4D*)p)->Length();
}

DOUBLE DOUBLE4D_ManhattanNorm(const DOUBLE4D_* p)
{
  return ((const DOUBLE4D*)p)->ManhattanNorm();
}

DOUBLE DOUBLE4D_MaxNorm(const DOUBLE4D_* p)
{
  return ((const DOUBLE4D*)p)->MaxNorm();
}

DOUBLE* DOUBLE4D_operator_braces(DOUBLE4D_* p, INDEX i)
{
  return &( (*((DOUBLE4D*)p))(i) );
}

DOUBLE DOUBLE4D_operator_braces_const(const DOUBLE4D_* p, INDEX i)
{
  return (*((const DOUBLE4D*)p))(i);
}

void DOUBLE4D_Normalize(DOUBLE4D_* p)
{
  ((DOUBLE4D*)p)->Normalize();
}

void DOUBLE4D_SafeNormalize(DOUBLE4D_* p)
{
  ((DOUBLE4D*)p)->SafeNormalize();
}

void DOUBLE4D_Flip(DOUBLE4D_* p)
{
  ((DOUBLE4D*)p)->Flip();
}

DOUBLE4D_* DOUBLE4D_operator_unary_minus(const DOUBLE4D_* p)
{
  DOUBLE4D result = ((const DOUBLE4D*)p)->operator-();
  return (DOUBLE4D_*)(new DOUBLE4D(result));
}

DOUBLE4D_* DOUBLE4D_operator_plus(const DOUBLE4D_* a, const DOUBLE4D_* b)
{
  DOUBLE4D result = ((const DOUBLE4D*)a)->operator+(*((const DOUBLE4D*)b));
  return (DOUBLE4D_*)(new DOUBLE4D(result));
}

void DOUBLE4D_operator_plusequal(DOUBLE4D_* a, const DOUBLE4D_* b)
{
  ((DOUBLE4D*)a)->operator+=(*((const DOUBLE4D*)b));
}

DOUBLE4D_* DOUBLE4D_operator_minus(const DOUBLE4D_* a, const DOUBLE4D_* b)
{
  DOUBLE4D result = ((const DOUBLE4D*)a)->operator-(*((const DOUBLE4D*)b));
  return (DOUBLE4D_*)(new DOUBLE4D(result));
}

void DOUBLE4D_operator_minusequal(DOUBLE4D_* a, const DOUBLE4D_* b)
{
  ((DOUBLE4D*)a)->operator-=(*((const DOUBLE4D*)b));
}

DOUBLE4D_* DOUBLE4D_operator_mul(const DOUBLE4D_* a, DOUBLE b)
{
  DOUBLE4D result = ((const DOUBLE4D*)a)->operator*(b);
  return (DOUBLE4D_*)(new DOUBLE4D(result));
}

void DOUBLE4D_operator_mulequal(DOUBLE4D_* a, DOUBLE b)
{
  ((DOUBLE4D*)a)->operator*=(b);
}

DOUBLE4D_* DOUBLE4D_operator_div(const DOUBLE4D_* a, DOUBLE b)
{
  DOUBLE4D result = ((const DOUBLE4D*)a)->operator/(b);
  return (DOUBLE4D_*)(new DOUBLE4D(result));
}

void DOUBLE4D_operator_divequal(DOUBLE4D_* a, DOUBLE b)
{
  ((DOUBLE4D*)a)->operator/=(b);
}

DOUBLE4D_* DOUBLE4D_operator_mul_matrix(const DOUBLE4D_* a, const DOUBLEmatrix4D_* b)
{
  DOUBLE4D result = ((const DOUBLE4D*)a)->operator*(*((const DOUBLEmatrix4D*)b));
  return (DOUBLE4D_*)(new DOUBLE4D(result));
}

void DOUBLE4D_operator_mulequal_matrix(DOUBLE4D_* a, const DOUBLEmatrix4D_* b)
{
  ((DOUBLE4D*)a)->operator*=(*((const DOUBLEmatrix4D*)b));
}

DOUBLE DOUBLE4D_Dot(const DOUBLE4D_* a, const DOUBLE4D_* b)
{
  return ((const DOUBLE4D*)a)->operator%(*((const DOUBLE4D*)b));
}

DOUBLE4D_* DOUBLE4D_operator_mul_vector(const DOUBLE4D_* a, const DOUBLE4D_* b)
{
  DOUBLE4D result = ((const DOUBLE4D*)a)->operator*(*((const DOUBLE4D*)b));
  return (DOUBLE4D_*)(new DOUBLE4D(result));
}

void DOUBLE4D_operator_mulequal_vector(DOUBLE4D_* a, const DOUBLE4D_* b)
{
  ((DOUBLE4D*)a)->operator*=(*((const DOUBLE4D*)b));
}

BOOL DOUBLE4D_operator_equals(const DOUBLE4D_* a, const DOUBLE4D_* b)
{
  return (*((const DOUBLE4D*)a)) == (*((const DOUBLE4D*)b));
}

BOOL DOUBLE4D_operator_notequals(const DOUBLE4D_* a, const DOUBLE4D_* b)
{
  return (*((const DOUBLE4D*)a)) != (*((const DOUBLE4D*)b));
}

void DOUBLE4D_operator_extraction(CTStream_* s, DOUBLE4D_* p)
{
  (*((CTStream*)s)) >> (*((DOUBLE4D*)p));
}

void DOUBLE4D_operator_insertion(CTStream_* s, DOUBLE4D_* p)
{
  (*((CTStream*)s)) << (*((DOUBLE4D*)p));
}

// INDEX2D
INDEX2D_* INDEX2D_new()
{
  return (INDEX2D_*)(new INDEX2D());
}

INDEX2D_* INDEX2D_new_xy(INDEX x, INDEX y)
{
  return (INDEX2D_*)(new INDEX2D(x, y));
}

INDEX2D_* INDEX2D_clone(const INDEX2D_* p)
{
  return (INDEX2D_*)(new INDEX2D(*((const INDEX2D*)p)));
}

void INDEX2D_delete(INDEX2D_* p)
{
  delete ((INDEX2D*)p);
}

void INDEX2D_Clear(INDEX2D_* p)
{
  ((INDEX2D*)p)->Clear();
}

INDEX INDEX2D_Length(const INDEX2D_* p)
{
  return ((const INDEX2D*)p)->Length();
}

INDEX INDEX2D_ManhattanNorm(const INDEX2D_* p)
{
  return ((const INDEX2D*)p)->ManhattanNorm();
}

INDEX INDEX2D_MaxNorm(const INDEX2D_* p)
{
  return ((const INDEX2D*)p)->MaxNorm();
}

INDEX* INDEX2D_operator_braces(INDEX2D_* p, INDEX i)
{
  return &( (*((INDEX2D*)p))(i) );
}

INDEX INDEX2D_operator_braces_const(const INDEX2D_* p, INDEX i)
{
  return (*((const INDEX2D*)p))(i);
}

void INDEX2D_Normalize(INDEX2D_* p)
{
  ((INDEX2D*)p)->Normalize();
}

void INDEX2D_SafeNormalize(INDEX2D_* p)
{
  ((INDEX2D*)p)->SafeNormalize();
}

void INDEX2D_Flip(INDEX2D_* p)
{
  ((INDEX2D*)p)->Flip();
}

INDEX2D_* INDEX2D_operator_unary_minus(const INDEX2D_* p)
{
  INDEX2D result = ((const INDEX2D*)p)->operator-();
  return (INDEX2D_*)(new INDEX2D(result));
}

INDEX2D_* INDEX2D_operator_plus(const INDEX2D_* a, const INDEX2D_* b)
{
  INDEX2D result = ((const INDEX2D*)a)->operator+(*((const INDEX2D*)b));
  return (INDEX2D_*)(new INDEX2D(result));
}

void INDEX2D_operator_plusequal(INDEX2D_* a, const INDEX2D_* b)
{
  ((INDEX2D*)a)->operator+=(*((const INDEX2D*)b));
}

INDEX2D_* INDEX2D_operator_minus(const INDEX2D_* a, const INDEX2D_* b)
{
  INDEX2D result = ((const INDEX2D*)a)->operator-(*((const INDEX2D*)b));
  return (INDEX2D_*)(new INDEX2D(result));
}

void INDEX2D_operator_minusequal(INDEX2D_* a, const INDEX2D_* b)
{
  ((INDEX2D*)a)->operator-=(*((const INDEX2D*)b));
}

INDEX2D_* INDEX2D_operator_mul(const INDEX2D_* a, INDEX b)
{
  INDEX2D result = ((const INDEX2D*)a)->operator*(b);
  return (INDEX2D_*)(new INDEX2D(result));
}

void INDEX2D_operator_mulequal(INDEX2D_* a, INDEX b)
{
  ((INDEX2D*)a)->operator*=(b);
}

INDEX2D_* INDEX2D_operator_div(const INDEX2D_* a, INDEX b)
{
  INDEX2D result = ((const INDEX2D*)a)->operator/(b);
  return (INDEX2D_*)(new INDEX2D(result));
}

void INDEX2D_operator_divequal(INDEX2D_* a, INDEX b)
{
  ((INDEX2D*)a)->operator/=(b);
}

INDEX2D_* INDEX2D_operator_mul_matrix(const INDEX2D_* a, const INDEXmatrix2D_* b)
{
  INDEX2D result = ((const INDEX2D*)a)->operator*(*((const INDEXmatrix2D*)b));
  return (INDEX2D_*)(new INDEX2D(result));
}

void INDEX2D_operator_mulequal_matrix(INDEX2D_* a, const INDEXmatrix2D_* b)
{
  ((INDEX2D*)a)->operator*=(*((const INDEXmatrix2D*)b));
}

INDEX INDEX2D_Dot(const INDEX2D_* a, const INDEX2D_* b)
{
  return ((const INDEX2D*)a)->operator%(*((const INDEX2D*)b));
}

INDEX2D_* INDEX2D_operator_mul_vector(const INDEX2D_* a, const INDEX2D_* b)
{
  INDEX2D result = ((const INDEX2D*)a)->operator*(*((const INDEX2D*)b));
  return (INDEX2D_*)(new INDEX2D(result));
}

void INDEX2D_operator_mulequal_vector(INDEX2D_* a, const INDEX2D_* b)
{
  ((INDEX2D*)a)->operator*=(*((const INDEX2D*)b));
}

BOOL INDEX2D_operator_equals(const INDEX2D_* a, const INDEX2D_* b)
{
  return (*((const INDEX2D*)a)) == (*((const INDEX2D*)b));
}

BOOL INDEX2D_operator_notequals(const INDEX2D_* a, const INDEX2D_* b)
{
  return (*((const INDEX2D*)a)) != (*((const INDEX2D*)b));
}

void INDEX2D_operator_extraction(CTStream_* s, INDEX2D_* p)
{
  (*((CTStream*)s)) >> (*((INDEX2D*)p));
}

void INDEX2D_operator_insertion(CTStream_* s, INDEX2D_* p)
{
  (*((CTStream*)s)) << (*((INDEX2D*)p));
}

// INDEX3D
INDEX3D_* INDEX3D_new()
{
  return (INDEX3D_*)(new INDEX3D());
}

INDEX3D_* INDEX3D_new_xyz(INDEX x, INDEX y, INDEX z)
{
  return (INDEX3D_*)(new INDEX3D(x, y, z));
}

INDEX3D_* INDEX3D_clone(const INDEX3D_* p)
{
  return (INDEX3D_*)(new INDEX3D(*((const INDEX3D*)p)));
}

void INDEX3D_delete(INDEX3D_* p)
{
  delete ((INDEX3D*)p);
}

void INDEX3D_Clear(INDEX3D_* p)
{
  ((INDEX3D*)p)->Clear();
}

INDEX INDEX3D_Length(const INDEX3D_* p)
{
  return ((const INDEX3D*)p)->Length();
}

INDEX INDEX3D_ManhattanNorm(const INDEX3D_* p)
{
  return ((const INDEX3D*)p)->ManhattanNorm();
}

INDEX INDEX3D_MaxNorm(const INDEX3D_* p)
{
  return ((const INDEX3D*)p)->MaxNorm();
}

INDEX* INDEX3D_operator_braces(INDEX3D_* p, INDEX i)
{
  return &( (*((INDEX3D*)p))(i) );
}

INDEX INDEX3D_operator_braces_const(const INDEX3D_* p, INDEX i)
{
  return (*((const INDEX3D*)p))(i);
}

void INDEX3D_Normalize(INDEX3D_* p)
{
  ((INDEX3D*)p)->Normalize();
}

void INDEX3D_SafeNormalize(INDEX3D_* p)
{
  ((INDEX3D*)p)->SafeNormalize();
}

void INDEX3D_Flip(INDEX3D_* p)
{
  ((INDEX3D*)p)->Flip();
}

INDEX3D_* INDEX3D_operator_unary_minus(const INDEX3D_* p)
{
  INDEX3D result = ((const INDEX3D*)p)->operator-();
  return (INDEX3D_*)(new INDEX3D(result));
}

INDEX3D_* INDEX3D_operator_plus(const INDEX3D_* a, const INDEX3D_* b)
{
  INDEX3D result = ((const INDEX3D*)a)->operator+(*((const INDEX3D*)b));
  return (INDEX3D_*)(new INDEX3D(result));
}

void INDEX3D_operator_plusequal(INDEX3D_* a, const INDEX3D_* b)
{
  ((INDEX3D*)a)->operator+=(*((const INDEX3D*)b));
}

INDEX3D_* INDEX3D_operator_minus(const INDEX3D_* a, const INDEX3D_* b)
{
  INDEX3D result = ((const INDEX3D*)a)->operator-(*((const INDEX3D*)b));
  return (INDEX3D_*)(new INDEX3D(result));
}

void INDEX3D_operator_minusequal(INDEX3D_* a, const INDEX3D_* b)
{
  ((INDEX3D*)a)->operator-=(*((const INDEX3D*)b));
}

INDEX3D_* INDEX3D_operator_mul(const INDEX3D_* a, INDEX b)
{
  INDEX3D result = ((const INDEX3D*)a)->operator*(b);
  return (INDEX3D_*)(new INDEX3D(result));
}

void INDEX3D_operator_mulequal(INDEX3D_* a, INDEX b)
{
  ((INDEX3D*)a)->operator*=(b);
}

INDEX3D_* INDEX3D_operator_div(const INDEX3D_* a, INDEX b)
{
  INDEX3D result = ((const INDEX3D*)a)->operator/(b);
  return (INDEX3D_*)(new INDEX3D(result));
}

void INDEX3D_operator_divequal(INDEX3D_* a, INDEX b)
{
  ((INDEX3D*)a)->operator/=(b);
}

INDEX3D_* INDEX3D_operator_mul_matrix(const INDEX3D_* a, const INDEXmatrix3D_* b)
{
  INDEX3D result = ((const INDEX3D*)a)->operator*(*((const INDEXmatrix3D*)b));
  return (INDEX3D_*)(new INDEX3D(result));
}

void INDEX3D_operator_mulequal_matrix(INDEX3D_* a, const INDEXmatrix3D_* b)
{
  ((INDEX3D*)a)->operator*=(*((const INDEXmatrix3D*)b));
}

INDEX INDEX3D_Dot(const INDEX3D_* a, const INDEX3D_* b)
{
  return ((const INDEX3D*)a)->operator%(*((const INDEX3D*)b));
}

INDEX3D_* INDEX3D_operator_mul_vector(const INDEX3D_* a, const INDEX3D_* b)
{
  INDEX3D result = ((const INDEX3D*)a)->operator*(*((const INDEX3D*)b));
  return (INDEX3D_*)(new INDEX3D(result));
}

void INDEX3D_operator_mulequal_vector(INDEX3D_* a, const INDEX3D_* b)
{
  ((INDEX3D*)a)->operator*=(*((const INDEX3D*)b));
}

BOOL INDEX3D_operator_equals(const INDEX3D_* a, const INDEX3D_* b)
{
  return (*((const INDEX3D*)a)) == (*((const INDEX3D*)b));
}

BOOL INDEX3D_operator_notequals(const INDEX3D_* a, const INDEX3D_* b)
{
  return (*((const INDEX3D*)a)) != (*((const INDEX3D*)b));
}

void INDEX3D_operator_extraction(CTStream_* s, INDEX3D_* p)
{
  (*((CTStream*)s)) >> (*((INDEX3D*)p));
}

void INDEX3D_operator_insertion(CTStream_* s, INDEX3D_* p)
{
  (*((CTStream*)s)) << (*((INDEX3D*)p));
}

// INDEX4D
INDEX4D_* INDEX4D_new()
{
  return (INDEX4D_*)(new INDEX4D());
}

INDEX4D_* INDEX4D_new_xyzw(INDEX x, INDEX y, INDEX z, INDEX w)
{
  return (INDEX4D_*)(new INDEX4D(x, y, z, w));
}

INDEX4D_* INDEX4D_clone(const INDEX4D_* p)
{
  return (INDEX4D_*)(new INDEX4D(*((const INDEX4D*)p)));
}

void INDEX4D_delete(INDEX4D_* p)
{
  delete ((INDEX4D*)p);
}

void INDEX4D_Clear(INDEX4D_* p)
{
  ((INDEX4D*)p)->Clear();
}

INDEX INDEX4D_Length(const INDEX4D_* p)
{
  return ((const INDEX4D*)p)->Length();
}

INDEX INDEX4D_ManhattanNorm(const INDEX4D_* p)
{
  return ((const INDEX4D*)p)->ManhattanNorm();
}

INDEX INDEX4D_MaxNorm(const INDEX4D_* p)
{
  return ((const INDEX4D*)p)->MaxNorm();
}

INDEX* INDEX4D_operator_braces(INDEX4D_* p, INDEX i)
{
  return &( (*((INDEX4D*)p))(i) );
}

INDEX INDEX4D_operator_braces_const(const INDEX4D_* p, INDEX i)
{
  return (*((const INDEX4D*)p))(i);
}

void INDEX4D_Normalize(INDEX4D_* p)
{
  ((INDEX4D*)p)->Normalize();
}

void INDEX4D_SafeNormalize(INDEX4D_* p)
{
  ((INDEX4D*)p)->SafeNormalize();
}

void INDEX4D_Flip(INDEX4D_* p)
{
  ((INDEX4D*)p)->Flip();
}

INDEX4D_* INDEX4D_operator_unary_minus(const INDEX4D_* p)
{
  INDEX4D result = ((const INDEX4D*)p)->operator-();
  return (INDEX4D_*)(new INDEX4D(result));
}

INDEX4D_* INDEX4D_operator_plus(const INDEX4D_* a, const INDEX4D_* b)
{
  INDEX4D result = ((const INDEX4D*)a)->operator+(*((const INDEX4D*)b));
  return (INDEX4D_*)(new INDEX4D(result));
}

void INDEX4D_operator_plusequal(INDEX4D_* a, const INDEX4D_* b)
{
  ((INDEX4D*)a)->operator+=(*((const INDEX4D*)b));
}

INDEX4D_* INDEX4D_operator_minus(const INDEX4D_* a, const INDEX4D_* b)
{
  INDEX4D result = ((const INDEX4D*)a)->operator-(*((const INDEX4D*)b));
  return (INDEX4D_*)(new INDEX4D(result));
}

void INDEX4D_operator_minusequal(INDEX4D_* a, const INDEX4D_* b)
{
  ((INDEX4D*)a)->operator-=(*((const INDEX4D*)b));
}

INDEX4D_* INDEX4D_operator_mul(const INDEX4D_* a, INDEX b)
{
  INDEX4D result = ((const INDEX4D*)a)->operator*(b);
  return (INDEX4D_*)(new INDEX4D(result));
}

void INDEX4D_operator_mulequal(INDEX4D_* a, INDEX b)
{
  ((INDEX4D*)a)->operator*=(b);
}

INDEX4D_* INDEX4D_operator_div(const INDEX4D_* a, INDEX b)
{
  INDEX4D result = ((const INDEX4D*)a)->operator/(b);
  return (INDEX4D_*)(new INDEX4D(result));
}

void INDEX4D_operator_divequal(INDEX4D_* a, INDEX b)
{
  ((INDEX4D*)a)->operator/=(b);
}

INDEX4D_* INDEX4D_operator_mul_matrix(const INDEX4D_* a, const INDEXmatrix4D_* b)
{
  INDEX4D result = ((const INDEX4D*)a)->operator*(*((const INDEXmatrix4D*)b));
  return (INDEX4D_*)(new INDEX4D(result));
}

void INDEX4D_operator_mulequal_matrix(INDEX4D_* a, const INDEXmatrix4D_* b)
{
  ((INDEX4D*)a)->operator*=(*((const INDEXmatrix4D*)b));
}

INDEX INDEX4D_Dot(const INDEX4D_* a, const INDEX4D_* b)
{
  return ((const INDEX4D*)a)->operator%(*((const INDEX4D*)b));
}

INDEX4D_* INDEX4D_operator_mul_vector(const INDEX4D_* a, const INDEX4D_* b)
{
  INDEX4D result = ((const INDEX4D*)a)->operator*(*((const INDEX4D*)b));
  return (INDEX4D_*)(new INDEX4D(result));
}

void INDEX4D_operator_mulequal_vector(INDEX4D_* a, const INDEX4D_* b)
{
  ((INDEX4D*)a)->operator*=(*((const INDEX4D*)b));
}

BOOL INDEX4D_operator_equals(const INDEX4D_* a, const INDEX4D_* b)
{
  return (*((const INDEX4D*)a)) == (*((const INDEX4D*)b));
}

BOOL INDEX4D_operator_notequals(const INDEX4D_* a, const INDEX4D_* b)
{
  return (*((const INDEX4D*)a)) != (*((const INDEX4D*)b));
}

void INDEX4D_operator_extraction(CTStream_* s, INDEX4D_* p)
{
  (*((CTStream*)s)) >> (*((INDEX4D*)p));
}

void INDEX4D_operator_insertion(CTStream_* s, INDEX4D_* p)
{
  (*((CTStream*)s)) << (*((INDEX4D*)p));
}
