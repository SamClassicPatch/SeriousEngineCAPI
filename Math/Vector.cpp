#include "Vector.h"
#include <Engine/Math/Vector.h>

typedef Vector<FLOAT, 4> FLOAT4D;
typedef Vector<DOUBLE, 4> DOUBLE4D;
typedef Vector<INDEX, 2> INDEX2D;
typedef Vector<INDEX, 3> INDEX3D;
typedef Vector<INDEX, 4> INDEX4D;
typedef Vector<SWORD, 3> SWORD3D;
typedef Vector<SBYTE, 3> SBYTE3D;
typedef Matrix<FLOAT, 4, 4> FLOATmatrix4D;
typedef Matrix<DOUBLE, 2, 2> DOUBLEmatrix2D;
typedef Matrix<DOUBLE, 4, 4> DOUBLEmatrix4D;
typedef Matrix<INDEX, 2, 2> INDEXmatrix2D;
typedef Matrix<INDEX, 3, 3> INDEXmatrix3D;
typedef Matrix<INDEX, 4, 4> INDEXmatrix4D;

template<class Type, int iDimensions>
__forceinline Vector<Type, iDimensions>* ComponentProduct(const Vector<Type, iDimensions>& v0, const Vector<Type, iDimensions>& v1)
{
  Vector<Type, iDimensions>* result = new Vector<Type, iDimensions>();
  for (int i = 1; i <= iDimensions; ++i)
    (*result)(i) = v0(i) * v1(i);
  return result;
}

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

FLOAT* FLOAT2D_Element(FLOAT2D_* p, INDEX i)
{
  return &( (*((FLOAT2D*)p))(i) );
}

FLOAT FLOAT2D_Element_const(const FLOAT2D_* p, INDEX i)
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

FLOAT2D_* FLOAT2D_Negative(const FLOAT2D_* p)
{
  FLOAT2D result = ((const FLOAT2D*)p)->operator-();
  return (FLOAT2D_*)(new FLOAT2D(result));
}

FLOAT2D_* FLOAT2D_Plus(const FLOAT2D_* a, const FLOAT2D_* b)
{
  FLOAT2D result = ((const FLOAT2D*)a)->operator+(*((const FLOAT2D*)b));
  return (FLOAT2D_*)(new FLOAT2D(result));
}

void FLOAT2D_PlusInplace(FLOAT2D_* a, const FLOAT2D_* b)
{
  ((FLOAT2D*)a)->operator+=(*((const FLOAT2D*)b));
}

FLOAT2D_* FLOAT2D_Minus(const FLOAT2D_* a, const FLOAT2D_* b)
{
  FLOAT2D result = ((const FLOAT2D*)a)->operator-(*((const FLOAT2D*)b));
  return (FLOAT2D_*)(new FLOAT2D(result));
}

void FLOAT2D_MinusInplace(FLOAT2D_* a, const FLOAT2D_* b)
{
  ((FLOAT2D*)a)->operator-=(*((const FLOAT2D*)b));
}

FLOAT2D_* FLOAT2D_Multiply(const FLOAT2D_* a, FLOAT b)
{
  FLOAT2D result = ((const FLOAT2D*)a)->operator*(b);
  return (FLOAT2D_*)(new FLOAT2D(result));
}

void FLOAT2D_MultiplyInplace(FLOAT2D_* a, FLOAT b)
{
  ((FLOAT2D*)a)->operator*=(b);
}

FLOAT2D_* FLOAT2D_Divide(const FLOAT2D_* a, FLOAT b)
{
  FLOAT2D result = ((const FLOAT2D*)a)->operator/(b);
  return (FLOAT2D_*)(new FLOAT2D(result));
}

void FLOAT2D_DivideInplace(FLOAT2D_* a, FLOAT b)
{
  ((FLOAT2D*)a)->operator/=(b);
}

FLOAT2D_* FLOAT2D_Multiply_matrix(const FLOAT2D_* a, const FLOATmatrix2D_* b)
{
  FLOAT2D result = ((const FLOAT2D*)a)->operator*(*((const FLOATmatrix2D*)b));
  return (FLOAT2D_*)(new FLOAT2D(result));
}

void FLOAT2D_MultiplyInplace_matrix(FLOAT2D_* a, const FLOATmatrix2D_* b)
{
  ((FLOAT2D*)a)->operator*=(*((const FLOATmatrix2D*)b));
}

FLOAT FLOAT2D_Dot(const FLOAT2D_* a, const FLOAT2D_* b)
{
  return ((const FLOAT2D*)a)->operator%(*((const FLOAT2D*)b));
}

BOOL FLOAT2D_equal(const FLOAT2D_* a, const FLOAT2D_* b)
{
  return (*((const FLOAT2D*)a)) == (*((const FLOAT2D*)b));
}

BOOL FLOAT2D_notequal(const FLOAT2D_* a, const FLOAT2D_* b)
{
  return (*((const FLOAT2D*)a)) != (*((const FLOAT2D*)b));
}

static void sehFLOAT2D_extract(CTStream_* s, FLOAT2D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((FLOAT2D*)p));
  SECAPI_CATCH
}

void FLOAT2D_extract(CTStream_* s, FLOAT2D_* p)
{
  STREAM_TRY
  sehFLOAT2D_extract(s, p);
  STREAM_CATCH
}

static void sehFLOAT2D_insert(CTStream_* s, FLOAT2D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((FLOAT2D*)p));
  SECAPI_CATCH
}

