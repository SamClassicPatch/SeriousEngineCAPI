#include "Matrix.h"
#include <Engine/Math/Matrix.h>

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

template<class Type, int iDimensions>
__forceinline Vector<Type, iDimensions> ComponentProduct(const Vector<Type, iDimensions>& v0, const Vector<Type, iDimensions>& v1)
{
  Vector<Type, iDimensions> result;
  for (int i = 1; i <= iDimensions; ++i)
    result(i) = v0(i) * v1(i);
  return result;
}

template<class Type>
Type Determinant(const Matrix<Type, 3, 3>& m)
{
  return (
    + m.matrix[0][0] * (m.matrix[1][1] * m.matrix[2][2] - m.matrix[2][1] * m.matrix[1][2])
    - m.matrix[1][0] * (m.matrix[0][1] * m.matrix[2][2] - m.matrix[2][1] * m.matrix[0][2])
    + m.matrix[2][0] * (m.matrix[0][1] * m.matrix[1][2] - m.matrix[1][1] * m.matrix[0][2]));
}

template<class Type>
Matrix<Type, 3, 3>* InverseMatrix(const Matrix<Type, 3, 3>& m)
{
  Type oneOverDeterminant = static_cast<Type>(1.0 / Determinant(m));

  Matrix<Type, 3, 3>* inverse = new Matrix<Type, 3, 3>();
  inverse->matrix[0][0] = +(m.matrix[1][1] * m.matrix[2][2] - m.matrix[2][1] * m.matrix[1][2]) * oneOverDeterminant;
  inverse->matrix[1][0] = -(m.matrix[1][0] * m.matrix[2][2] - m.matrix[2][0] * m.matrix[1][2]) * oneOverDeterminant;
  inverse->matrix[2][0] = +(m.matrix[1][0] * m.matrix[2][1] - m.matrix[2][0] * m.matrix[1][1]) * oneOverDeterminant;
  inverse->matrix[0][1] = -(m.matrix[0][1] * m.matrix[2][2] - m.matrix[2][1] * m.matrix[0][2]) * oneOverDeterminant;
  inverse->matrix[1][1] = +(m.matrix[0][0] * m.matrix[2][2] - m.matrix[2][0] * m.matrix[0][2]) * oneOverDeterminant;
  inverse->matrix[2][1] = -(m.matrix[0][0] * m.matrix[2][1] - m.matrix[2][0] * m.matrix[0][1]) * oneOverDeterminant;
  inverse->matrix[0][2] = +(m.matrix[0][1] * m.matrix[1][2] - m.matrix[1][1] * m.matrix[0][2]) * oneOverDeterminant;
  inverse->matrix[1][2] = -(m.matrix[0][0] * m.matrix[1][2] - m.matrix[1][0] * m.matrix[0][2]) * oneOverDeterminant;
  inverse->matrix[2][2] = +(m.matrix[0][0] * m.matrix[1][1] - m.matrix[1][0] * m.matrix[0][1]) * oneOverDeterminant;

  return inverse;
}

template<class Type>
Matrix<Type, 4, 4>* InverseMatrix(const Matrix<Type, 4, 4>& m)
{
  Type Coef00 = m.matrix[2][2] * m.matrix[3][3] - m.matrix[3][2] * m.matrix[2][3];
  Type Coef02 = m.matrix[1][2] * m.matrix[3][3] - m.matrix[3][2] * m.matrix[1][3];
  Type Coef03 = m.matrix[1][2] * m.matrix[2][3] - m.matrix[2][2] * m.matrix[1][3];
  Type Coef04 = m.matrix[2][1] * m.matrix[3][3] - m.matrix[3][1] * m.matrix[2][3];
  Type Coef06 = m.matrix[1][1] * m.matrix[3][3] - m.matrix[3][1] * m.matrix[1][3];
  Type Coef07 = m.matrix[1][1] * m.matrix[2][3] - m.matrix[2][1] * m.matrix[1][3];
  Type Coef08 = m.matrix[2][1] * m.matrix[3][2] - m.matrix[3][1] * m.matrix[2][2];
  Type Coef10 = m.matrix[1][1] * m.matrix[3][2] - m.matrix[3][1] * m.matrix[1][2];
  Type Coef11 = m.matrix[1][1] * m.matrix[2][2] - m.matrix[2][1] * m.matrix[1][2];
  Type Coef12 = m.matrix[2][0] * m.matrix[3][3] - m.matrix[3][0] * m.matrix[2][3];
  Type Coef14 = m.matrix[1][0] * m.matrix[3][3] - m.matrix[3][0] * m.matrix[1][3];
  Type Coef15 = m.matrix[1][0] * m.matrix[2][3] - m.matrix[2][0] * m.matrix[1][3];
  Type Coef16 = m.matrix[2][0] * m.matrix[3][2] - m.matrix[3][0] * m.matrix[2][2];
  Type Coef18 = m.matrix[1][0] * m.matrix[3][2] - m.matrix[3][0] * m.matrix[1][2];
  Type Coef19 = m.matrix[1][0] * m.matrix[2][2] - m.matrix[2][0] * m.matrix[1][2];
  Type Coef20 = m.matrix[2][0] * m.matrix[3][1] - m.matrix[3][0] * m.matrix[2][1];
  Type Coef22 = m.matrix[1][0] * m.matrix[3][1] - m.matrix[3][0] * m.matrix[1][1];
  Type Coef23 = m.matrix[1][0] * m.matrix[2][1] - m.matrix[2][0] * m.matrix[1][1];

  Vector<Type, 4> Fac0(Coef00, Coef00, Coef02, Coef03);
  Vector<Type, 4> Fac1(Coef04, Coef04, Coef06, Coef07);
  Vector<Type, 4> Fac2(Coef08, Coef08, Coef10, Coef11);
  Vector<Type, 4> Fac3(Coef12, Coef12, Coef14, Coef15);
  Vector<Type, 4> Fac4(Coef16, Coef16, Coef18, Coef19);
  Vector<Type, 4> Fac5(Coef20, Coef20, Coef22, Coef23);

  Vector<Type, 4> Vec0(m.matrix[1][0], m.matrix[0][0], m.matrix[0][0], m.matrix[0][0]);
  Vector<Type, 4> Vec1(m.matrix[1][1], m.matrix[0][1], m.matrix[0][1], m.matrix[0][1]);
  Vector<Type, 4> Vec2(m.matrix[1][2], m.matrix[0][2], m.matrix[0][2], m.matrix[0][2]);
  Vector<Type, 4> Vec3(m.matrix[1][3], m.matrix[0][3], m.matrix[0][3], m.matrix[0][3]);

  Vector<Type, 4> Inv0 = ComponentProduct(Vec1, Fac0) - ComponentProduct(Vec2, Fac1) + ComponentProduct(Vec3, Fac2);
  Vector<Type, 4> Inv1 = ComponentProduct(Vec0, Fac0) - ComponentProduct(Vec2, Fac3) + ComponentProduct(Vec3, Fac4);
  Vector<Type, 4> Inv2 = ComponentProduct(Vec0, Fac1) - ComponentProduct(Vec1, Fac3) + ComponentProduct(Vec3, Fac5);
  Vector<Type, 4> Inv3 = ComponentProduct(Vec0, Fac2) - ComponentProduct(Vec1, Fac4) + ComponentProduct(Vec2, Fac5);

  Vector<Type, 4> SignA(+1, -1, +1, -1);
  Vector<Type, 4> SignB(-1, +1, -1, +1);
  Vector<Type, 4> Col1 = ComponentProduct(Inv0, SignA);
  Vector<Type, 4> Col2 = ComponentProduct(Inv1, SignB);
  Vector<Type, 4> Col3 = ComponentProduct(Inv2, SignA);
  Vector<Type, 4> Col4 = ComponentProduct(Inv3, SignB);
  Matrix<Type, 4, 4>* inverse = new Matrix<Type, 4, 4>();
  for (int row = 1; row <= 4; ++row)
  {
    (*inverse)(1, row) = Col1(row);
    (*inverse)(2, row) = Col2(row);
    (*inverse)(3, row) = Col3(row);
    (*inverse)(4, row) = Col4(row);
  }

  Vector<Type, 4> Row0(inverse->matrix[0][0], inverse->matrix[1][0], inverse->matrix[2][0], inverse->matrix[3][0]);

  Vector<Type, 4> Dot0(ComponentProduct(m.GetRow(1), Row0));
  Type Dot1 = (Dot0(1) + Dot0(2)) + (Dot0(3) + Dot0(4));

  Type OneOverDeterminant = static_cast<Type>(1) / Dot1;

  (*inverse) *= OneOverDeterminant;
  return inverse;
}

FLOATmatrix2D_* FLOATmatrix2D_new()
{
  return (FLOATmatrix2D_*)(new FLOATmatrix2D());
}

