/* Copyright (c) 2026 SeriousAlexej.
This program is free software; you can redistribute it and/or modify
it under the terms of version 2 of the GNU General Public License as published by
the Free Software Foundation


This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA. */

#ifndef SECAPI_MATH_QUATERNION_H
#define SECAPI_MATH_QUATERNION_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI FLOATquat3D_* FLOATquat3D_new();
SECAPI FLOATquat3D_* FLOATquat3D_new_args(FLOAT w, FLOAT x, FLOAT y, FLOAT z);
SECAPI FLOATquat3D_* FLOATquat3D_clone(const FLOATquat3D_* p);
SECAPI void FLOATquat3D_delete(FLOATquat3D_* p);
SECAPI void FLOATquat3D_copy(FLOATquat3D_* a, const FLOATquat3D_* b);
SECAPI FLOAT FLOATquat3D_x(const FLOATquat3D_* p);
SECAPI FLOAT FLOATquat3D_y(const FLOATquat3D_* p);
SECAPI FLOAT FLOATquat3D_z(const FLOATquat3D_* p);
SECAPI FLOAT FLOATquat3D_w(const FLOATquat3D_* p);
SECAPI void FLOATquat3D_setx(FLOATquat3D_* p, FLOAT x);
SECAPI void FLOATquat3D_sety(FLOATquat3D_* p, FLOAT y);
SECAPI void FLOATquat3D_setz(FLOATquat3D_* p, FLOAT z);
SECAPI void FLOATquat3D_setw(FLOATquat3D_* p, FLOAT w);
SECAPI void FLOATquat3D_FromEuler(FLOATquat3D_* p, const FLOAT3D_* a);
SECAPI void FLOATquat3D_ToMatrix(const FLOATquat3D_* p, FLOATmatrix3D_* m);
SECAPI void FLOATquat3D_FromMatrix(FLOATquat3D_* p, FLOATmatrix3D_* m);
SECAPI void FLOATquat3D_FromAxisAngle(FLOATquat3D_* p, const FLOAT3D_* n, FLOAT a);
SECAPI void FLOATquat3D_ToAxisAngle(FLOATquat3D_* p, FLOAT3D_* n, FLOAT* a);
SECAPI FLOATquat3D_* FLOATquat3D_Flip(const FLOATquat3D_* p);
SECAPI FLOATquat3D_* FLOATquat3D_Conjugate(const FLOATquat3D_* p);
SECAPI FLOATquat3D_* FLOATquat3D_Inv(const FLOATquat3D_* p);
SECAPI FLOATquat3D_* FLOATquat3D_Multiply_scalar(const FLOATquat3D_* p, FLOAT t);
SECAPI void FLOATquat3D_MultiplyInplace_scalar(FLOATquat3D_* p, FLOAT t);
SECAPI FLOATquat3D_* FLOATquat3D_Divide_scalar(const FLOATquat3D_* p, FLOAT t);
SECAPI void FLOATquat3D_DivideInplace_scalar(FLOATquat3D_* p, FLOAT t);
SECAPI FLOATquat3D_* FLOATquat3D_Plus(const FLOATquat3D_* a, const FLOATquat3D_* b);
SECAPI void FLOATquat3D_PlusInplace(FLOATquat3D_* a, const FLOATquat3D_* b);
SECAPI FLOATquat3D_* FLOATquat3D_Minus(const FLOATquat3D_* a, const FLOATquat3D_* b);
SECAPI void FLOATquat3D_MinusInplace(FLOATquat3D_* a, const FLOATquat3D_* b);
SECAPI FLOATquat3D_* FLOATquat3D_Multiply(const FLOATquat3D_* a, const FLOATquat3D_* b);
SECAPI void FLOATquat3D_MultiplyInplace(FLOATquat3D_* a, const FLOATquat3D_* b);
SECAPI FLOAT FLOATquat3D_Dot(const FLOATquat3D_* a, const FLOATquat3D_* b);
SECAPI FLOAT FLOATquat3D_Norm(const FLOATquat3D_* p);
SECAPI FLOATquat3D_* FLOATquat3D_Exp(const FLOATquat3D_* p);
SECAPI FLOATquat3D_* FLOATquat3D_Log(const FLOATquat3D_* p);
SECAPI FLOATquat3D_* FLOATquat3D_Slerp(FLOAT t, const FLOATquat3D_* a, const FLOATquat3D_* b);
SECAPI FLOATquat3D_* FLOATquat3D_Squad(FLOAT t, const FLOATquat3D_* a, const FLOATquat3D_* b, const FLOATquat3D_* c, const FLOATquat3D_* d);

