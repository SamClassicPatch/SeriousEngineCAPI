#include "Quaternion.h"

FLOATquat3D_* FLOATquat3D_new()
{
  return (FLOATquat3D_*)(new FLOATquat3D());
}

FLOATquat3D_* FLOATquat3D_new_args(FLOAT w, FLOAT x, FLOAT y, FLOAT z)
{
  return (FLOATquat3D_*)(new FLOATquat3D(w, x, y, z));
}

FLOATquat3D_* FLOATquat3D_clone(const FLOATquat3D_* p)
{
  return (FLOATquat3D_*)(new FLOATquat3D(*((const FLOATquat3D*)p)));
}

void FLOATquat3D_delete(FLOATquat3D_* p)
{
  delete ((FLOATquat3D*)p);
}

void FLOATquat3D_copy(FLOATquat3D_* a, const FLOATquat3D_* b)
{
  *((FLOATquat3D*)a) = *((const FLOATquat3D*)b);
}

FLOAT FLOATquat3D_x(const FLOATquat3D_* p)
{
  return ((const FLOATquat3D*)p)->q_x;
}

FLOAT FLOATquat3D_y(const FLOATquat3D_* p)
{
  return ((const FLOATquat3D*)p)->q_y;
}

FLOAT FLOATquat3D_z(const FLOATquat3D_* p)
{
  return ((const FLOATquat3D*)p)->q_z;
}

FLOAT FLOATquat3D_w(const FLOATquat3D_* p)
{
  return ((const FLOATquat3D*)p)->q_w;
}

void FLOATquat3D_setx(FLOATquat3D_* p, FLOAT x)
{
  FLOATquat3D& q = *((FLOATquat3D*)p);
  q.q_x = x;
}

void FLOATquat3D_sety(FLOATquat3D_* p, FLOAT y)
{
  FLOATquat3D& q = *((FLOATquat3D*)p);
  q.q_y = y;
}

void FLOATquat3D_setz(FLOATquat3D_* p, FLOAT z)
{
  FLOATquat3D& q = *((FLOATquat3D*)p);
  q.q_z = z;
}

void FLOATquat3D_setw(FLOATquat3D_* p, FLOAT w)
{
  FLOATquat3D& q = *((FLOATquat3D*)p);
  q.q_w = w;
}

void FLOATquat3D_FromEuler(FLOATquat3D_* p, const FLOAT3D_* a)
{
  ((FLOATquat3D*)p)->FromEuler(*((const FLOAT3D*)a));
}

void FLOATquat3D_ToMatrix(const FLOATquat3D_* p, FLOATmatrix3D_* m)
{
  ((const FLOATquat3D*)p)->ToMatrix(*((FLOATmatrix3D*)m));
}

void FLOATquat3D_FromMatrix(FLOATquat3D_* p, FLOATmatrix3D_* m)
{
  ((FLOATquat3D*)p)->FromMatrix(*((FLOATmatrix3D*)m));
}

void FLOATquat3D_FromAxisAngle(FLOATquat3D_* p, const FLOAT3D_* n, FLOAT a)
{
  ((FLOATquat3D*)p)->FromAxisAngle(*((const FLOAT3D*)n), a);
}

void FLOATquat3D_ToAxisAngle(FLOATquat3D_* p, FLOAT3D_* n, FLOAT* a)
{
  ((FLOATquat3D*)p)->ToAxisAngle(*((FLOAT3D*)n), *a);
}

FLOATquat3D_* FLOATquat3D_Flip(const FLOATquat3D_* p)
{
  const FLOATquat3D& q = *((const FLOATquat3D*)p);
  return (FLOATquat3D_*)(new FLOATquat3D(-q.q_w, -q.q_x, -q.q_y, -q.q_z));
}

FLOATquat3D_* FLOATquat3D_Conjugate(const FLOATquat3D_* p)
{
  const FLOATquat3D& q = *((const FLOATquat3D*)p);
  return (FLOATquat3D_*)(new FLOATquat3D(q.q_w, -q.q_x, -q.q_y, -q.q_z));
}

FLOATquat3D_* FLOATquat3D_Inv(const FLOATquat3D_* p)
{
  const FLOATquat3D& q = *((const FLOATquat3D*)p);
  return (FLOATquat3D_*)(new FLOATquat3D(q.Inv()));
}

FLOATquat3D_* FLOATquat3D_Multiply_scalar(const FLOATquat3D_* p, FLOAT t)
{
  const FLOATquat3D r = (*((const FLOATquat3D*)p)) * t;
  return (FLOATquat3D_*)(new FLOATquat3D(r));
}