void FLOAT2D_insert(CTStream_* s, FLOAT2D_* p)
{
  STREAM_TRY
  sehFLOAT2D_insert(s, p);
  STREAM_CATCH
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

FLOAT* FLOAT3D_Element(FLOAT3D_* p, INDEX i)
{
  return &( (*((FLOAT3D*)p))(i) );
}

FLOAT FLOAT3D_Element_const(const FLOAT3D_* p, INDEX i)
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

FLOAT3D_* FLOAT3D_Negative(const FLOAT3D_* p)
{
  FLOAT3D result = ((const FLOAT3D*)p)->operator-();
  return (FLOAT3D_*)(new FLOAT3D(result));
}

FLOAT3D_* FLOAT3D_Plus(const FLOAT3D_* a, const FLOAT3D_* b)
{
  FLOAT3D result = ((const FLOAT3D*)a)->operator+(*((const FLOAT3D*)b));
  return (FLOAT3D_*)(new FLOAT3D(result));
}

void FLOAT3D_PlusInplace(FLOAT3D_* a, const FLOAT3D_* b)
{
  ((FLOAT3D*)a)->operator+=(*((const FLOAT3D*)b));
}

FLOAT3D_* FLOAT3D_Minus(const FLOAT3D_* a, const FLOAT3D_* b)
{
  FLOAT3D result = ((const FLOAT3D*)a)->operator-(*((const FLOAT3D*)b));
  return (FLOAT3D_*)(new FLOAT3D(result));
}

void FLOAT3D_MinusInplace(FLOAT3D_* a, const FLOAT3D_* b)
{
  ((FLOAT3D*)a)->operator-=(*((const FLOAT3D*)b));
}

FLOAT3D_* FLOAT3D_Multiply(const FLOAT3D_* a, FLOAT b)
{
  FLOAT3D result = ((const FLOAT3D*)a)->operator*(b);
  return (FLOAT3D_*)(new FLOAT3D(result));
}

void FLOAT3D_MultiplyInplace(FLOAT3D_* a, FLOAT b)
{
  ((FLOAT3D*)a)->operator*=(b);
}

FLOAT3D_* FLOAT3D_Divide(const FLOAT3D_* a, FLOAT b)
{
  FLOAT3D result = ((const FLOAT3D*)a)->operator/(b);
  return (FLOAT3D_*)(new FLOAT3D(result));
}

void FLOAT3D_DivideInplace(FLOAT3D_* a, FLOAT b)
{
  ((FLOAT3D*)a)->operator/=(b);
}

FLOAT3D_* FLOAT3D_Multiply_matrix(const FLOAT3D_* a, const FLOATmatrix3D_* b)
{
  FLOAT3D result = ((const FLOAT3D*)a)->operator*(*((const FLOATmatrix3D*)b));
  return (FLOAT3D_*)(new FLOAT3D(result));
}

void FLOAT3D_MultiplyInplace_matrix(FLOAT3D_* a, const FLOATmatrix3D_* b)
{
  ((FLOAT3D*)a)->operator*=(*((const FLOATmatrix3D*)b));
}

FLOAT FLOAT3D_Dot(const FLOAT3D_* a, const FLOAT3D_* b)
{
  return ((const FLOAT3D*)a)->operator%(*((const FLOAT3D*)b));
}

FLOAT3D_* FLOAT3D_Multiply_vector(const FLOAT3D_* a, const FLOAT3D_* b)
{
  FLOAT3D result = ((const FLOAT3D*)a)->operator*(*((const FLOAT3D*)b));
  return (FLOAT3D_*)(new FLOAT3D(result));
}

void FLOAT3D_MultiplyInplace_vector(FLOAT3D_* a, const FLOAT3D_* b)
{
  ((FLOAT3D*)a)->operator*=(*((const FLOAT3D*)b));
}

BOOL FLOAT3D_equal(const FLOAT3D_* a, const FLOAT3D_* b)
{
  return (*((const FLOAT3D*)a)) == (*((const FLOAT3D*)b));
}

BOOL FLOAT3D_notequal(const FLOAT3D_* a, const FLOAT3D_* b)
{
  return (*((const FLOAT3D*)a)) != (*((const FLOAT3D*)b));
}

static void sehFLOAT3D_extract(CTStream_* s, FLOAT3D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((FLOAT3D*)p));
  SECAPI_CATCH
}

void FLOAT3D_extract(CTStream_* s, FLOAT3D_* p)
{
  STREAM_TRY
  sehFLOAT3D_extract(s, p);
  STREAM_CATCH
}

static void sehFLOAT3D_insert(CTStream_* s, FLOAT3D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((FLOAT3D*)p));
  SECAPI_CATCH
}

void FLOAT3D_insert(CTStream_* s, FLOAT3D_* p)
{
  STREAM_TRY
  sehFLOAT3D_insert(s, p);
  STREAM_CATCH
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

FLOAT* FLOAT4D_Element(FLOAT4D_* p, INDEX i)
{
  return &( (*((FLOAT4D*)p))(i) );
}

FLOAT FLOAT4D_Element_const(const FLOAT4D_* p, INDEX i)
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

FLOAT4D_* FLOAT4D_Negative(const FLOAT4D_* p)
{
  FLOAT4D result = ((const FLOAT4D*)p)->operator-();
  return (FLOAT4D_*)(new FLOAT4D(result));
}

FLOAT4D_* FLOAT4D_Plus(const FLOAT4D_* a, const FLOAT4D_* b)
{
  FLOAT4D result = ((const FLOAT4D*)a)->operator+(*((const FLOAT4D*)b));
  return (FLOAT4D_*)(new FLOAT4D(result));
}

void FLOAT4D_PlusInplace(FLOAT4D_* a, const FLOAT4D_* b)
{
  ((FLOAT4D*)a)->operator+=(*((const FLOAT4D*)b));
}

FLOAT4D_* FLOAT4D_Minus(const FLOAT4D_* a, const FLOAT4D_* b)
{
  FLOAT4D result = ((const FLOAT4D*)a)->operator-(*((const FLOAT4D*)b));
  return (FLOAT4D_*)(new FLOAT4D(result));
}

void FLOAT4D_MinusInplace(FLOAT4D_* a, const FLOAT4D_* b)
{
  ((FLOAT4D*)a)->operator-=(*((const FLOAT4D*)b));
}

FLOAT4D_* FLOAT4D_Multiply(const FLOAT4D_* a, FLOAT b)
{
  FLOAT4D result = ((const FLOAT4D*)a)->operator*(b);
  return (FLOAT4D_*)(new FLOAT4D(result));
}

void FLOAT4D_MultiplyInplace(FLOAT4D_* a, FLOAT b)
{
  ((FLOAT4D*)a)->operator*=(b);
}

FLOAT4D_* FLOAT4D_Divide(const FLOAT4D_* a, FLOAT b)
{
  FLOAT4D result = ((const FLOAT4D*)a)->operator/(b);
  return (FLOAT4D_*)(new FLOAT4D(result));
}

void FLOAT4D_DivideInplace(FLOAT4D_* a, FLOAT b)
{
  ((FLOAT4D*)a)->operator/=(b);
}

FLOAT4D_* FLOAT4D_Multiply_matrix(const FLOAT4D_* a, const FLOATmatrix4D_* b)
{
  FLOAT4D result = ((const FLOAT4D*)a)->operator*(*((const FLOATmatrix4D*)b));
  return (FLOAT4D_*)(new FLOAT4D(result));
}

void FLOAT4D_MultiplyInplace_matrix(FLOAT4D_* a, const FLOATmatrix4D_* b)
{
  ((FLOAT4D*)a)->operator*=(*((const FLOATmatrix4D*)b));
}

FLOAT FLOAT4D_Dot(const FLOAT4D_* a, const FLOAT4D_* b)
{
  return ((const FLOAT4D*)a)->operator%(*((const FLOAT4D*)b));
}

BOOL FLOAT4D_equal(const FLOAT4D_* a, const FLOAT4D_* b)
{
  return (*((const FLOAT4D*)a)) == (*((const FLOAT4D*)b));
}

BOOL FLOAT4D_notequal(const FLOAT4D_* a, const FLOAT4D_* b)
{
  return (*((const FLOAT4D*)a)) != (*((const FLOAT4D*)b));
}

static void sehFLOAT4D_extract(CTStream_* s, FLOAT4D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((FLOAT4D*)p));
  SECAPI_CATCH
}

void FLOAT4D_extract(CTStream_* s, FLOAT4D_* p)
{
  STREAM_TRY
  sehFLOAT4D_extract(s, p);
  STREAM_CATCH
}

static void sehFLOAT4D_insert(CTStream_* s, FLOAT4D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((FLOAT4D*)p));
  SECAPI_CATCH
}