FLOATmatrix2D_* FLOATmatrix2D_new_x(FLOAT x)
{
  return (FLOATmatrix2D_*)(new FLOATmatrix2D(x));
}

FLOATmatrix2D_* FLOATmatrix2D_clone(const FLOATmatrix2D_* p)
{
  return (FLOATmatrix2D_*)(new FLOATmatrix2D(*((const FLOATmatrix2D*)p)));
}

void FLOATmatrix2D_delete(FLOATmatrix2D_* p)
{
  delete ((FLOATmatrix2D*)p);
}

FLOAT* FLOATmatrix2D_Element(FLOATmatrix2D_* p, INDEX r, INDEX c)
{
  return &( (*((FLOATmatrix2D*)p))(r, c) );
}

FLOAT FLOATmatrix2D_Element_const(const FLOATmatrix2D_* p, INDEX r, INDEX c)
{
  return (*((const FLOATmatrix2D*)p))(r, c);
}

FLOATmatrix2D_* FLOATmatrix2D_Transposed(const FLOATmatrix2D_* p)
{
  FLOATmatrix2D result = !(*((const FLOATmatrix2D*)p));
  return (FLOATmatrix2D_*)(new FLOATmatrix2D(result));
}

void FLOATmatrix2D_AssignTransposed(FLOATmatrix2D_* a, const FLOATmatrix2D_* b)
{
  (*((FLOATmatrix2D*)a)) != (*((const FLOATmatrix2D*)b));
}

FLOATmatrix2D_* FLOATmatrix2D_Plus(const FLOATmatrix2D_* a, const FLOATmatrix2D_* b)
{
  FLOATmatrix2D result = (*((const FLOATmatrix2D*)a)) + (*((const FLOATmatrix2D*)b));
  return (FLOATmatrix2D_*)(new FLOATmatrix2D(result));
}

void FLOATmatrix2D_PlusInplace(FLOATmatrix2D_* a, const FLOATmatrix2D_* b)
{
  (*((FLOATmatrix2D*)a)) += (*((const FLOATmatrix2D*)b));
}

FLOATmatrix2D_* FLOATmatrix2D_Minus(const FLOATmatrix2D_* a, const FLOATmatrix2D_* b)
{
  FLOATmatrix2D result = (*((const FLOATmatrix2D*)a)) - (*((const FLOATmatrix2D*)b));
  return (FLOATmatrix2D_*)(new FLOATmatrix2D(result));
}

void FLOATmatrix2D_MinusInplace(FLOATmatrix2D_* a, const FLOATmatrix2D_* b)
{
  (*((FLOATmatrix2D*)a)) -= (*((const FLOATmatrix2D*)b));
}

FLOATmatrix2D_* FLOATmatrix2D_Multiply(const FLOATmatrix2D_* a, const FLOATmatrix2D_* b)
{
  FLOATmatrix2D result = (*((const FLOATmatrix2D*)a)) * (*((const FLOATmatrix2D*)b));
  return (FLOATmatrix2D_*)(new FLOATmatrix2D(result));
}

void FLOATmatrix2D_MultiplyInplace(FLOATmatrix2D_* a, const FLOATmatrix2D_* b)
{
  (*((FLOATmatrix2D*)a)) *= (*((const FLOATmatrix2D*)b));
}

FLOATmatrix2D_* FLOATmatrix2D_Multiply_scalar(const FLOATmatrix2D_* a, FLOAT b)
{
  FLOATmatrix2D result = (*((const FLOATmatrix2D*)a)) * b;
  return (FLOATmatrix2D_*)(new FLOATmatrix2D(result));
}

void FLOATmatrix2D_MultiplyInplace_scalar(FLOATmatrix2D_* a, FLOAT b)
{
  (*((FLOATmatrix2D*)a)) *= b;
}

FLOATmatrix2D_* FLOATmatrix2D_Divide_scalar(const FLOATmatrix2D_* a, FLOAT b)
{
  FLOATmatrix2D result = (*((const FLOATmatrix2D*)a)) / b;
  return (FLOATmatrix2D_*)(new FLOATmatrix2D(result));
}

void FLOATmatrix2D_DivideInplace_scalar(FLOATmatrix2D_* a, FLOAT b)
{
  (*((FLOATmatrix2D*)a)) /= b;
}

void FLOATmatrix2D_Diagonal_scalar(FLOATmatrix2D_* a, FLOAT b)
{
  ((FLOATmatrix2D*)a)->Diagonal(b);
}

void FLOATmatrix2D_Diagonal(FLOATmatrix2D_* a, const FLOAT2D_* b)
{
  ((FLOATmatrix2D*)a)->Diagonal(*((const FLOAT2D*)b));
}

FLOAT2D_* FLOATmatrix2D_GetRow(const FLOATmatrix2D_* p, INDEX r)
{
  FLOAT2D result = ((FLOATmatrix2D*)p)->GetRow(r);
  return (FLOAT2D_*)(new FLOAT2D(result));
}

FLOAT2D_* FLOATmatrix2D_GetColumn(const FLOATmatrix2D_* p, INDEX c)
{
  FLOAT2D result = ((FLOATmatrix2D*)p)->GetColumn(c);
  return (FLOAT2D_*)(new FLOAT2D(result));
}

static void sehFLOATmatrix2D_extract(CTStream_* s, FLOATmatrix2D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((FLOATmatrix2D*)p));
  SECAPI_CATCH
}

void FLOATmatrix2D_extract(CTStream_* s, FLOATmatrix2D_* p)
{
  STREAM_TRY
  sehFLOATmatrix2D_extract(s, p);
  STREAM_CATCH
}

static void sehFLOATmatrix2D_insert(CTStream_* s, FLOATmatrix2D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((FLOATmatrix2D*)p));
  SECAPI_CATCH
}

void FLOATmatrix2D_insert(CTStream_* s, FLOATmatrix2D_* p)
{
  STREAM_TRY
  sehFLOATmatrix2D_insert(s, p);
  STREAM_CATCH
}

FLOATmatrix3D_* FLOATmatrix3D_new()
{
  return (FLOATmatrix3D_*)(new FLOATmatrix3D());
}

FLOATmatrix3D_* FLOATmatrix3D_new_x(FLOAT x)
{
  return (FLOATmatrix3D_*)(new FLOATmatrix3D(x));
}

FLOATmatrix3D_* FLOATmatrix3D_clone(const FLOATmatrix3D_* p)
{
  return (FLOATmatrix3D_*)(new FLOATmatrix3D(*((const FLOATmatrix3D*)p)));
}

void FLOATmatrix3D_delete(FLOATmatrix3D_* p)
{
  delete ((FLOATmatrix3D*)p);
}

FLOAT* FLOATmatrix3D_Element(FLOATmatrix3D_* p, INDEX r, INDEX c)
{
  return &( (*((FLOATmatrix3D*)p))(r, c) );
}

FLOAT FLOATmatrix3D_Element_const(const FLOATmatrix3D_* p, INDEX r, INDEX c)
{
  return (*((const FLOATmatrix3D*)p))(r, c);
}

FLOATmatrix3D_* FLOATmatrix3D_Transposed(const FLOATmatrix3D_* p)
{
  FLOATmatrix3D result = !(*((const FLOATmatrix3D*)p));
  return (FLOATmatrix3D_*)(new FLOATmatrix3D(result));
}

void FLOATmatrix3D_AssignTransposed(FLOATmatrix3D_* a, const FLOATmatrix3D_* b)
{
  (*((FLOATmatrix3D*)a)) != (*((const FLOATmatrix3D*)b));
}

FLOATmatrix3D_* FLOATmatrix3D_Plus(const FLOATmatrix3D_* a, const FLOATmatrix3D_* b)
{
  FLOATmatrix3D result = (*((const FLOATmatrix3D*)a)) + (*((const FLOATmatrix3D*)b));
  return (FLOATmatrix3D_*)(new FLOATmatrix3D(result));
}

void FLOATmatrix3D_PlusInplace(FLOATmatrix3D_* a, const FLOATmatrix3D_* b)
{
  (*((FLOATmatrix3D*)a)) += (*((const FLOATmatrix3D*)b));
}

FLOATmatrix3D_* FLOATmatrix3D_Minus(const FLOATmatrix3D_* a, const FLOATmatrix3D_* b)
{
  FLOATmatrix3D result = (*((const FLOATmatrix3D*)a)) - (*((const FLOATmatrix3D*)b));
  return (FLOATmatrix3D_*)(new FLOATmatrix3D(result));
}

void FLOATmatrix3D_MinusInplace(FLOATmatrix3D_* a, const FLOATmatrix3D_* b)
{
  (*((FLOATmatrix3D*)a)) -= (*((const FLOATmatrix3D*)b));
}