void FLOATquat3D_MultiplyInplace_scalar(FLOATquat3D_* p, FLOAT t)
{
  FLOATquat3D& q = *((FLOATquat3D*)p);
  q *= t;
}

FLOATquat3D_* FLOATquat3D_Divide_scalar(const FLOATquat3D_* p, FLOAT t)
{
  const FLOATquat3D r = (*((const FLOATquat3D*)p)) / t;
  return (FLOATquat3D_*)(new FLOATquat3D(r));
}

void FLOATquat3D_DivideInplace_scalar(FLOATquat3D_* p, FLOAT t)
{
  FLOATquat3D& q = *((FLOATquat3D*)p);
  q /= t;
}

FLOATquat3D_* FLOATquat3D_Plus(const FLOATquat3D_* a, const FLOATquat3D_* b)
{
  const FLOATquat3D r = (*((const FLOATquat3D*)a)) + (*((const FLOATquat3D*)b));
  return (FLOATquat3D_*)(new FLOATquat3D(r));
}

void FLOATquat3D_PlusInplace(FLOATquat3D_* a, const FLOATquat3D_* b)
{
  FLOATquat3D& qa = *((FLOATquat3D*)a);
  const FLOATquat3D& qb = *((const FLOATquat3D*)b);
  qa += qb;
}

FLOATquat3D_* FLOATquat3D_Minus(const FLOATquat3D_* a, const FLOATquat3D_* b)
{
  const FLOATquat3D r = (*((const FLOATquat3D*)a)) - (*((const FLOATquat3D*)b));
  return (FLOATquat3D_*)(new FLOATquat3D(r));
}

void FLOATquat3D_MinusInplace(FLOATquat3D_* a, const FLOATquat3D_* b)
{
  FLOATquat3D& qa = *((FLOATquat3D*)a);
  const FLOATquat3D& qb = *((const FLOATquat3D*)b);
  qa -= qb;
}

FLOATquat3D_* FLOATquat3D_Multiply(const FLOATquat3D_* a, const FLOATquat3D_* b)
{
  const FLOATquat3D r = (*((const FLOATquat3D*)a)) * (*((const FLOATquat3D*)b));
  return (FLOATquat3D_*)(new FLOATquat3D(r));
}

void FLOATquat3D_MultiplyInplace(FLOATquat3D_* a, const FLOATquat3D_* b)
{
  FLOATquat3D& qa = *((FLOATquat3D*)a);
  const FLOATquat3D& qb = *((const FLOATquat3D*)b);
  qa *= qb;
}

FLOAT FLOATquat3D_Dot(const FLOATquat3D_* a, const FLOATquat3D_* b)
{
  return (*((const FLOATquat3D*)a)) % (*((const FLOATquat3D*)b));
}

FLOAT FLOATquat3D_Norm(const FLOATquat3D_* p)
{
  return ((const FLOATquat3D*)p)->Norm();
}

FLOATquat3D_* FLOATquat3D_Exp(const FLOATquat3D_* p)
{
  const FLOATquat3D r = Exp(*((const FLOATquat3D*)p));
  return (FLOATquat3D_*)(new FLOATquat3D(r));
}

FLOATquat3D_* FLOATquat3D_Log(const FLOATquat3D_* p)
{
  const FLOATquat3D r = Log(*((const FLOATquat3D*)p));
  return (FLOATquat3D_*)(new FLOATquat3D(r));
}

FLOATquat3D_* FLOATquat3D_Slerp(FLOAT t, const FLOATquat3D_* a, const FLOATquat3D_* b)
{
  const FLOATquat3D r = Slerp(t, *((const FLOATquat3D*)a), *((const FLOATquat3D*)b));
  return (FLOATquat3D_*)(new FLOATquat3D(r));
}

FLOATquat3D_* FLOATquat3D_Squad(FLOAT t, const FLOATquat3D_* a, const FLOATquat3D_* b, const FLOATquat3D_* c, const FLOATquat3D_* d)
{
  const FLOATquat3D r = Squad(t, *((const FLOATquat3D*)a), *((const FLOATquat3D*)b), *((const FLOATquat3D*)c), *((const FLOATquat3D*)d));
  return (FLOATquat3D_*)(new FLOATquat3D(r));
}

DOUBLEquat3D_* DOUBLEquat3D_new()
{
  return (DOUBLEquat3D_*)(new DOUBLEquat3D());
}

DOUBLEquat3D_* DOUBLEquat3D_new_args(DOUBLE w, DOUBLE x, DOUBLE y, DOUBLE z)
{
  return (DOUBLEquat3D_*)(new DOUBLEquat3D(w, x, y, z));
}