void FLOAT4D_insert(CTStream_* s, FLOAT4D_* p)
{
  STREAM_TRY
  sehFLOAT4D_insert(s, p);
  STREAM_CATCH
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

DOUBLE* DOUBLE2D_Element(DOUBLE2D_* p, INDEX i)
{
  return &( (*((DOUBLE2D*)p))(i) );
}

DOUBLE DOUBLE2D_Element_const(const DOUBLE2D_* p, INDEX i)
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

DOUBLE2D_* DOUBLE2D_Negative(const DOUBLE2D_* p)
{
  DOUBLE2D result = ((const DOUBLE2D*)p)->operator-();
  return (DOUBLE2D_*)(new DOUBLE2D(result));
}

DOUBLE2D_* DOUBLE2D_Plus(const DOUBLE2D_* a, const DOUBLE2D_* b)
{
  DOUBLE2D result = ((const DOUBLE2D*)a)->operator+(*((const DOUBLE2D*)b));
  return (DOUBLE2D_*)(new DOUBLE2D(result));
}

void DOUBLE2D_PlusInplace(DOUBLE2D_* a, const DOUBLE2D_* b)
{
  ((DOUBLE2D*)a)->operator+=(*((const DOUBLE2D*)b));
}

DOUBLE2D_* DOUBLE2D_Minus(const DOUBLE2D_* a, const DOUBLE2D_* b)
{
  DOUBLE2D result = ((const DOUBLE2D*)a)->operator-(*((const DOUBLE2D*)b));
  return (DOUBLE2D_*)(new DOUBLE2D(result));
}

void DOUBLE2D_MinusInplace(DOUBLE2D_* a, const DOUBLE2D_* b)
{
  ((DOUBLE2D*)a)->operator-=(*((const DOUBLE2D*)b));
}

DOUBLE2D_* DOUBLE2D_Multiply(const DOUBLE2D_* a, DOUBLE b)
{
  DOUBLE2D result = ((const DOUBLE2D*)a)->operator*(b);
  return (DOUBLE2D_*)(new DOUBLE2D(result));
}

void DOUBLE2D_MultiplyInplace(DOUBLE2D_* a, DOUBLE b)
{
  ((DOUBLE2D*)a)->operator*=(b);
}

DOUBLE2D_* DOUBLE2D_Divide(const DOUBLE2D_* a, DOUBLE b)
{
  DOUBLE2D result = ((const DOUBLE2D*)a)->operator/(b);
  return (DOUBLE2D_*)(new DOUBLE2D(result));
}

void DOUBLE2D_DivideInplace(DOUBLE2D_* a, DOUBLE b)
{
  ((DOUBLE2D*)a)->operator/=(b);
}

DOUBLE2D_* DOUBLE2D_Multiply_matrix(const DOUBLE2D_* a, const DOUBLEmatrix2D_* b)
{
  DOUBLE2D result = ((const DOUBLE2D*)a)->operator*(*((const DOUBLEmatrix2D*)b));
  return (DOUBLE2D_*)(new DOUBLE2D(result));
}

void DOUBLE2D_MultiplyInplace_matrix(DOUBLE2D_* a, const DOUBLEmatrix2D_* b)
{
  ((DOUBLE2D*)a)->operator*=(*((const DOUBLEmatrix2D*)b));
}

DOUBLE DOUBLE2D_Dot(const DOUBLE2D_* a, const DOUBLE2D_* b)
{
  return ((const DOUBLE2D*)a)->operator%(*((const DOUBLE2D*)b));
}

BOOL DOUBLE2D_equal(const DOUBLE2D_* a, const DOUBLE2D_* b)
{
  return (*((const DOUBLE2D*)a)) == (*((const DOUBLE2D*)b));
}

BOOL DOUBLE2D_notequal(const DOUBLE2D_* a, const DOUBLE2D_* b)
{
  return (*((const DOUBLE2D*)a)) != (*((const DOUBLE2D*)b));
}

static void sehDOUBLE2D_extract(CTStream_* s, DOUBLE2D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((DOUBLE2D*)p));
  SECAPI_CATCH
}

void DOUBLE2D_extract(CTStream_* s, DOUBLE2D_* p)
{
  STREAM_TRY
  sehDOUBLE2D_extract(s, p);
  STREAM_CATCH
}

static void sehDOUBLE2D_insert(CTStream_* s, DOUBLE2D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((DOUBLE2D*)p));
  SECAPI_CATCH
}

void DOUBLE2D_insert(CTStream_* s, DOUBLE2D_* p)
{
  STREAM_TRY
  sehDOUBLE2D_insert(s, p);
  STREAM_CATCH
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

DOUBLE* DOUBLE3D_Element(DOUBLE3D_* p, INDEX i)
{
  return &( (*((DOUBLE3D*)p))(i) );
}

DOUBLE DOUBLE3D_Element_const(const DOUBLE3D_* p, INDEX i)
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

DOUBLE3D_* DOUBLE3D_Negative(const DOUBLE3D_* p)
{
  DOUBLE3D result = ((const DOUBLE3D*)p)->operator-();
  return (DOUBLE3D_*)(new DOUBLE3D(result));
}

DOUBLE3D_* DOUBLE3D_Plus(const DOUBLE3D_* a, const DOUBLE3D_* b)
{
  DOUBLE3D result = ((const DOUBLE3D*)a)->operator+(*((const DOUBLE3D*)b));
  return (DOUBLE3D_*)(new DOUBLE3D(result));
}

void DOUBLE3D_PlusInplace(DOUBLE3D_* a, const DOUBLE3D_* b)
{
  ((DOUBLE3D*)a)->operator+=(*((const DOUBLE3D*)b));
}

DOUBLE3D_* DOUBLE3D_Minus(const DOUBLE3D_* a, const DOUBLE3D_* b)
{
  DOUBLE3D result = ((const DOUBLE3D*)a)->operator-(*((const DOUBLE3D*)b));
  return (DOUBLE3D_*)(new DOUBLE3D(result));
}

void DOUBLE3D_MinusInplace(DOUBLE3D_* a, const DOUBLE3D_* b)
{
  ((DOUBLE3D*)a)->operator-=(*((const DOUBLE3D*)b));
}

DOUBLE3D_* DOUBLE3D_Multiply(const DOUBLE3D_* a, DOUBLE b)
{
  DOUBLE3D result = ((const DOUBLE3D*)a)->operator*(b);
  return (DOUBLE3D_*)(new DOUBLE3D(result));
}

void DOUBLE3D_MultiplyInplace(DOUBLE3D_* a, DOUBLE b)
{
  ((DOUBLE3D*)a)->operator*=(b);
}

DOUBLE3D_* DOUBLE3D_Divide(const DOUBLE3D_* a, DOUBLE b)
{
  DOUBLE3D result = ((const DOUBLE3D*)a)->operator/(b);
  return (DOUBLE3D_*)(new DOUBLE3D(result));
}

void DOUBLE3D_DivideInplace(DOUBLE3D_* a, DOUBLE b)
{
  ((DOUBLE3D*)a)->operator/=(b);
}

DOUBLE3D_* DOUBLE3D_Multiply_matrix(const DOUBLE3D_* a, const DOUBLEmatrix3D_* b)
{
  DOUBLE3D result = ((const DOUBLE3D*)a)->operator*(*((const DOUBLEmatrix3D*)b));
  return (DOUBLE3D_*)(new DOUBLE3D(result));
}

void DOUBLE3D_MultiplyInplace_matrix(DOUBLE3D_* a, const DOUBLEmatrix3D_* b)
{
  ((DOUBLE3D*)a)->operator*=(*((const DOUBLEmatrix3D*)b));
}

DOUBLE DOUBLE3D_Dot(const DOUBLE3D_* a, const DOUBLE3D_* b)
{
  return ((const DOUBLE3D*)a)->operator%(*((const DOUBLE3D*)b));
}

DOUBLE3D_* DOUBLE3D_Multiply_vector(const DOUBLE3D_* a, const DOUBLE3D_* b)
{
  DOUBLE3D result = ((const DOUBLE3D*)a)->operator*(*((const DOUBLE3D*)b));
  return (DOUBLE3D_*)(new DOUBLE3D(result));
}

void DOUBLE3D_MultiplyInplace_vector(DOUBLE3D_* a, const DOUBLE3D_* b)
{
  ((DOUBLE3D*)a)->operator*=(*((const DOUBLE3D*)b));
}

BOOL DOUBLE3D_equal(const DOUBLE3D_* a, const DOUBLE3D_* b)
{
  return (*((const DOUBLE3D*)a)) == (*((const DOUBLE3D*)b));
}

BOOL DOUBLE3D_notequal(const DOUBLE3D_* a, const DOUBLE3D_* b)
{
  return (*((const DOUBLE3D*)a)) != (*((const DOUBLE3D*)b));
}

static void sehDOUBLE3D_extract(CTStream_* s, DOUBLE3D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((DOUBLE3D*)p));
  SECAPI_CATCH
}