FLOATmatrix3D_* FLOATmatrix3D_Multiply(const FLOATmatrix3D_* a, const FLOATmatrix3D_* b)
{
  FLOATmatrix3D result = (*((const FLOATmatrix3D*)a)) * (*((const FLOATmatrix3D*)b));
  return (FLOATmatrix3D_*)(new FLOATmatrix3D(result));
}

void FLOATmatrix3D_MultiplyInplace(FLOATmatrix3D_* a, const FLOATmatrix3D_* b)
{
  (*((FLOATmatrix3D*)a)) *= (*((const FLOATmatrix3D*)b));
}

FLOATmatrix3D_* FLOATmatrix3D_Multiply_scalar(const FLOATmatrix3D_* a, FLOAT b)
{
  FLOATmatrix3D result = (*((const FLOATmatrix3D*)a)) * b;
  return (FLOATmatrix3D_*)(new FLOATmatrix3D(result));
}

void FLOATmatrix3D_MultiplyInplace_scalar(FLOATmatrix3D_* a, FLOAT b)
{
  (*((FLOATmatrix3D*)a)) *= b;
}

FLOATmatrix3D_* FLOATmatrix3D_Divide_scalar(const FLOATmatrix3D_* a, FLOAT b)
{
  FLOATmatrix3D result = (*((const FLOATmatrix3D*)a)) / b;
  return (FLOATmatrix3D_*)(new FLOATmatrix3D(result));
}

void FLOATmatrix3D_DivideInplace_scalar(FLOATmatrix3D_* a, FLOAT b)
{
  (*((FLOATmatrix3D*)a)) /= b;
}

void FLOATmatrix3D_Diagonal_scalar(FLOATmatrix3D_* a, FLOAT b)
{
  ((FLOATmatrix3D*)a)->Diagonal(b);
}

void FLOATmatrix3D_Diagonal(FLOATmatrix3D_* a, const FLOAT3D_* b)
{
  ((FLOATmatrix3D*)a)->Diagonal(*((const FLOAT3D*)b));
}

FLOAT3D_* FLOATmatrix3D_GetRow(const FLOATmatrix3D_* p, INDEX r)
{
  FLOAT3D result = ((FLOATmatrix3D*)p)->GetRow(r);
  return (FLOAT3D_*)(new FLOAT3D(result));
}

FLOAT3D_* FLOATmatrix3D_GetColumn(const FLOATmatrix3D_* p, INDEX c)
{
  FLOAT3D result = ((FLOATmatrix3D*)p)->GetColumn(c);
  return (FLOAT3D_*)(new FLOAT3D(result));
}

static void sehFLOATmatrix3D_extract(CTStream_* s, FLOATmatrix3D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((FLOATmatrix3D*)p));
  SECAPI_CATCH
}

void FLOATmatrix3D_extract(CTStream_* s, FLOATmatrix3D_* p)
{
  STREAM_TRY
  sehFLOATmatrix3D_extract(s, p);
  STREAM_CATCH
}

static void sehFLOATmatrix3D_insert(CTStream_* s, FLOATmatrix3D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((FLOATmatrix3D*)p));
  SECAPI_CATCH
}

void FLOATmatrix3D_insert(CTStream_* s, FLOATmatrix3D_* p)
{
  STREAM_TRY
  sehFLOATmatrix3D_insert(s, p);
  STREAM_CATCH
}

FLOAT FLOATmatrix3D_Determinant(const FLOATmatrix3D_* p)
{
  return Determinant(*((const FLOATmatrix3D*)p));
}

FLOATmatrix3D_* FLOATmatrix3D_InverseMatrix(const FLOATmatrix3D_* p)
{
  return (FLOATmatrix3D_*)InverseMatrix(*((const FLOATmatrix3D*)p));
}

FLOATmatrix4D_* FLOATmatrix4D_new()
{
  return (FLOATmatrix4D_*)(new FLOATmatrix4D());
}

FLOATmatrix4D_* FLOATmatrix4D_new_x(FLOAT x)
{
  return (FLOATmatrix4D_*)(new FLOATmatrix4D(x));
}

FLOATmatrix4D_* FLOATmatrix4D_clone(const FLOATmatrix4D_* p)
{
  return (FLOATmatrix4D_*)(new FLOATmatrix4D(*((const FLOATmatrix4D*)p)));
}

void FLOATmatrix4D_delete(FLOATmatrix4D_* p)
{
  delete ((FLOATmatrix4D*)p);
}

FLOAT* FLOATmatrix4D_Element(FLOATmatrix4D_* p, INDEX r, INDEX c)
{
  return &( (*((FLOATmatrix4D*)p))(r, c) );
}

FLOAT FLOATmatrix4D_Element_const(const FLOATmatrix4D_* p, INDEX r, INDEX c)
{
  return (*((const FLOATmatrix4D*)p))(r, c);
}

FLOATmatrix4D_* FLOATmatrix4D_Transposed(const FLOATmatrix4D_* p)
{
  FLOATmatrix4D result = !(*((const FLOATmatrix4D*)p));
  return (FLOATmatrix4D_*)(new FLOATmatrix4D(result));
}

void FLOATmatrix4D_AssignTransposed(FLOATmatrix4D_* a, const FLOATmatrix4D_* b)
{
  (*((FLOATmatrix4D*)a)) != (*((const FLOATmatrix4D*)b));
}

FLOATmatrix4D_* FLOATmatrix4D_Plus(const FLOATmatrix4D_* a, const FLOATmatrix4D_* b)
{
  FLOATmatrix4D result = (*((const FLOATmatrix4D*)a)) + (*((const FLOATmatrix4D*)b));
  return (FLOATmatrix4D_*)(new FLOATmatrix4D(result));
}

void FLOATmatrix4D_PlusInplace(FLOATmatrix4D_* a, const FLOATmatrix4D_* b)
{
  (*((FLOATmatrix4D*)a)) += (*((const FLOATmatrix4D*)b));
}

FLOATmatrix4D_* FLOATmatrix4D_Minus(const FLOATmatrix4D_* a, const FLOATmatrix4D_* b)
{
  FLOATmatrix4D result = (*((const FLOATmatrix4D*)a)) - (*((const FLOATmatrix4D*)b));
  return (FLOATmatrix4D_*)(new FLOATmatrix4D(result));
}

void FLOATmatrix4D_MinusInplace(FLOATmatrix4D_* a, const FLOATmatrix4D_* b)
{
  (*((FLOATmatrix4D*)a)) -= (*((const FLOATmatrix4D*)b));
}

FLOATmatrix4D_* FLOATmatrix4D_Multiply(const FLOATmatrix4D_* a, const FLOATmatrix4D_* b)
{
  FLOATmatrix4D result = (*((const FLOATmatrix4D*)a)) * (*((const FLOATmatrix4D*)b));
  return (FLOATmatrix4D_*)(new FLOATmatrix4D(result));
}

void FLOATmatrix4D_MultiplyInplace(FLOATmatrix4D_* a, const FLOATmatrix4D_* b)
{
  (*((FLOATmatrix4D*)a)) *= (*((const FLOATmatrix4D*)b));
}

FLOATmatrix4D_* FLOATmatrix4D_Multiply_scalar(const FLOATmatrix4D_* a, FLOAT b)
{
  FLOATmatrix4D result = (*((const FLOATmatrix4D*)a)) * b;
  return (FLOATmatrix4D_*)(new FLOATmatrix4D(result));
}

void FLOATmatrix4D_MultiplyInplace_scalar(FLOATmatrix4D_* a, FLOAT b)
{
  (*((FLOATmatrix4D*)a)) *= b;
}

FLOATmatrix4D_* FLOATmatrix4D_Divide_scalar(const FLOATmatrix4D_* a, FLOAT b)
{
  FLOATmatrix4D result = (*((const FLOATmatrix4D*)a)) / b;
  return (FLOATmatrix4D_*)(new FLOATmatrix4D(result));
}

void FLOATmatrix4D_DivideInplace_scalar(FLOATmatrix4D_* a, FLOAT b)
{
  (*((FLOATmatrix4D*)a)) /= b;
}

void FLOATmatrix4D_Diagonal_scalar(FLOATmatrix4D_* a, FLOAT b)
{
  ((FLOATmatrix4D*)a)->Diagonal(b);
}

void FLOATmatrix4D_Diagonal(FLOATmatrix4D_* a, const FLOAT4D_* b)
{
  ((FLOATmatrix4D*)a)->Diagonal(*((const FLOAT4D*)b));
}

FLOAT4D_* FLOATmatrix4D_GetRow(const FLOATmatrix4D_* p, INDEX r)
{
  FLOAT4D result = ((FLOATmatrix4D*)p)->GetRow(r);
  return (FLOAT4D_*)(new FLOAT4D(result));
}