SECAPI DOUBLEquat3D_* DOUBLEquat3D_new();
SECAPI DOUBLEquat3D_* DOUBLEquat3D_new_args(DOUBLE w, DOUBLE x, DOUBLE y, DOUBLE z);
SECAPI DOUBLEquat3D_* DOUBLEquat3D_clone(const DOUBLEquat3D_* p);
SECAPI void DOUBLEquat3D_delete(DOUBLEquat3D_* p);
SECAPI void DOUBLEquat3D_copy(DOUBLEquat3D_* a, const DOUBLEquat3D_* b);
SECAPI DOUBLE DOUBLEquat3D_x(const DOUBLEquat3D_* p);
SECAPI DOUBLE DOUBLEquat3D_y(const DOUBLEquat3D_* p);
SECAPI DOUBLE DOUBLEquat3D_z(const DOUBLEquat3D_* p);
SECAPI DOUBLE DOUBLEquat3D_w(const DOUBLEquat3D_* p);
SECAPI void DOUBLEquat3D_setx(DOUBLEquat3D_* p, DOUBLE x);
SECAPI void DOUBLEquat3D_sety(DOUBLEquat3D_* p, DOUBLE y);
SECAPI void DOUBLEquat3D_setz(DOUBLEquat3D_* p, DOUBLE z);
SECAPI void DOUBLEquat3D_setw(DOUBLEquat3D_* p, DOUBLE w);
SECAPI void DOUBLEquat3D_FromEuler(DOUBLEquat3D_* p, const DOUBLE3D_* a);
SECAPI void DOUBLEquat3D_ToMatrix(const DOUBLEquat3D_* p, DOUBLEmatrix3D_* m);
SECAPI void DOUBLEquat3D_FromMatrix(DOUBLEquat3D_* p, DOUBLEmatrix3D_* m);
SECAPI void DOUBLEquat3D_FromAxisAngle(DOUBLEquat3D_* p, const DOUBLE3D_* n, DOUBLE a);
SECAPI void DOUBLEquat3D_ToAxisAngle(DOUBLEquat3D_* p, DOUBLE3D_* n, DOUBLE* a);
SECAPI DOUBLEquat3D_* DOUBLEquat3D_Flip(const DOUBLEquat3D_* p);
SECAPI DOUBLEquat3D_* DOUBLEquat3D_Conjugate(const DOUBLEquat3D_* p);
SECAPI DOUBLEquat3D_* DOUBLEquat3D_Inv(const DOUBLEquat3D_* p);
SECAPI DOUBLEquat3D_* DOUBLEquat3D_Multiply_scalar(const DOUBLEquat3D_* p, DOUBLE t);
SECAPI void DOUBLEquat3D_MultiplyInplace_scalar(DOUBLEquat3D_* p, DOUBLE t);
SECAPI DOUBLEquat3D_* DOUBLEquat3D_Divide_scalar(const DOUBLEquat3D_* p, DOUBLE t);
SECAPI void DOUBLEquat3D_DivideInplace_scalar(DOUBLEquat3D_* p, DOUBLE t);
SECAPI DOUBLEquat3D_* DOUBLEquat3D_Plus(const DOUBLEquat3D_* a, const DOUBLEquat3D_* b);
SECAPI void DOUBLEquat3D_PlusInplace(DOUBLEquat3D_* a, const DOUBLEquat3D_* b);
SECAPI DOUBLEquat3D_* DOUBLEquat3D_Minus(const DOUBLEquat3D_* a, const DOUBLEquat3D_* b);
SECAPI void DOUBLEquat3D_MinusInplace(DOUBLEquat3D_* a, const DOUBLEquat3D_* b);
SECAPI DOUBLEquat3D_* DOUBLEquat3D_Multiply(const DOUBLEquat3D_* a, const DOUBLEquat3D_* b);
SECAPI void DOUBLEquat3D_MultiplyInplace(DOUBLEquat3D_* a, const DOUBLEquat3D_* b);
SECAPI DOUBLE DOUBLEquat3D_Dot(const DOUBLEquat3D_* a, const DOUBLEquat3D_* b);
SECAPI DOUBLE DOUBLEquat3D_Norm(const DOUBLEquat3D_* p);
SECAPI DOUBLEquat3D_* DOUBLEquat3D_Exp(const DOUBLEquat3D_* p);
SECAPI DOUBLEquat3D_* DOUBLEquat3D_Log(const DOUBLEquat3D_* p);
SECAPI DOUBLEquat3D_* DOUBLEquat3D_Slerp(DOUBLE t, const DOUBLEquat3D_* a, const DOUBLEquat3D_* b);
SECAPI DOUBLEquat3D_* DOUBLEquat3D_Squad(DOUBLE t, const DOUBLEquat3D_* a, const DOUBLEquat3D_* b, const DOUBLEquat3D_* c, const DOUBLEquat3D_* d);

#ifdef __cplusplus
}
#endif

#endif