void DOUBLE3D_extract(CTStream_* s, DOUBLE3D_* p)
{
  STREAM_TRY
  sehDOUBLE3D_extract(s, p);
  STREAM_CATCH
}

static void sehDOUBLE3D_insert(CTStream_* s, DOUBLE3D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((DOUBLE3D*)p));
  SECAPI_CATCH
}

void DOUBLE3D_insert(CTStream_* s, DOUBLE3D_* p)
{
  STREAM_TRY
  sehDOUBLE3D_insert(s, p);
  STREAM_CATCH
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

DOUBLE* DOUBLE4D_Element(DOUBLE4D_* p, INDEX i)
{
  return &( (*((DOUBLE4D*)p))(i) );
}

DOUBLE DOUBLE4D_Element_const(const DOUBLE4D_* p, INDEX i)
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

DOUBLE4D_* DOUBLE4D_Negative(const DOUBLE4D_* p)
{
  DOUBLE4D result = ((const DOUBLE4D*)p)->operator-();
  return (DOUBLE4D_*)(new DOUBLE4D(result));
}

DOUBLE4D_* DOUBLE4D_Plus(const DOUBLE4D_* a, const DOUBLE4D_* b)
{
  DOUBLE4D result = ((const DOUBLE4D*)a)->operator+(*((const DOUBLE4D*)b));
  return (DOUBLE4D_*)(new DOUBLE4D(result));
}

void DOUBLE4D_PlusInplace(DOUBLE4D_* a, const DOUBLE4D_* b)
{
  ((DOUBLE4D*)a)->operator+=(*((const DOUBLE4D*)b));
}

DOUBLE4D_* DOUBLE4D_Minus(const DOUBLE4D_* a, const DOUBLE4D_* b)
{
  DOUBLE4D result = ((const DOUBLE4D*)a)->operator-(*((const DOUBLE4D*)b));
  return (DOUBLE4D_*)(new DOUBLE4D(result));
}

void DOUBLE4D_MinusInplace(DOUBLE4D_* a, const DOUBLE4D_* b)
{
  ((DOUBLE4D*)a)->operator-=(*((const DOUBLE4D*)b));
}

DOUBLE4D_* DOUBLE4D_Multiply(const DOUBLE4D_* a, DOUBLE b)
{
  DOUBLE4D result = ((const DOUBLE4D*)a)->operator*(b);
  return (DOUBLE4D_*)(new DOUBLE4D(result));
}

void DOUBLE4D_MultiplyInplace(DOUBLE4D_* a, DOUBLE b)
{
  ((DOUBLE4D*)a)->operator*=(b);
}

DOUBLE4D_* DOUBLE4D_Divide(const DOUBLE4D_* a, DOUBLE b)
{
  DOUBLE4D result = ((const DOUBLE4D*)a)->operator/(b);
  return (DOUBLE4D_*)(new DOUBLE4D(result));
}

void DOUBLE4D_DivideInplace(DOUBLE4D_* a, DOUBLE b)
{
  ((DOUBLE4D*)a)->operator/=(b);
}

DOUBLE4D_* DOUBLE4D_Multiply_matrix(const DOUBLE4D_* a, const DOUBLEmatrix4D_* b)
{
  DOUBLE4D result = ((const DOUBLE4D*)a)->operator*(*((const DOUBLEmatrix4D*)b));
  return (DOUBLE4D_*)(new DOUBLE4D(result));
}

void DOUBLE4D_MultiplyInplace_matrix(DOUBLE4D_* a, const DOUBLEmatrix4D_* b)
{
  ((DOUBLE4D*)a)->operator*=(*((const DOUBLEmatrix4D*)b));
}

DOUBLE DOUBLE4D_Dot(const DOUBLE4D_* a, const DOUBLE4D_* b)
{
  return ((const DOUBLE4D*)a)->operator%(*((const DOUBLE4D*)b));
}

BOOL DOUBLE4D_equal(const DOUBLE4D_* a, const DOUBLE4D_* b)
{
  return (*((const DOUBLE4D*)a)) == (*((const DOUBLE4D*)b));
}

BOOL DOUBLE4D_notequal(const DOUBLE4D_* a, const DOUBLE4D_* b)
{
  return (*((const DOUBLE4D*)a)) != (*((const DOUBLE4D*)b));
}

static void sehDOUBLE4D_extract(CTStream_* s, DOUBLE4D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((DOUBLE4D*)p));
  SECAPI_CATCH
}

void DOUBLE4D_extract(CTStream_* s, DOUBLE4D_* p)
{
  STREAM_TRY
  sehDOUBLE4D_extract(s, p);
  STREAM_CATCH
}

static void sehDOUBLE4D_insert(CTStream_* s, DOUBLE4D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((DOUBLE4D*)p));
  SECAPI_CATCH
}