FLOAT4D_* FLOATmatrix4D_GetColumn(const FLOATmatrix4D_* p, INDEX c)
{
  FLOAT4D result = ((FLOATmatrix4D*)p)->GetColumn(c);
  return (FLOAT4D_*)(new FLOAT4D(result));
}

static void sehFLOATmatrix4D_extract(CTStream_* s, FLOATmatrix4D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((FLOATmatrix4D*)p));
  SECAPI_CATCH
}

void FLOATmatrix4D_extract(CTStream_* s, FLOATmatrix4D_* p)
{
  STREAM_TRY
  sehFLOATmatrix4D_extract(s, p);
  STREAM_CATCH
}

static void sehFLOATmatrix4D_insert(CTStream_* s, FLOATmatrix4D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((FLOATmatrix4D*)p));
  SECAPI_CATCH
}

void FLOATmatrix4D_insert(CTStream_* s, FLOATmatrix4D_* p)
{
  STREAM_TRY
  sehFLOATmatrix4D_insert(s, p);
  STREAM_CATCH
}

FLOATmatrix4D_* FLOATmatrix4D_InverseMatrix(const FLOATmatrix4D_* p)
{
  return (FLOATmatrix4D_*)InverseMatrix(*((const FLOATmatrix4D*)p));
}

DOUBLEmatrix2D_* DOUBLEmatrix2D_new()
{
  return (DOUBLEmatrix2D_*)(new DOUBLEmatrix2D());
}

DOUBLEmatrix2D_* DOUBLEmatrix2D_new_x(DOUBLE x)
{
  return (DOUBLEmatrix2D_*)(new DOUBLEmatrix2D(x));
}

DOUBLEmatrix2D_* DOUBLEmatrix2D_clone(const DOUBLEmatrix2D_* p)
{
  return (DOUBLEmatrix2D_*)(new DOUBLEmatrix2D(*((const DOUBLEmatrix2D*)p)));
}

void DOUBLEmatrix2D_delete(DOUBLEmatrix2D_* p)
{
  delete ((DOUBLEmatrix2D*)p);
}

DOUBLE* DOUBLEmatrix2D_Element(DOUBLEmatrix2D_* p, INDEX r, INDEX c)
{
  return &( (*((DOUBLEmatrix2D*)p))(r, c) );
}

DOUBLE DOUBLEmatrix2D_Element_const(const DOUBLEmatrix2D_* p, INDEX r, INDEX c)
{
  return (*((const DOUBLEmatrix2D*)p))(r, c);
}

DOUBLEmatrix2D_* DOUBLEmatrix2D_Transposed(const DOUBLEmatrix2D_* p)
{
  DOUBLEmatrix2D result = !(*((const DOUBLEmatrix2D*)p));
  return (DOUBLEmatrix2D_*)(new DOUBLEmatrix2D(result));
}

void DOUBLEmatrix2D_AssignTransposed(DOUBLEmatrix2D_* a, const DOUBLEmatrix2D_* b)
{
  (*((DOUBLEmatrix2D*)a)) != (*((const DOUBLEmatrix2D*)b));
}

DOUBLEmatrix2D_* DOUBLEmatrix2D_Plus(const DOUBLEmatrix2D_* a, const DOUBLEmatrix2D_* b)
{
  DOUBLEmatrix2D result = (*((const DOUBLEmatrix2D*)a)) + (*((const DOUBLEmatrix2D*)b));
  return (DOUBLEmatrix2D_*)(new DOUBLEmatrix2D(result));
}

void DOUBLEmatrix2D_PlusInplace(DOUBLEmatrix2D_* a, const DOUBLEmatrix2D_* b)
{
  (*((DOUBLEmatrix2D*)a)) += (*((const DOUBLEmatrix2D*)b));
}

DOUBLEmatrix2D_* DOUBLEmatrix2D_Minus(const DOUBLEmatrix2D_* a, const DOUBLEmatrix2D_* b)
{
  DOUBLEmatrix2D result = (*((const DOUBLEmatrix2D*)a)) - (*((const DOUBLEmatrix2D*)b));
  return (DOUBLEmatrix2D_*)(new DOUBLEmatrix2D(result));
}

void DOUBLEmatrix2D_MinusInplace(DOUBLEmatrix2D_* a, const DOUBLEmatrix2D_* b)
{
  (*((DOUBLEmatrix2D*)a)) -= (*((const DOUBLEmatrix2D*)b));
}

DOUBLEmatrix2D_* DOUBLEmatrix2D_Multiply(const DOUBLEmatrix2D_* a, const DOUBLEmatrix2D_* b)
{
  DOUBLEmatrix2D result = (*((const DOUBLEmatrix2D*)a)) * (*((const DOUBLEmatrix2D*)b));
  return (DOUBLEmatrix2D_*)(new DOUBLEmatrix2D(result));
}

void DOUBLEmatrix2D_MultiplyInplace(DOUBLEmatrix2D_* a, const DOUBLEmatrix2D_* b)
{
  (*((DOUBLEmatrix2D*)a)) *= (*((const DOUBLEmatrix2D*)b));
}

DOUBLEmatrix2D_* DOUBLEmatrix2D_Multiply_scalar(const DOUBLEmatrix2D_* a, DOUBLE b)
{
  DOUBLEmatrix2D result = (*((const DOUBLEmatrix2D*)a)) * b;
  return (DOUBLEmatrix2D_*)(new DOUBLEmatrix2D(result));
}

void DOUBLEmatrix2D_MultiplyInplace_scalar(DOUBLEmatrix2D_* a, DOUBLE b)
{
  (*((DOUBLEmatrix2D*)a)) *= b;
}

DOUBLEmatrix2D_* DOUBLEmatrix2D_Divide_scalar(const DOUBLEmatrix2D_* a, DOUBLE b)
{
  DOUBLEmatrix2D result = (*((const DOUBLEmatrix2D*)a)) / b;
  return (DOUBLEmatrix2D_*)(new DOUBLEmatrix2D(result));
}

void DOUBLEmatrix2D_DivideInplace_scalar(DOUBLEmatrix2D_* a, DOUBLE b)
{
  (*((DOUBLEmatrix2D*)a)) /= b;
}

void DOUBLEmatrix2D_Diagonal_scalar(DOUBLEmatrix2D_* a, DOUBLE b)
{
  ((DOUBLEmatrix2D*)a)->Diagonal(b);
}

void DOUBLEmatrix2D_Diagonal(DOUBLEmatrix2D_* a, const DOUBLE2D_* b)
{
  ((DOUBLEmatrix2D*)a)->Diagonal(*((const DOUBLE2D*)b));
}

DOUBLE2D_* DOUBLEmatrix2D_GetRow(const DOUBLEmatrix2D_* p, INDEX r)
{
  DOUBLE2D result = ((DOUBLEmatrix2D*)p)->GetRow(r);
  return (DOUBLE2D_*)(new DOUBLE2D(result));
}

DOUBLE2D_* DOUBLEmatrix2D_GetColumn(const DOUBLEmatrix2D_* p, INDEX c)
{
  DOUBLE2D result = ((DOUBLEmatrix2D*)p)->GetColumn(c);
  return (DOUBLE2D_*)(new DOUBLE2D(result));
}

static void sehDOUBLEmatrix2D_extract(CTStream_* s, DOUBLEmatrix2D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((DOUBLEmatrix2D*)p));
  SECAPI_CATCH
}

void DOUBLEmatrix2D_extract(CTStream_* s, DOUBLEmatrix2D_* p)
{
  STREAM_TRY
  sehDOUBLEmatrix2D_extract(s, p);
  STREAM_CATCH
}

static void sehDOUBLEmatrix2D_insert(CTStream_* s, DOUBLEmatrix2D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((DOUBLEmatrix2D*)p));
  SECAPI_CATCH
}

void DOUBLEmatrix2D_insert(CTStream_* s, DOUBLEmatrix2D_* p)
{
  STREAM_TRY
  sehDOUBLEmatrix2D_insert(s, p);
  STREAM_CATCH
}

DOUBLEmatrix3D_* DOUBLEmatrix3D_new()
{
  return (DOUBLEmatrix3D_*)(new DOUBLEmatrix3D());
}

DOUBLEmatrix3D_* DOUBLEmatrix3D_new_x(DOUBLE x)
{
  return (DOUBLEmatrix3D_*)(new DOUBLEmatrix3D(x));
}

DOUBLEmatrix3D_* DOUBLEmatrix3D_clone(const DOUBLEmatrix3D_* p)
{
  return (DOUBLEmatrix3D_*)(new DOUBLEmatrix3D(*((const DOUBLEmatrix3D*)p)));
}