DOUBLEquat3D_* DOUBLEquat3D_clone(const DOUBLEquat3D_* p)
{
  return (DOUBLEquat3D_*)(new DOUBLEquat3D(*((const DOUBLEquat3D*)p)));
}

void DOUBLEquat3D_delete(DOUBLEquat3D_* p)
{
  delete ((DOUBLEquat3D*)p);
}

void DOUBLEquat3D_copy(DOUBLEquat3D_* a, const DOUBLEquat3D_* b)
{
  *((DOUBLEquat3D*)a) = *((const DOUBLEquat3D*)b);
}

DOUBLE DOUBLEquat3D_x(const DOUBLEquat3D_* p)
{
  return ((const DOUBLEquat3D*)p)->q_x;
}

DOUBLE DOUBLEquat3D_y(const DOUBLEquat3D_* p)
{
  return ((const DOUBLEquat3D*)p)->q_y;
}

DOUBLE DOUBLEquat3D_z(const DOUBLEquat3D_* p)
{
  return ((const DOUBLEquat3D*)p)->q_z;
}

DOUBLE DOUBLEquat3D_w(const DOUBLEquat3D_* p)
{
  return ((const DOUBLEquat3D*)p)->q_w;
}

void DOUBLEquat3D_setx(DOUBLEquat3D_* p, DOUBLE x)
{
  DOUBLEquat3D& q = *((DOUBLEquat3D*)p);
  q.q_x = x;
}

void DOUBLEquat3D_sety(DOUBLEquat3D_* p, DOUBLE y)
{
  DOUBLEquat3D& q = *((DOUBLEquat3D*)p);
  q.q_y = y;
}

void DOUBLEquat3D_setz(DOUBLEquat3D_* p, DOUBLE z)
{
  DOUBLEquat3D& q = *((DOUBLEquat3D*)p);
  q.q_z = z;
}

void DOUBLEquat3D_setw(DOUBLEquat3D_* p, DOUBLE w)
{
  DOUBLEquat3D& q = *((DOUBLEquat3D*)p);
  q.q_w = w;
}

void DOUBLEquat3D_FromEuler(DOUBLEquat3D_* p, const DOUBLE3D_* a)
{
  ((DOUBLEquat3D*)p)->FromEuler(*((const DOUBLE3D*)a));
}

void DOUBLEquat3D_ToMatrix(const DOUBLEquat3D_* p, DOUBLEmatrix3D_* m)
{
  ((const DOUBLEquat3D*)p)->ToMatrix(*((DOUBLEmatrix3D*)m));
}

void DOUBLEquat3D_FromMatrix(DOUBLEquat3D_* p, DOUBLEmatrix3D_* m)
{
  ((DOUBLEquat3D*)p)->FromMatrix(*((DOUBLEmatrix3D*)m));
}

void DOUBLEquat3D_FromAxisAngle(DOUBLEquat3D_* p, const DOUBLE3D_* n, DOUBLE a)
{
  ((DOUBLEquat3D*)p)->FromAxisAngle(*((const DOUBLE3D*)n), a);
}

void DOUBLEquat3D_ToAxisAngle(DOUBLEquat3D_* p, DOUBLE3D_* n, DOUBLE* a)
{
  ((DOUBLEquat3D*)p)->ToAxisAngle(*((DOUBLE3D*)n), *a);
}

DOUBLEquat3D_* DOUBLEquat3D_Flip(const DOUBLEquat3D_* p)
{
  const DOUBLEquat3D& q = *((const DOUBLEquat3D*)p);
  return (DOUBLEquat3D_*)(new DOUBLEquat3D(-q.q_w, -q.q_x, -q.q_y, -q.q_z));
}

DOUBLEquat3D_* DOUBLEquat3D_Conjugate(const DOUBLEquat3D_* p)
{
  const DOUBLEquat3D& q = *((const DOUBLEquat3D*)p);
  return (DOUBLEquat3D_*)(new DOUBLEquat3D(q.q_w, -q.q_x, -q.q_y, -q.q_z));
}

DOUBLEquat3D_* DOUBLEquat3D_Inv(const DOUBLEquat3D_* p)
{
  const DOUBLEquat3D& q = *((const DOUBLEquat3D*)p);
  return (DOUBLEquat3D_*)(new DOUBLEquat3D(q.Inv()));
}

DOUBLEquat3D_* DOUBLEquat3D_Multiply_scalar(const DOUBLEquat3D_* p, DOUBLE t)
{
  const DOUBLEquat3D r = (*((const DOUBLEquat3D*)p)) * t;
  return (DOUBLEquat3D_*)(new DOUBLEquat3D(r));
}

void DOUBLEquat3D_MultiplyInplace_scalar(DOUBLEquat3D_* p, DOUBLE t)
{
  DOUBLEquat3D& q = *((DOUBLEquat3D*)p);
  q *= t;
}