void DOUBLE4D_insert(CTStream_* s, DOUBLE4D_* p)
{
  STREAM_TRY
  sehDOUBLE4D_insert(s, p);
  STREAM_CATCH
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

INDEX* INDEX2D_Element(INDEX2D_* p, INDEX i)
{
  return &( (*((INDEX2D*)p))(i) );
}

INDEX INDEX2D_Element_const(const INDEX2D_* p, INDEX i)
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

INDEX2D_* INDEX2D_Negative(const INDEX2D_* p)
{
  INDEX2D result = ((const INDEX2D*)p)->operator-();
  return (INDEX2D_*)(new INDEX2D(result));
}

INDEX2D_* INDEX2D_Plus(const INDEX2D_* a, const INDEX2D_* b)
{
  INDEX2D result = ((const INDEX2D*)a)->operator+(*((const INDEX2D*)b));
  return (INDEX2D_*)(new INDEX2D(result));
}

void INDEX2D_PlusInplace(INDEX2D_* a, const INDEX2D_* b)
{
  ((INDEX2D*)a)->operator+=(*((const INDEX2D*)b));
}

INDEX2D_* INDEX2D_Minus(const INDEX2D_* a, const INDEX2D_* b)
{
  INDEX2D result = ((const INDEX2D*)a)->operator-(*((const INDEX2D*)b));
  return (INDEX2D_*)(new INDEX2D(result));
}

void INDEX2D_MinusInplace(INDEX2D_* a, const INDEX2D_* b)
{
  ((INDEX2D*)a)->operator-=(*((const INDEX2D*)b));
}

INDEX2D_* INDEX2D_Multiply(const INDEX2D_* a, INDEX b)
{
  INDEX2D result = ((const INDEX2D*)a)->operator*(b);
  return (INDEX2D_*)(new INDEX2D(result));
}

void INDEX2D_MultiplyInplace(INDEX2D_* a, INDEX b)
{
  ((INDEX2D*)a)->operator*=(b);
}

INDEX2D_* INDEX2D_Divide(const INDEX2D_* a, INDEX b)
{
  INDEX2D result = ((const INDEX2D*)a)->operator/(b);
  return (INDEX2D_*)(new INDEX2D(result));
}

void INDEX2D_DivideInplace(INDEX2D_* a, INDEX b)
{
  ((INDEX2D*)a)->operator/=(b);
}

INDEX2D_* INDEX2D_Multiply_matrix(const INDEX2D_* a, const INDEXmatrix2D_* b)
{
  INDEX2D result = ((const INDEX2D*)a)->operator*(*((const INDEXmatrix2D*)b));
  return (INDEX2D_*)(new INDEX2D(result));
}

void INDEX2D_MultiplyInplace_matrix(INDEX2D_* a, const INDEXmatrix2D_* b)
{
  ((INDEX2D*)a)->operator*=(*((const INDEXmatrix2D*)b));
}

INDEX INDEX2D_Dot(const INDEX2D_* a, const INDEX2D_* b)
{
  return ((const INDEX2D*)a)->operator%(*((const INDEX2D*)b));
}

BOOL INDEX2D_equal(const INDEX2D_* a, const INDEX2D_* b)
{
  return (*((const INDEX2D*)a)) == (*((const INDEX2D*)b));
}

BOOL INDEX2D_notequal(const INDEX2D_* a, const INDEX2D_* b)
{
  return (*((const INDEX2D*)a)) != (*((const INDEX2D*)b));
}

static void sehINDEX2D_extract(CTStream_* s, INDEX2D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((INDEX2D*)p));
  SECAPI_CATCH
}

void INDEX2D_extract(CTStream_* s, INDEX2D_* p)
{
  STREAM_TRY
  sehINDEX2D_extract(s, p);
  STREAM_CATCH
}

static void sehINDEX2D_insert(CTStream_* s, INDEX2D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((INDEX2D*)p));
  SECAPI_CATCH
}

void INDEX2D_insert(CTStream_* s, INDEX2D_* p)
{
  STREAM_TRY
  sehINDEX2D_insert(s, p);
  STREAM_CATCH
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

INDEX* INDEX3D_Element(INDEX3D_* p, INDEX i)
{
  return &( (*((INDEX3D*)p))(i) );
}

INDEX INDEX3D_Element_const(const INDEX3D_* p, INDEX i)
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

INDEX3D_* INDEX3D_Negative(const INDEX3D_* p)
{
  INDEX3D result = ((const INDEX3D*)p)->operator-();
  return (INDEX3D_*)(new INDEX3D(result));
}

INDEX3D_* INDEX3D_Plus(const INDEX3D_* a, const INDEX3D_* b)
{
  INDEX3D result = ((const INDEX3D*)a)->operator+(*((const INDEX3D*)b));
  return (INDEX3D_*)(new INDEX3D(result));
}

void INDEX3D_PlusInplace(INDEX3D_* a, const INDEX3D_* b)
{
  ((INDEX3D*)a)->operator+=(*((const INDEX3D*)b));
}

INDEX3D_* INDEX3D_Minus(const INDEX3D_* a, const INDEX3D_* b)
{
  INDEX3D result = ((const INDEX3D*)a)->operator-(*((const INDEX3D*)b));
  return (INDEX3D_*)(new INDEX3D(result));
}

void INDEX3D_MinusInplace(INDEX3D_* a, const INDEX3D_* b)
{
  ((INDEX3D*)a)->operator-=(*((const INDEX3D*)b));
}

INDEX3D_* INDEX3D_Multiply(const INDEX3D_* a, INDEX b)
{
  INDEX3D result = ((const INDEX3D*)a)->operator*(b);
  return (INDEX3D_*)(new INDEX3D(result));
}

void INDEX3D_MultiplyInplace(INDEX3D_* a, INDEX b)
{
  ((INDEX3D*)a)->operator*=(b);
}

INDEX3D_* INDEX3D_Divide(const INDEX3D_* a, INDEX b)
{
  INDEX3D result = ((const INDEX3D*)a)->operator/(b);
  return (INDEX3D_*)(new INDEX3D(result));
}

void INDEX3D_DivideInplace(INDEX3D_* a, INDEX b)
{
  ((INDEX3D*)a)->operator/=(b);
}

INDEX3D_* INDEX3D_Multiply_matrix(const INDEX3D_* a, const INDEXmatrix3D_* b)
{
  INDEX3D result = ((const INDEX3D*)a)->operator*(*((const INDEXmatrix3D*)b));
  return (INDEX3D_*)(new INDEX3D(result));
}

void INDEX3D_MultiplyInplace_matrix(INDEX3D_* a, const INDEXmatrix3D_* b)
{
  ((INDEX3D*)a)->operator*=(*((const INDEXmatrix3D*)b));
}

INDEX INDEX3D_Dot(const INDEX3D_* a, const INDEX3D_* b)
{
  return ((const INDEX3D*)a)->operator%(*((const INDEX3D*)b));
}

INDEX3D_* INDEX3D_Multiply_vector(const INDEX3D_* a, const INDEX3D_* b)
{
  INDEX3D result = ((const INDEX3D*)a)->operator*(*((const INDEX3D*)b));
  return (INDEX3D_*)(new INDEX3D(result));
}

void INDEX3D_MultiplyInplace_vector(INDEX3D_* a, const INDEX3D_* b)
{
  ((INDEX3D*)a)->operator*=(*((const INDEX3D*)b));
}

BOOL INDEX3D_equal(const INDEX3D_* a, const INDEX3D_* b)
{
  return (*((const INDEX3D*)a)) == (*((const INDEX3D*)b));
}

BOOL INDEX3D_notequal(const INDEX3D_* a, const INDEX3D_* b)
{
  return (*((const INDEX3D*)a)) != (*((const INDEX3D*)b));
}

static void sehINDEX3D_extract(CTStream_* s, INDEX3D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((INDEX3D*)p));
  SECAPI_CATCH
}