void DOUBLEmatrix3D_delete(DOUBLEmatrix3D_* p)
{
  delete ((DOUBLEmatrix3D*)p);
}

DOUBLE* DOUBLEmatrix3D_Element(DOUBLEmatrix3D_* p, INDEX r, INDEX c)
{
  return &( (*((DOUBLEmatrix3D*)p))(r, c) );
}

DOUBLE DOUBLEmatrix3D_Element_const(const DOUBLEmatrix3D_* p, INDEX r, INDEX c)
{
  return (*((const DOUBLEmatrix3D*)p))(r, c);
}

DOUBLEmatrix3D_* DOUBLEmatrix3D_Transposed(const DOUBLEmatrix3D_* p)
{
  DOUBLEmatrix3D result = !(*((const DOUBLEmatrix3D*)p));
  return (DOUBLEmatrix3D_*)(new DOUBLEmatrix3D(result));
}

void DOUBLEmatrix3D_AssignTransposed(DOUBLEmatrix3D_* a, const DOUBLEmatrix3D_* b)
{
  (*((DOUBLEmatrix3D*)a)) != (*((const DOUBLEmatrix3D*)b));
}

DOUBLEmatrix3D_* DOUBLEmatrix3D_Plus(const DOUBLEmatrix3D_* a, const DOUBLEmatrix3D_* b)
{
  DOUBLEmatrix3D result = (*((const DOUBLEmatrix3D*)a)) + (*((const DOUBLEmatrix3D*)b));
  return (DOUBLEmatrix3D_*)(new DOUBLEmatrix3D(result));
}

void DOUBLEmatrix3D_PlusInplace(DOUBLEmatrix3D_* a, const DOUBLEmatrix3D_* b)
{
  (*((DOUBLEmatrix3D*)a)) += (*((const DOUBLEmatrix3D*)b));
}

DOUBLEmatrix3D_* DOUBLEmatrix3D_Minus(const DOUBLEmatrix3D_* a, const DOUBLEmatrix3D_* b)
{
  DOUBLEmatrix3D result = (*((const DOUBLEmatrix3D*)a)) - (*((const DOUBLEmatrix3D*)b));
  return (DOUBLEmatrix3D_*)(new DOUBLEmatrix3D(result));
}

void DOUBLEmatrix3D_MinusInplace(DOUBLEmatrix3D_* a, const DOUBLEmatrix3D_* b)
{
  (*((DOUBLEmatrix3D*)a)) -= (*((const DOUBLEmatrix3D*)b));
}

DOUBLEmatrix3D_* DOUBLEmatrix3D_Multiply(const DOUBLEmatrix3D_* a, const DOUBLEmatrix3D_* b)
{
  DOUBLEmatrix3D result = (*((const DOUBLEmatrix3D*)a)) * (*((const DOUBLEmatrix3D*)b));
  return (DOUBLEmatrix3D_*)(new DOUBLEmatrix3D(result));
}

void DOUBLEmatrix3D_MultiplyInplace(DOUBLEmatrix3D_* a, const DOUBLEmatrix3D_* b)
{
  (*((DOUBLEmatrix3D*)a)) *= (*((const DOUBLEmatrix3D*)b));
}

DOUBLEmatrix3D_* DOUBLEmatrix3D_Multiply_scalar(const DOUBLEmatrix3D_* a, DOUBLE b)
{
  DOUBLEmatrix3D result = (*((const DOUBLEmatrix3D*)a)) * b;
  return (DOUBLEmatrix3D_*)(new DOUBLEmatrix3D(result));
}

void DOUBLEmatrix3D_MultiplyInplace_scalar(DOUBLEmatrix3D_* a, DOUBLE b)
{
  (*((DOUBLEmatrix3D*)a)) *= b;
}

DOUBLEmatrix3D_* DOUBLEmatrix3D_Divide_scalar(const DOUBLEmatrix3D_* a, DOUBLE b)
{
  DOUBLEmatrix3D result = (*((const DOUBLEmatrix3D*)a)) / b;
  return (DOUBLEmatrix3D_*)(new DOUBLEmatrix3D(result));
}

void DOUBLEmatrix3D_DivideInplace_scalar(DOUBLEmatrix3D_* a, DOUBLE b)
{
  (*((DOUBLEmatrix3D*)a)) /= b;
}

void DOUBLEmatrix3D_Diagonal_scalar(DOUBLEmatrix3D_* a, DOUBLE b)
{
  ((DOUBLEmatrix3D*)a)->Diagonal(b);
}

void DOUBLEmatrix3D_Diagonal(DOUBLEmatrix3D_* a, const DOUBLE3D_* b)
{
  ((DOUBLEmatrix3D*)a)->Diagonal(*((const DOUBLE3D*)b));
}

DOUBLE3D_* DOUBLEmatrix3D_GetRow(const DOUBLEmatrix3D_* p, INDEX r)
{
  DOUBLE3D result = ((DOUBLEmatrix3D*)p)->GetRow(r);
  return (DOUBLE3D_*)(new DOUBLE3D(result));
}

DOUBLE3D_* DOUBLEmatrix3D_GetColumn(const DOUBLEmatrix3D_* p, INDEX c)
{
  DOUBLE3D result = ((DOUBLEmatrix3D*)p)->GetColumn(c);
  return (DOUBLE3D_*)(new DOUBLE3D(result));
}

static void sehDOUBLEmatrix3D_extract(CTStream_* s, DOUBLEmatrix3D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((DOUBLEmatrix3D*)p));
  SECAPI_CATCH
}

void DOUBLEmatrix3D_extract(CTStream_* s, DOUBLEmatrix3D_* p)
{
  STREAM_TRY
  sehDOUBLEmatrix3D_extract(s, p);
  STREAM_CATCH
}

static void sehDOUBLEmatrix3D_insert(CTStream_* s, DOUBLEmatrix3D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((DOUBLEmatrix3D*)p));
  SECAPI_CATCH
}

void DOUBLEmatrix3D_insert(CTStream_* s, DOUBLEmatrix3D_* p)
{
  STREAM_TRY
  sehDOUBLEmatrix3D_insert(s, p);
  STREAM_CATCH
}

DOUBLE DOUBLEmatrix3D_Determinant(const DOUBLEmatrix3D_* p)
{
  return Determinant(*((const DOUBLEmatrix3D*)p));
}

DOUBLEmatrix3D_* DOUBLEmatrix3D_InverseMatrix(const DOUBLEmatrix3D_* p)
{
  return (DOUBLEmatrix3D_*)InverseMatrix(*((const DOUBLEmatrix3D*)p));
}

DOUBLEmatrix4D_* DOUBLEmatrix4D_new()
{
  return (DOUBLEmatrix4D_*)(new DOUBLEmatrix4D());
}

DOUBLEmatrix4D_* DOUBLEmatrix4D_new_x(DOUBLE x)
{
  return (DOUBLEmatrix4D_*)(new DOUBLEmatrix4D(x));
}

DOUBLEmatrix4D_* DOUBLEmatrix4D_clone(const DOUBLEmatrix4D_* p)
{
  return (DOUBLEmatrix4D_*)(new DOUBLEmatrix4D(*((const DOUBLEmatrix4D*)p)));
}

void DOUBLEmatrix4D_delete(DOUBLEmatrix4D_* p)
{
  delete ((DOUBLEmatrix4D*)p);
}

DOUBLE* DOUBLEmatrix4D_Element(DOUBLEmatrix4D_* p, INDEX r, INDEX c)
{
  return &( (*((DOUBLEmatrix4D*)p))(r, c) );
}

DOUBLE DOUBLEmatrix4D_Element_const(const DOUBLEmatrix4D_* p, INDEX r, INDEX c)
{
  return (*((const DOUBLEmatrix4D*)p))(r, c);
}

DOUBLEmatrix4D_* DOUBLEmatrix4D_Transposed(const DOUBLEmatrix4D_* p)
{
  DOUBLEmatrix4D result = !(*((const DOUBLEmatrix4D*)p));
  return (DOUBLEmatrix4D_*)(new DOUBLEmatrix4D(result));
}

void DOUBLEmatrix4D_AssignTransposed(DOUBLEmatrix4D_* a, const DOUBLEmatrix4D_* b)
{
  (*((DOUBLEmatrix4D*)a)) != (*((const DOUBLEmatrix4D*)b));
}

DOUBLEmatrix4D_* DOUBLEmatrix4D_Plus(const DOUBLEmatrix4D_* a, const DOUBLEmatrix4D_* b)
{
  DOUBLEmatrix4D result = (*((const DOUBLEmatrix4D*)a)) + (*((const DOUBLEmatrix4D*)b));
  return (DOUBLEmatrix4D_*)(new DOUBLEmatrix4D(result));
}