DOUBLEquat3D_* DOUBLEquat3D_Divide_scalar(const DOUBLEquat3D_* p, DOUBLE t)
{
  const DOUBLEquat3D r = (*((const DOUBLEquat3D*)p)) / t;
  return (DOUBLEquat3D_*)(new DOUBLEquat3D(r));
}

void DOUBLEquat3D_DivideInplace_scalar(DOUBLEquat3D_* p, DOUBLE t)
{
  DOUBLEquat3D& q = *((DOUBLEquat3D*)p);
  q /= t;
}

DOUBLEquat3D_* DOUBLEquat3D_Plus(const DOUBLEquat3D_* a, const DOUBLEquat3D_* b)
{
  const DOUBLEquat3D r = (*((const DOUBLEquat3D*)a)) + (*((const DOUBLEquat3D*)b));
  return (DOUBLEquat3D_*)(new DOUBLEquat3D(r));
}

void DOUBLEquat3D_PlusInplace(DOUBLEquat3D_* a, const DOUBLEquat3D_* b)
{
  DOUBLEquat3D& qa = *((DOUBLEquat3D*)a);
  const DOUBLEquat3D& qb = *((const DOUBLEquat3D*)b);
  qa += qb;
}

DOUBLEquat3D_* DOUBLEquat3D_Minus(const DOUBLEquat3D_* a, const DOUBLEquat3D_* b)
{
  const DOUBLEquat3D r = (*((const DOUBLEquat3D*)a)) - (*((const DOUBLEquat3D*)b));
  return (DOUBLEquat3D_*)(new DOUBLEquat3D(r));
}

void DOUBLEquat3D_MinusInplace(DOUBLEquat3D_* a, const DOUBLEquat3D_* b)
{
  DOUBLEquat3D& qa = *((DOUBLEquat3D*)a);
  const DOUBLEquat3D& qb = *((const DOUBLEquat3D*)b);
  qa -= qb;
}

DOUBLEquat3D_* DOUBLEquat3D_Multiply(const DOUBLEquat3D_* a, const DOUBLEquat3D_* b)
{
  const DOUBLEquat3D r = (*((const DOUBLEquat3D*)a)) * (*((const DOUBLEquat3D*)b));
  return (DOUBLEquat3D_*)(new DOUBLEquat3D(r));
}

void DOUBLEquat3D_MultiplyInplace(DOUBLEquat3D_* a, const DOUBLEquat3D_* b)
{
  DOUBLEquat3D& qa = *((DOUBLEquat3D*)a);
  const DOUBLEquat3D& qb = *((const DOUBLEquat3D*)b);
  qa *= qb;
}

DOUBLE DOUBLEquat3D_Dot(const DOUBLEquat3D_* a, const DOUBLEquat3D_* b)
{
  return (*((const DOUBLEquat3D*)a)) % (*((const DOUBLEquat3D*)b));
}

DOUBLE DOUBLEquat3D_Norm(const DOUBLEquat3D_* p)
{
  return ((const DOUBLEquat3D*)p)->Norm();
}

DOUBLEquat3D_* DOUBLEquat3D_Exp(const DOUBLEquat3D_* p)
{
  const DOUBLEquat3D r = Exp(*((const DOUBLEquat3D*)p));
  return (DOUBLEquat3D_*)(new DOUBLEquat3D(r));
}

DOUBLEquat3D_* DOUBLEquat3D_Log(const DOUBLEquat3D_* p)
{
  const DOUBLEquat3D r = Log(*((const DOUBLEquat3D*)p));
  return (DOUBLEquat3D_*)(new DOUBLEquat3D(r));
}

DOUBLEquat3D_* DOUBLEquat3D_Slerp(DOUBLE t, const DOUBLEquat3D_* a, const DOUBLEquat3D_* b)
{
  const DOUBLEquat3D r = Slerp(t, *((const DOUBLEquat3D*)a), *((const DOUBLEquat3D*)b));
  return (DOUBLEquat3D_*)(new DOUBLEquat3D(r));
}

DOUBLEquat3D_* DOUBLEquat3D_Squad(DOUBLE t, const DOUBLEquat3D_* a, const DOUBLEquat3D_* b, const DOUBLEquat3D_* c, const DOUBLEquat3D_* d)
{
  const DOUBLEquat3D r = Squad(t, *((const DOUBLEquat3D*)a), *((const DOUBLEquat3D*)b), *((const DOUBLEquat3D*)c), *((const DOUBLEquat3D*)d));
  return (DOUBLEquat3D_*)(new DOUBLEquat3D(r));
}