void INDEX3D_extract(CTStream_* s, INDEX3D_* p)
{
  STREAM_TRY
  sehINDEX3D_extract(s, p);
  STREAM_CATCH
}

static void sehINDEX3D_insert(CTStream_* s, INDEX3D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((INDEX3D*)p));
  SECAPI_CATCH
}

void INDEX3D_insert(CTStream_* s, INDEX3D_* p)
{
  STREAM_TRY
  sehINDEX3D_insert(s, p);
  STREAM_CATCH
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

INDEX* INDEX4D_Element(INDEX4D_* p, INDEX i)
{
  return &( (*((INDEX4D*)p))(i) );
}

INDEX INDEX4D_Element_const(const INDEX4D_* p, INDEX i)
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

INDEX4D_* INDEX4D_Negative(const INDEX4D_* p)
{
  INDEX4D result = ((const INDEX4D*)p)->operator-();
  return (INDEX4D_*)(new INDEX4D(result));
}

INDEX4D_* INDEX4D_Plus(const INDEX4D_* a, const INDEX4D_* b)
{
  INDEX4D result = ((const INDEX4D*)a)->operator+(*((const INDEX4D*)b));
  return (INDEX4D_*)(new INDEX4D(result));
}

void INDEX4D_PlusInplace(INDEX4D_* a, const INDEX4D_* b)
{
  ((INDEX4D*)a)->operator+=(*((const INDEX4D*)b));
}

INDEX4D_* INDEX4D_Minus(const INDEX4D_* a, const INDEX4D_* b)
{
  INDEX4D result = ((const INDEX4D*)a)->operator-(*((const INDEX4D*)b));
  return (INDEX4D_*)(new INDEX4D(result));
}

void INDEX4D_MinusInplace(INDEX4D_* a, const INDEX4D_* b)
{
  ((INDEX4D*)a)->operator-=(*((const INDEX4D*)b));
}

INDEX4D_* INDEX4D_Multiply(const INDEX4D_* a, INDEX b)
{
  INDEX4D result = ((const INDEX4D*)a)->operator*(b);
  return (INDEX4D_*)(new INDEX4D(result));
}

void INDEX4D_MultiplyInplace(INDEX4D_* a, INDEX b)
{
  ((INDEX4D*)a)->operator*=(b);
}

INDEX4D_* INDEX4D_Divide(const INDEX4D_* a, INDEX b)
{
  INDEX4D result = ((const INDEX4D*)a)->operator/(b);
  return (INDEX4D_*)(new INDEX4D(result));
}

void INDEX4D_DivideInplace(INDEX4D_* a, INDEX b)
{
  ((INDEX4D*)a)->operator/=(b);
}

INDEX4D_* INDEX4D_Multiply_matrix(const INDEX4D_* a, const INDEXmatrix4D_* b)
{
  INDEX4D result = ((const INDEX4D*)a)->operator*(*((const INDEXmatrix4D*)b));
  return (INDEX4D_*)(new INDEX4D(result));
}

void INDEX4D_MultiplyInplace_matrix(INDEX4D_* a, const INDEXmatrix4D_* b)
{
  ((INDEX4D*)a)->operator*=(*((const INDEXmatrix4D*)b));
}

INDEX INDEX4D_Dot(const INDEX4D_* a, const INDEX4D_* b)
{
  return ((const INDEX4D*)a)->operator%(*((const INDEX4D*)b));
}

BOOL INDEX4D_equal(const INDEX4D_* a, const INDEX4D_* b)
{
  return (*((const INDEX4D*)a)) == (*((const INDEX4D*)b));
}

BOOL INDEX4D_notequal(const INDEX4D_* a, const INDEX4D_* b)
{
  return (*((const INDEX4D*)a)) != (*((const INDEX4D*)b));
}

static void sehINDEX4D_extract(CTStream_* s, INDEX4D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((INDEX4D*)p));
  SECAPI_CATCH
}

void INDEX4D_extract(CTStream_* s, INDEX4D_* p)
{
  STREAM_TRY
  sehINDEX4D_extract(s, p);
  STREAM_CATCH
}

static void sehINDEX4D_insert(CTStream_* s, INDEX4D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((INDEX4D*)p));
  SECAPI_CATCH
}

void INDEX4D_insert(CTStream_* s, INDEX4D_* p)
{
  STREAM_TRY
  sehINDEX4D_insert(s, p);
  STREAM_CATCH
}

DOUBLE3D_* FLOAT2DOUBLE(const FLOAT3D_* p)
{
  DOUBLE3D result = FLOATtoDOUBLE(*((const FLOAT3D*)p));
  return (DOUBLE3D_*)(new DOUBLE3D(result));
}

FLOAT3D_* DOUBLE2FLOAT(const DOUBLE3D_* p)
{
  FLOAT3D result = DOUBLEtoFLOAT(*((const DOUBLE3D*)p));
  return (FLOAT3D_*)(new FLOAT3D(result));
}

FLOAT2D_* FLOAT2D_ComponentProduct(const FLOAT2D_* a, const FLOAT2D_* b)
{
  return (FLOAT2D_*)ComponentProduct(*((const FLOAT2D*)a), *((const FLOAT2D*)b));
}

FLOAT3D_* FLOAT3D_ComponentProduct(const FLOAT3D_* a, const FLOAT3D_* b)
{
  return (FLOAT3D_*)ComponentProduct(*((const FLOAT3D*)a), *((const FLOAT3D*)b));
}

FLOAT4D_* FLOAT4D_ComponentProduct(const FLOAT4D_* a, const FLOAT4D_* b)
{
  return (FLOAT4D_*)ComponentProduct(*((const FLOAT4D*)a), *((const FLOAT4D*)b));
}

DOUBLE2D_* DOUBLE2D_ComponentProduct(const DOUBLE2D_* a, const DOUBLE2D_* b)
{
  return (DOUBLE2D_*)ComponentProduct(*((const DOUBLE2D*)a), *((const DOUBLE2D*)b));
}

DOUBLE3D_* DOUBLE3D_ComponentProduct(const DOUBLE3D_* a, const DOUBLE3D_* b)
{
  return (DOUBLE3D_*)ComponentProduct(*((const DOUBLE3D*)a), *((const DOUBLE3D*)b));
}

DOUBLE4D_* DOUBLE4D_ComponentProduct(const DOUBLE4D_* a, const DOUBLE4D_* b)
{
  return (DOUBLE4D_*)ComponentProduct(*((const DOUBLE4D*)a), *((const DOUBLE4D*)b));
}