void DOUBLEmatrix4D_PlusInplace(DOUBLEmatrix4D_* a, const DOUBLEmatrix4D_* b)
{
  (*((DOUBLEmatrix4D*)a)) += (*((const DOUBLEmatrix4D*)b));
}

DOUBLEmatrix4D_* DOUBLEmatrix4D_Minus(const DOUBLEmatrix4D_* a, const DOUBLEmatrix4D_* b)
{
  DOUBLEmatrix4D result = (*((const DOUBLEmatrix4D*)a)) - (*((const DOUBLEmatrix4D*)b));
  return (DOUBLEmatrix4D_*)(new DOUBLEmatrix4D(result));
}

void DOUBLEmatrix4D_MinusInplace(DOUBLEmatrix4D_* a, const DOUBLEmatrix4D_* b)
{
  (*((DOUBLEmatrix4D*)a)) -= (*((const DOUBLEmatrix4D*)b));
}

DOUBLEmatrix4D_* DOUBLEmatrix4D_Multiply(const DOUBLEmatrix4D_* a, const DOUBLEmatrix4D_* b)
{
  DOUBLEmatrix4D result = (*((const DOUBLEmatrix4D*)a)) * (*((const DOUBLEmatrix4D*)b));
  return (DOUBLEmatrix4D_*)(new DOUBLEmatrix4D(result));
}

void DOUBLEmatrix4D_MultiplyInplace(DOUBLEmatrix4D_* a, const DOUBLEmatrix4D_* b)
{
  (*((DOUBLEmatrix4D*)a)) *= (*((const DOUBLEmatrix4D*)b));
}

DOUBLEmatrix4D_* DOUBLEmatrix4D_Multiply_scalar(const DOUBLEmatrix4D_* a, DOUBLE b)
{
  DOUBLEmatrix4D result = (*((const DOUBLEmatrix4D*)a)) * b;
  return (DOUBLEmatrix4D_*)(new DOUBLEmatrix4D(result));
}

void DOUBLEmatrix4D_MultiplyInplace_scalar(DOUBLEmatrix4D_* a, DOUBLE b)
{
  (*((DOUBLEmatrix4D*)a)) *= b;
}

DOUBLEmatrix4D_* DOUBLEmatrix4D_Divide_scalar(const DOUBLEmatrix4D_* a, DOUBLE b)
{
  DOUBLEmatrix4D result = (*((const DOUBLEmatrix4D*)a)) / b;
  return (DOUBLEmatrix4D_*)(new DOUBLEmatrix4D(result));
}

void DOUBLEmatrix4D_DivideInplace_scalar(DOUBLEmatrix4D_* a, DOUBLE b)
{
  (*((DOUBLEmatrix4D*)a)) /= b;
}

void DOUBLEmatrix4D_Diagonal_scalar(DOUBLEmatrix4D_* a, DOUBLE b)
{
  ((DOUBLEmatrix4D*)a)->Diagonal(b);
}

void DOUBLEmatrix4D_Diagonal(DOUBLEmatrix4D_* a, const DOUBLE4D_* b)
{
  ((DOUBLEmatrix4D*)a)->Diagonal(*((const DOUBLE4D*)b));
}

DOUBLE4D_* DOUBLEmatrix4D_GetRow(const DOUBLEmatrix4D_* p, INDEX r)
{
  DOUBLE4D result = ((DOUBLEmatrix4D*)p)->GetRow(r);
  return (DOUBLE4D_*)(new DOUBLE4D(result));
}

DOUBLE4D_* DOUBLEmatrix4D_GetColumn(const DOUBLEmatrix4D_* p, INDEX c)
{
  DOUBLE4D result = ((DOUBLEmatrix4D*)p)->GetColumn(c);
  return (DOUBLE4D_*)(new DOUBLE4D(result));
}

static void sehDOUBLEmatrix4D_extract(CTStream_* s, DOUBLEmatrix4D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((DOUBLEmatrix4D*)p));
  SECAPI_CATCH
}

void DOUBLEmatrix4D_extract(CTStream_* s, DOUBLEmatrix4D_* p)
{
  STREAM_TRY
  sehDOUBLEmatrix4D_extract(s, p);
  STREAM_CATCH
}

static void sehDOUBLEmatrix4D_insert(CTStream_* s, DOUBLEmatrix4D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((DOUBLEmatrix4D*)p));
  SECAPI_CATCH
}

void DOUBLEmatrix4D_insert(CTStream_* s, DOUBLEmatrix4D_* p)
{
  STREAM_TRY
  sehDOUBLEmatrix4D_insert(s, p);
  STREAM_CATCH
}

DOUBLEmatrix4D_* DOUBLEmatrix4D_InverseMatrix(const DOUBLEmatrix4D_* p)
{
  return (DOUBLEmatrix4D_*)InverseMatrix(*((const DOUBLEmatrix4D*)p));
}

INDEXmatrix2D_* INDEXmatrix2D_new()
{
  return (INDEXmatrix2D_*)(new INDEXmatrix2D());
}

INDEXmatrix2D_* INDEXmatrix2D_new_x(INDEX x)
{
  return (INDEXmatrix2D_*)(new INDEXmatrix2D(x));
}

INDEXmatrix2D_* INDEXmatrix2D_clone(const INDEXmatrix2D_* p)
{
  return (INDEXmatrix2D_*)(new INDEXmatrix2D(*((const INDEXmatrix2D*)p)));
}

void INDEXmatrix2D_delete(INDEXmatrix2D_* p)
{
  delete ((INDEXmatrix2D*)p);
}

INDEX* INDEXmatrix2D_Element(INDEXmatrix2D_* p, INDEX r, INDEX c)
{
  return &( (*((INDEXmatrix2D*)p))(r, c) );
}

INDEX INDEXmatrix2D_Element_const(const INDEXmatrix2D_* p, INDEX r, INDEX c)
{
  return (*((const INDEXmatrix2D*)p))(r, c);
}

INDEXmatrix2D_* INDEXmatrix2D_Transposed(const INDEXmatrix2D_* p)
{
  INDEXmatrix2D result = !(*((const INDEXmatrix2D*)p));
  return (INDEXmatrix2D_*)(new INDEXmatrix2D(result));
}

void INDEXmatrix2D_AssignTransposed(INDEXmatrix2D_* a, const INDEXmatrix2D_* b)
{
  (*((INDEXmatrix2D*)a)) != (*((const INDEXmatrix2D*)b));
}

INDEXmatrix2D_* INDEXmatrix2D_Plus(const INDEXmatrix2D_* a, const INDEXmatrix2D_* b)
{
  INDEXmatrix2D result = (*((const INDEXmatrix2D*)a)) + (*((const INDEXmatrix2D*)b));
  return (INDEXmatrix2D_*)(new INDEXmatrix2D(result));
}

void INDEXmatrix2D_PlusInplace(INDEXmatrix2D_* a, const INDEXmatrix2D_* b)
{
  (*((INDEXmatrix2D*)a)) += (*((const INDEXmatrix2D*)b));
}

INDEXmatrix2D_* INDEXmatrix2D_Minus(const INDEXmatrix2D_* a, const INDEXmatrix2D_* b)
{
  INDEXmatrix2D result = (*((const INDEXmatrix2D*)a)) - (*((const INDEXmatrix2D*)b));
  return (INDEXmatrix2D_*)(new INDEXmatrix2D(result));
}

void INDEXmatrix2D_MinusInplace(INDEXmatrix2D_* a, const INDEXmatrix2D_* b)
{
  (*((INDEXmatrix2D*)a)) -= (*((const INDEXmatrix2D*)b));
}

INDEXmatrix2D_* INDEXmatrix2D_Multiply(const INDEXmatrix2D_* a, const INDEXmatrix2D_* b)
{
  INDEXmatrix2D result = (*((const INDEXmatrix2D*)a)) * (*((const INDEXmatrix2D*)b));
  return (INDEXmatrix2D_*)(new INDEXmatrix2D(result));
}

void INDEXmatrix2D_MultiplyInplace(INDEXmatrix2D_* a, const INDEXmatrix2D_* b)
{
  (*((INDEXmatrix2D*)a)) *= (*((const INDEXmatrix2D*)b));
}

INDEXmatrix2D_* INDEXmatrix2D_Multiply_scalar(const INDEXmatrix2D_* a, INDEX b)
{
  INDEXmatrix2D result = (*((const INDEXmatrix2D*)a)) * b;
  return (INDEXmatrix2D_*)(new INDEXmatrix2D(result));
}

void INDEXmatrix2D_MultiplyInplace_scalar(INDEXmatrix2D_* a, INDEX b)
{
  (*((INDEXmatrix2D*)a)) *= b;
}

INDEXmatrix2D_* INDEXmatrix2D_Divide_scalar(const INDEXmatrix2D_* a, INDEX b)
{
  INDEXmatrix2D result = (*((const INDEXmatrix2D*)a)) / b;
  return (INDEXmatrix2D_*)(new INDEXmatrix2D(result));
}

void INDEXmatrix2D_DivideInplace_scalar(INDEXmatrix2D_* a, INDEX b)
{
  (*((INDEXmatrix2D*)a)) /= b;
}

void INDEXmatrix2D_Diagonal_scalar(INDEXmatrix2D_* a, INDEX b)
{
  ((INDEXmatrix2D*)a)->Diagonal(b);
}

void INDEXmatrix2D_Diagonal(INDEXmatrix2D_* a, const INDEX2D_* b)
{
  ((INDEXmatrix2D*)a)->Diagonal(*((const INDEX2D*)b));
}

INDEX2D_* INDEXmatrix2D_GetRow(const INDEXmatrix2D_* p, INDEX r)
{
  INDEX2D result = ((INDEXmatrix2D*)p)->GetRow(r);
  return (INDEX2D_*)(new INDEX2D(result));
}

INDEX2D_* INDEXmatrix2D_GetColumn(const INDEXmatrix2D_* p, INDEX c)
{
  INDEX2D result = ((INDEXmatrix2D*)p)->GetColumn(c);
  return (INDEX2D_*)(new INDEX2D(result));
}

static void sehINDEXmatrix2D_extract(CTStream_* s, INDEXmatrix2D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((INDEXmatrix2D*)p));
  SECAPI_CATCH
}

void INDEXmatrix2D_extract(CTStream_* s, INDEXmatrix2D_* p)
{
  STREAM_TRY
  sehINDEXmatrix2D_extract(s, p);
  STREAM_CATCH
}

static void sehINDEXmatrix2D_insert(CTStream_* s, INDEXmatrix2D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((INDEXmatrix2D*)p));
  SECAPI_CATCH
}

void INDEXmatrix2D_insert(CTStream_* s, INDEXmatrix2D_* p)
{
  STREAM_TRY
  sehINDEXmatrix2D_insert(s, p);
  STREAM_CATCH
}

INDEXmatrix3D_* INDEXmatrix3D_new()
{
  return (INDEXmatrix3D_*)(new INDEXmatrix3D());
}

INDEXmatrix3D_* INDEXmatrix3D_new_x(INDEX x)
{
  return (INDEXmatrix3D_*)(new INDEXmatrix3D(x));
}

INDEXmatrix3D_* INDEXmatrix3D_clone(const INDEXmatrix3D_* p)
{
  return (INDEXmatrix3D_*)(new INDEXmatrix3D(*((const INDEXmatrix3D*)p)));
}

void INDEXmatrix3D_delete(INDEXmatrix3D_* p)
{
  delete ((INDEXmatrix3D*)p);
}

INDEX* INDEXmatrix3D_Element(INDEXmatrix3D_* p, INDEX r, INDEX c)
{
  return &( (*((INDEXmatrix3D*)p))(r, c) );
}

INDEX INDEXmatrix3D_Element_const(const INDEXmatrix3D_* p, INDEX r, INDEX c)
{
  return (*((const INDEXmatrix3D*)p))(r, c);
}

INDEXmatrix3D_* INDEXmatrix3D_Transposed(const INDEXmatrix3D_* p)
{
  INDEXmatrix3D result = !(*((const INDEXmatrix3D*)p));
  return (INDEXmatrix3D_*)(new INDEXmatrix3D(result));
}

void INDEXmatrix3D_AssignTransposed(INDEXmatrix3D_* a, const INDEXmatrix3D_* b)
{
  (*((INDEXmatrix3D*)a)) != (*((const INDEXmatrix3D*)b));
}

INDEXmatrix3D_* INDEXmatrix3D_Plus(const INDEXmatrix3D_* a, const INDEXmatrix3D_* b)
{
  INDEXmatrix3D result = (*((const INDEXmatrix3D*)a)) + (*((const INDEXmatrix3D*)b));
  return (INDEXmatrix3D_*)(new INDEXmatrix3D(result));
}

void INDEXmatrix3D_PlusInplace(INDEXmatrix3D_* a, const INDEXmatrix3D_* b)
{
  (*((INDEXmatrix3D*)a)) += (*((const INDEXmatrix3D*)b));
}

INDEXmatrix3D_* INDEXmatrix3D_Minus(const INDEXmatrix3D_* a, const INDEXmatrix3D_* b)
{
  INDEXmatrix3D result = (*((const INDEXmatrix3D*)a)) - (*((const INDEXmatrix3D*)b));
  return (INDEXmatrix3D_*)(new INDEXmatrix3D(result));
}

void INDEXmatrix3D_MinusInplace(INDEXmatrix3D_* a, const INDEXmatrix3D_* b)
{
  (*((INDEXmatrix3D*)a)) -= (*((const INDEXmatrix3D*)b));
}

INDEXmatrix3D_* INDEXmatrix3D_Multiply(const INDEXmatrix3D_* a, const INDEXmatrix3D_* b)
{
  INDEXmatrix3D result = (*((const INDEXmatrix3D*)a)) * (*((const INDEXmatrix3D*)b));
  return (INDEXmatrix3D_*)(new INDEXmatrix3D(result));
}

void INDEXmatrix3D_MultiplyInplace(INDEXmatrix3D_* a, const INDEXmatrix3D_* b)
{
  (*((INDEXmatrix3D*)a)) *= (*((const INDEXmatrix3D*)b));
}

INDEXmatrix3D_* INDEXmatrix3D_Multiply_scalar(const INDEXmatrix3D_* a, INDEX b)
{
  INDEXmatrix3D result = (*((const INDEXmatrix3D*)a)) * b;
  return (INDEXmatrix3D_*)(new INDEXmatrix3D(result));
}

void INDEXmatrix3D_MultiplyInplace_scalar(INDEXmatrix3D_* a, INDEX b)
{
  (*((INDEXmatrix3D*)a)) *= b;
}

INDEXmatrix3D_* INDEXmatrix3D_Divide_scalar(const INDEXmatrix3D_* a, INDEX b)
{
  INDEXmatrix3D result = (*((const INDEXmatrix3D*)a)) / b;
  return (INDEXmatrix3D_*)(new INDEXmatrix3D(result));
}

void INDEXmatrix3D_DivideInplace_scalar(INDEXmatrix3D_* a, INDEX b)
{
  (*((INDEXmatrix3D*)a)) /= b;
}

void INDEXmatrix3D_Diagonal_scalar(INDEXmatrix3D_* a, INDEX b)
{
  ((INDEXmatrix3D*)a)->Diagonal(b);
}

void INDEXmatrix3D_Diagonal(INDEXmatrix3D_* a, const INDEX3D_* b)
{
  ((INDEXmatrix3D*)a)->Diagonal(*((const INDEX3D*)b));
}

INDEX3D_* INDEXmatrix3D_GetRow(const INDEXmatrix3D_* p, INDEX r)
{
  INDEX3D result = ((INDEXmatrix3D*)p)->GetRow(r);
  return (INDEX3D_*)(new INDEX3D(result));
}

INDEX3D_* INDEXmatrix3D_GetColumn(const INDEXmatrix3D_* p, INDEX c)
{
  INDEX3D result = ((INDEXmatrix3D*)p)->GetColumn(c);
  return (INDEX3D_*)(new INDEX3D(result));
}

static void sehINDEXmatrix3D_extract(CTStream_* s, INDEXmatrix3D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((INDEXmatrix3D*)p));
  SECAPI_CATCH
}

void INDEXmatrix3D_extract(CTStream_* s, INDEXmatrix3D_* p)
{
  STREAM_TRY
  sehINDEXmatrix3D_extract(s, p);
  STREAM_CATCH
}

static void sehINDEXmatrix3D_insert(CTStream_* s, INDEXmatrix3D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((INDEXmatrix3D*)p));
  SECAPI_CATCH
}

void INDEXmatrix3D_insert(CTStream_* s, INDEXmatrix3D_* p)
{
  STREAM_TRY
  sehINDEXmatrix3D_insert(s, p);
  STREAM_CATCH
}

INDEX INDEXmatrix3D_Determinant(const INDEXmatrix3D_* p)
{
  return Determinant(*((const INDEXmatrix3D*)p));
}

INDEXmatrix3D_* INDEXmatrix3D_InverseMatrix(const INDEXmatrix3D_* p)
{
  return (INDEXmatrix3D_*)InverseMatrix(*((const INDEXmatrix3D*)p));
}

INDEXmatrix4D_* INDEXmatrix4D_new()
{
  return (INDEXmatrix4D_*)(new INDEXmatrix4D());
}

INDEXmatrix4D_* INDEXmatrix4D_new_x(INDEX x)
{
  return (INDEXmatrix4D_*)(new INDEXmatrix4D(x));
}