INDEX2D_* INDEX2D_ComponentProduct(const INDEX2D_* a, const INDEX2D_* b)
{
  return (INDEX2D_*)ComponentProduct(*((const INDEX2D*)a), *((const INDEX2D*)b));
}

INDEX3D_* INDEX3D_ComponentProduct(const INDEX3D_* a, const INDEX3D_* b)
{
  return (INDEX3D_*)ComponentProduct(*((const INDEX3D*)a), *((const INDEX3D*)b));
}

INDEX4D_* INDEX4D_ComponentProduct(const INDEX4D_* a, const INDEX4D_* b)
{
  return (INDEX4D_*)ComponentProduct(*((const INDEX4D*)a), *((const INDEX4D*)b));
}

void FLOAT2D_copy(FLOAT2D_* a, const FLOAT2D_* b)
{
  *((FLOAT2D*)a) = *((const FLOAT2D*)b);
}

void FLOAT3D_copy(FLOAT3D_* a, const FLOAT3D_* b)
{
  *((FLOAT3D*)a) = *((const FLOAT3D*)b);
}

void FLOAT4D_copy(FLOAT4D_* a, const FLOAT4D_* b)
{
  *((FLOAT4D*)a) = *((const FLOAT4D*)b);
}

void DOUBLE2D_copy(DOUBLE2D_* a, const DOUBLE2D_* b)
{
  *((DOUBLE2D*)a) = *((const DOUBLE2D*)b);
}

void DOUBLE3D_copy(DOUBLE3D_* a, const DOUBLE3D_* b)
{
  *((DOUBLE3D*)a) = *((const DOUBLE3D*)b);
}

void DOUBLE4D_copy(DOUBLE4D_* a, const DOUBLE4D_* b)
{
  *((DOUBLE4D*)a) = *((const DOUBLE4D*)b);
}

void INDEX2D_copy(INDEX2D_* a, const INDEX2D_* b)
{
  *((INDEX2D*)a) = *((const INDEX2D*)b);
}

void INDEX3D_copy(INDEX3D_* a, const INDEX3D_* b)
{
  *((INDEX3D*)a) = *((const INDEX3D*)b);
}

void INDEX4D_copy(INDEX4D_* a, const INDEX4D_* b)
{
  *((INDEX4D*)a) = *((const INDEX4D*)b);
}

// SWORD3D
SWORD3D_* SWORD3D_new()
{
  return (SWORD3D_*)(new SWORD3D());
}

SWORD3D_* SWORD3D_new_xyz(SWORD x, SWORD y, SWORD z)
{
  return (SWORD3D_*)(new SWORD3D(x, y, z));
}

SWORD3D_* SWORD3D_clone(const SWORD3D_* p)
{
  return (SWORD3D_*)(new SWORD3D(*((const SWORD3D*)p)));
}

void SWORD3D_delete(SWORD3D_* p)
{
  delete ((SWORD3D*)p);
}

void SWORD3D_Clear(SWORD3D_* p)
{
  ((SWORD3D*)p)->Clear();
}

SWORD SWORD3D_Length(const SWORD3D_* p)
{
  return ((const SWORD3D*)p)->Length();
}

SWORD SWORD3D_ManhattanNorm(const SWORD3D_* p)
{
  return ((const SWORD3D*)p)->ManhattanNorm();
}

SWORD SWORD3D_MaxNorm(const SWORD3D_* p)
{
  return ((const SWORD3D*)p)->MaxNorm();
}

SWORD* SWORD3D_Element(SWORD3D_* p, SWORD i)
{
  return &( (*((SWORD3D*)p))(i) );
}

SWORD SWORD3D_Element_const(const SWORD3D_* p, SWORD i)
{
  return (*((const SWORD3D*)p))(i);
}

void SWORD3D_Normalize(SWORD3D_* p)
{
  ((SWORD3D*)p)->Normalize();
}

void SWORD3D_SafeNormalize(SWORD3D_* p)
{
  ((SWORD3D*)p)->SafeNormalize();
}

void SWORD3D_Flip(SWORD3D_* p)
{
  ((SWORD3D*)p)->Flip();
}

SWORD3D_* SWORD3D_Negative(const SWORD3D_* p)
{
  SWORD3D result = ((const SWORD3D*)p)->operator-();
  return (SWORD3D_*)(new SWORD3D(result));
}

SWORD3D_* SWORD3D_Plus(const SWORD3D_* a, const SWORD3D_* b)
{
  SWORD3D result = ((const SWORD3D*)a)->operator+(*((const SWORD3D*)b));
  return (SWORD3D_*)(new SWORD3D(result));
}

void SWORD3D_PlusInplace(SWORD3D_* a, const SWORD3D_* b)
{
  ((SWORD3D*)a)->operator+=(*((const SWORD3D*)b));
}

SWORD3D_* SWORD3D_Minus(const SWORD3D_* a, const SWORD3D_* b)
{
  SWORD3D result = ((const SWORD3D*)a)->operator-(*((const SWORD3D*)b));
  return (SWORD3D_*)(new SWORD3D(result));
}

void SWORD3D_MinusInplace(SWORD3D_* a, const SWORD3D_* b)
{
  ((SWORD3D*)a)->operator-=(*((const SWORD3D*)b));
}

SWORD3D_* SWORD3D_Multiply(const SWORD3D_* a, SWORD b)
{
  SWORD3D result = ((const SWORD3D*)a)->operator*(b);
  return (SWORD3D_*)(new SWORD3D(result));
}

void SWORD3D_MultiplyInplace(SWORD3D_* a, SWORD b)
{
  ((SWORD3D*)a)->operator*=(b);
}

SWORD3D_* SWORD3D_Divide(const SWORD3D_* a, SWORD b)
{
  SWORD3D result = ((const SWORD3D*)a)->operator/(b);
  return (SWORD3D_*)(new SWORD3D(result));
}

void SWORD3D_DivideInplace(SWORD3D_* a, SWORD b)
{
  ((SWORD3D*)a)->operator/=(b);
}

SWORD SWORD3D_Dot(const SWORD3D_* a, const SWORD3D_* b)
{
  return ((const SWORD3D*)a)->operator%(*((const SWORD3D*)b));
}

SWORD3D_* SWORD3D_Multiply_vector(const SWORD3D_* a, const SWORD3D_* b)
{
  SWORD3D result = ((const SWORD3D*)a)->operator*(*((const SWORD3D*)b));
  return (SWORD3D_*)(new SWORD3D(result));
}

void SWORD3D_MultiplyInplace_vector(SWORD3D_* a, const SWORD3D_* b)
{
  ((SWORD3D*)a)->operator*=(*((const SWORD3D*)b));
}

BOOL SWORD3D_equal(const SWORD3D_* a, const SWORD3D_* b)
{
  return (*((const SWORD3D*)a)) == (*((const SWORD3D*)b));
}

BOOL SWORD3D_notequal(const SWORD3D_* a, const SWORD3D_* b)
{
  return (*((const SWORD3D*)a)) != (*((const SWORD3D*)b));
}

static void sehSWORD3D_extract(CTStream_* s, SWORD3D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((SWORD3D*)p));
  SECAPI_CATCH
}