INDEXmatrix4D_* INDEXmatrix4D_clone(const INDEXmatrix4D_* p)
{
  return (INDEXmatrix4D_*)(new INDEXmatrix4D(*((const INDEXmatrix4D*)p)));
}

void INDEXmatrix4D_delete(INDEXmatrix4D_* p)
{
  delete ((INDEXmatrix4D*)p);
}

INDEX* INDEXmatrix4D_Element(INDEXmatrix4D_* p, INDEX r, INDEX c)
{
  return &( (*((INDEXmatrix4D*)p))(r, c) );
}

INDEX INDEXmatrix4D_Element_const(const INDEXmatrix4D_* p, INDEX r, INDEX c)
{
  return (*((const INDEXmatrix4D*)p))(r, c);
}

INDEXmatrix4D_* INDEXmatrix4D_Transposed(const INDEXmatrix4D_* p)
{
  INDEXmatrix4D result = !(*((const INDEXmatrix4D*)p));
  return (INDEXmatrix4D_*)(new INDEXmatrix4D(result));
}

void INDEXmatrix4D_AssignTransposed(INDEXmatrix4D_* a, const INDEXmatrix4D_* b)
{
  (*((INDEXmatrix4D*)a)) != (*((const INDEXmatrix4D*)b));
}

INDEXmatrix4D_* INDEXmatrix4D_Plus(const INDEXmatrix4D_* a, const INDEXmatrix4D_* b)
{
  INDEXmatrix4D result = (*((const INDEXmatrix4D*)a)) + (*((const INDEXmatrix4D*)b));
  return (INDEXmatrix4D_*)(new INDEXmatrix4D(result));
}

void INDEXmatrix4D_PlusInplace(INDEXmatrix4D_* a, const INDEXmatrix4D_* b)
{
  (*((INDEXmatrix4D*)a)) += (*((const INDEXmatrix4D*)b));
}

INDEXmatrix4D_* INDEXmatrix4D_Minus(const INDEXmatrix4D_* a, const INDEXmatrix4D_* b)
{
  INDEXmatrix4D result = (*((const INDEXmatrix4D*)a)) - (*((const INDEXmatrix4D*)b));
  return (INDEXmatrix4D_*)(new INDEXmatrix4D(result));
}

void INDEXmatrix4D_MinusInplace(INDEXmatrix4D_* a, const INDEXmatrix4D_* b)
{
  (*((INDEXmatrix4D*)a)) -= (*((const INDEXmatrix4D*)b));
}

INDEXmatrix4D_* INDEXmatrix4D_Multiply(const INDEXmatrix4D_* a, const INDEXmatrix4D_* b)
{
  INDEXmatrix4D result = (*((const INDEXmatrix4D*)a)) * (*((const INDEXmatrix4D*)b));
  return (INDEXmatrix4D_*)(new INDEXmatrix4D(result));
}

void INDEXmatrix4D_MultiplyInplace(INDEXmatrix4D_* a, const INDEXmatrix4D_* b)
{
  (*((INDEXmatrix4D*)a)) *= (*((const INDEXmatrix4D*)b));
}

INDEXmatrix4D_* INDEXmatrix4D_Multiply_scalar(const INDEXmatrix4D_* a, INDEX b)
{
  INDEXmatrix4D result = (*((const INDEXmatrix4D*)a)) * b;
  return (INDEXmatrix4D_*)(new INDEXmatrix4D(result));
}

void INDEXmatrix4D_MultiplyInplace_scalar(INDEXmatrix4D_* a, INDEX b)
{
  (*((INDEXmatrix4D*)a)) *= b;
}

INDEXmatrix4D_* INDEXmatrix4D_Divide_scalar(const INDEXmatrix4D_* a, INDEX b)
{
  INDEXmatrix4D result = (*((const INDEXmatrix4D*)a)) / b;
  return (INDEXmatrix4D_*)(new INDEXmatrix4D(result));
}

void INDEXmatrix4D_DivideInplace_scalar(INDEXmatrix4D_* a, INDEX b)
{
  (*((INDEXmatrix4D*)a)) /= b;
}

void INDEXmatrix4D_Diagonal_scalar(INDEXmatrix4D_* a, INDEX b)
{
  ((INDEXmatrix4D*)a)->Diagonal(b);
}

void INDEXmatrix4D_Diagonal(INDEXmatrix4D_* a, const INDEX4D_* b)
{
  ((INDEXmatrix4D*)a)->Diagonal(*((const INDEX4D*)b));
}

INDEX4D_* INDEXmatrix4D_GetRow(const INDEXmatrix4D_* p, INDEX r)
{
  INDEX4D result = ((INDEXmatrix4D*)p)->GetRow(r);
  return (INDEX4D_*)(new INDEX4D(result));
}

INDEX4D_* INDEXmatrix4D_GetColumn(const INDEXmatrix4D_* p, INDEX c)
{
  INDEX4D result = ((INDEXmatrix4D*)p)->GetColumn(c);
  return (INDEX4D_*)(new INDEX4D(result));
}

static void sehINDEXmatrix4D_extract(CTStream_* s, INDEXmatrix4D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) >> (*((INDEXmatrix4D*)p));
  SECAPI_CATCH
}

void INDEXmatrix4D_extract(CTStream_* s, INDEXmatrix4D_* p)
{
  STREAM_TRY
  sehINDEXmatrix4D_extract(s, p);
  STREAM_CATCH
}

static void sehINDEXmatrix4D_insert(CTStream_* s, INDEXmatrix4D_* p)
{
  SECAPI_TRY
  (*((CTStream*)s)) << (*((INDEXmatrix4D*)p));
  SECAPI_CATCH
}

void INDEXmatrix4D_insert(CTStream_* s, INDEXmatrix4D_* p)
{
  STREAM_TRY
  sehINDEXmatrix4D_insert(s, p);
  STREAM_CATCH
}

INDEXmatrix4D_* INDEXmatrix4D_InverseMatrix(const INDEXmatrix4D_* p)
{
  return (INDEXmatrix4D_*)InverseMatrix(*((const INDEXmatrix4D*)p));
}

DOUBLEmatrix3D_* FLOAT2DOUBLEmx(const FLOATmatrix3D_* p)
{
  DOUBLEmatrix3D result = FLOATtoDOUBLE(*((const FLOATmatrix3D*)p));
  return (DOUBLEmatrix3D_*)(new DOUBLEmatrix3D(result));
}

FLOATmatrix3D_* DOUBLE2FLOATmx(const DOUBLEmatrix3D_* p)
{
  FLOATmatrix3D result = DOUBLEtoFLOAT(*((const DOUBLEmatrix3D*)p));
  return (FLOATmatrix3D_*)(new FLOATmatrix3D(result));
}

void FLOATmatrix2D_copy(FLOATmatrix2D_* a, const FLOATmatrix2D_* b)
{
  *((FLOATmatrix2D*)a) = *((const FLOATmatrix2D*)b);
}

void FLOATmatrix3D_copy(FLOATmatrix3D_* a, const FLOATmatrix3D_* b)
{
  *((FLOATmatrix3D*)a) = *((const FLOATmatrix3D*)b);
}

void FLOATmatrix4D_copy(FLOATmatrix4D_* a, const FLOATmatrix4D_* b)
{
  *((FLOATmatrix4D*)a) = *((const FLOATmatrix4D*)b);
}

void DOUBLEmatrix2D_copy(DOUBLEmatrix2D_* a, const DOUBLEmatrix2D_* b)
{
  *((DOUBLEmatrix2D*)a) = *((const DOUBLEmatrix2D*)b);
}

void DOUBLEmatrix3D_copy(DOUBLEmatrix3D_* a, const DOUBLEmatrix3D_* b)
{
  *((DOUBLEmatrix3D*)a) = *((const DOUBLEmatrix3D*)b);
}

void DOUBLEmatrix4D_copy(DOUBLEmatrix4D_* a, const DOUBLEmatrix4D_* b)
{
  *((DOUBLEmatrix4D*)a) = *((const DOUBLEmatrix4D*)b);
}

void INDEXmatrix2D_copy(INDEXmatrix2D_* a, const INDEXmatrix2D_* b)
{
  *((INDEXmatrix2D*)a) = *((const INDEXmatrix2D*)b);
}

void INDEXmatrix3D_copy(INDEXmatrix3D_* a, const INDEXmatrix3D_* b)
{
  *((INDEXmatrix3D*)a) = *((const INDEXmatrix3D*)b);
}

void INDEXmatrix4D_copy(INDEXmatrix4D_* a, const INDEXmatrix4D_* b)
{
  *((INDEXmatrix4D*)a) = *((const INDEXmatrix4D*)b);
}