void SWORD3D_extract(CTStream_* s, SWORD3D_* p)
{
  STREAM_TRY
  sehSWORD3D_extract(s, p);
  STREAM_CATCH
}

static void sehSWORD3D_insert(CTStream_* s, SWORD3D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((SWORD3D*)p));
  SECAPI_CATCH
}

void SWORD3D_insert(CTStream_* s, SWORD3D_* p)
{
  STREAM_TRY
  sehSWORD3D_insert(s, p);
  STREAM_CATCH
}

SWORD3D_* SWORD3D_ComponentProduct(const SWORD3D_* a, const SWORD3D_* b)
{
  return (SWORD3D_*)ComponentProduct(*((const SWORD3D*)a), *((const SWORD3D*)b));
}

void SWORD3D_copy(SWORD3D_* a, const SWORD3D_* b)
{
  *((SWORD3D*)a) = *((const SWORD3D*)b);
}

// SBYTE3D
SBYTE3D_* SBYTE3D_new()
{
  return (SBYTE3D_*)(new SBYTE3D());
}

SBYTE3D_* SBYTE3D_new_xyz(SBYTE x, SBYTE y, SBYTE z)
{
  return (SBYTE3D_*)(new SBYTE3D(x, y, z));
}

SBYTE3D_* SBYTE3D_clone(const SBYTE3D_* p)
{
  return (SBYTE3D_*)(new SBYTE3D(*((const SBYTE3D*)p)));
}

void SBYTE3D_delete(SBYTE3D_* p)
{
  delete ((SBYTE3D*)p);
}

void SBYTE3D_Clear(SBYTE3D_* p)
{
  ((SBYTE3D*)p)->Clear();
}

SBYTE SBYTE3D_Length(const SBYTE3D_* p)
{
  return ((const SBYTE3D*)p)->Length();
}

SBYTE SBYTE3D_ManhattanNorm(const SBYTE3D_* p)
{
  return ((const SBYTE3D*)p)->ManhattanNorm();
}

SBYTE SBYTE3D_MaxNorm(const SBYTE3D_* p)
{
  return ((const SBYTE3D*)p)->MaxNorm();
}

SBYTE* SBYTE3D_Element(SBYTE3D_* p, SBYTE i)
{
  return &( (*((SBYTE3D*)p))(i) );
}

SBYTE SBYTE3D_Element_const(const SBYTE3D_* p, SBYTE i)
{
  return (*((const SBYTE3D*)p))(i);
}

void SBYTE3D_Normalize(SBYTE3D_* p)
{
  ((SBYTE3D*)p)->Normalize();
}

void SBYTE3D_SafeNormalize(SBYTE3D_* p)
{
  ((SBYTE3D*)p)->SafeNormalize();
}

void SBYTE3D_Flip(SBYTE3D_* p)
{
  ((SBYTE3D*)p)->Flip();
}

SBYTE3D_* SBYTE3D_Negative(const SBYTE3D_* p)
{
  SBYTE3D result = ((const SBYTE3D*)p)->operator-();
  return (SBYTE3D_*)(new SBYTE3D(result));
}

SBYTE3D_* SBYTE3D_Plus(const SBYTE3D_* a, const SBYTE3D_* b)
{
  SBYTE3D result = ((const SBYTE3D*)a)->operator+(*((const SBYTE3D*)b));
  return (SBYTE3D_*)(new SBYTE3D(result));
}

void SBYTE3D_PlusInplace(SBYTE3D_* a, const SBYTE3D_* b)
{
  ((SBYTE3D*)a)->operator+=(*((const SBYTE3D*)b));
}

SBYTE3D_* SBYTE3D_Minus(const SBYTE3D_* a, const SBYTE3D_* b)
{
  SBYTE3D result = ((const SBYTE3D*)a)->operator-(*((const SBYTE3D*)b));
  return (SBYTE3D_*)(new SBYTE3D(result));
}

void SBYTE3D_MinusInplace(SBYTE3D_* a, const SBYTE3D_* b)
{
  ((SBYTE3D*)a)->operator-=(*((const SBYTE3D*)b));
}

SBYTE3D_* SBYTE3D_Multiply(const SBYTE3D_* a, SBYTE b)
{
  SBYTE3D result = ((const SBYTE3D*)a)->operator*(b);
  return (SBYTE3D_*)(new SBYTE3D(result));
}

void SBYTE3D_MultiplyInplace(SBYTE3D_* a, SBYTE b)
{
  ((SBYTE3D*)a)->operator*=(b);
}

SBYTE3D_* SBYTE3D_Divide(const SBYTE3D_* a, SBYTE b)
{
  SBYTE3D result = ((const SBYTE3D*)a)->operator/(b);
  return (SBYTE3D_*)(new SBYTE3D(result));
}

void SBYTE3D_DivideInplace(SBYTE3D_* a, SBYTE b)
{
  ((SBYTE3D*)a)->operator/=(b);
}

SBYTE SBYTE3D_Dot(const SBYTE3D_* a, const SBYTE3D_* b)
{
  return ((const SBYTE3D*)a)->operator%(*((const SBYTE3D*)b));
}

SBYTE3D_* SBYTE3D_Multiply_vector(const SBYTE3D_* a, const SBYTE3D_* b)
{
  SBYTE3D result = ((const SBYTE3D*)a)->operator*(*((const SBYTE3D*)b));
  return (SBYTE3D_*)(new SBYTE3D(result));
}

void SBYTE3D_MultiplyInplace_vector(SBYTE3D_* a, const SBYTE3D_* b)
{
  ((SBYTE3D*)a)->operator*=(*((const SBYTE3D*)b));
}

BOOL SBYTE3D_equal(const SBYTE3D_* a, const SBYTE3D_* b)
{
  return (*((const SBYTE3D*)a)) == (*((const SBYTE3D*)b));
}

BOOL SBYTE3D_notequal(const SBYTE3D_* a, const SBYTE3D_* b)
{
  return (*((const SBYTE3D*)a)) != (*((const SBYTE3D*)b));
}

static void sehSBYTE3D_extract(CTStream_* s, SBYTE3D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((SBYTE3D*)p));
  SECAPI_CATCH
}

void SBYTE3D_extract(CTStream_* s, SBYTE3D_* p)
{
  STREAM_TRY
  sehSBYTE3D_extract(s, p);
  STREAM_CATCH
}

static void sehSBYTE3D_insert(CTStream_* s, SBYTE3D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((SBYTE3D*)p));
  SECAPI_CATCH
}

void SBYTE3D_insert(CTStream_* s, SBYTE3D_* p)
{
  STREAM_TRY
  sehSBYTE3D_insert(s, p);
  STREAM_CATCH
}

SBYTE3D_* SBYTE3D_ComponentProduct(const SBYTE3D_* a, const SBYTE3D_* b)
{
  return (SBYTE3D_*)ComponentProduct(*((const SBYTE3D*)a), *((const SBYTE3D*)b));
}

void SBYTE3D_copy(SBYTE3D_* a, const SBYTE3D_* b)
{
  *((SBYTE3D*)a) = *((const SBYTE3D*)b);
}
