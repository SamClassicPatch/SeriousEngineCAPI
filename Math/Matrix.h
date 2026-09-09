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

#ifndef SECAPI_MATH_MATRIX_H
#define SECAPI_MATH_MATRIX_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

// FLOAT2D
SECAPI FLOATmatrix2D_* FLOATmatrix2D_new();
SECAPI FLOATmatrix2D_* FLOATmatrix2D_new_x(FLOAT x);
SECAPI FLOATmatrix2D_* FLOATmatrix2D_clone(const FLOATmatrix2D_* p);
SECAPI void FLOATmatrix2D_copy(FLOATmatrix2D_* a, const FLOATmatrix2D_* b);
SECAPI void FLOATmatrix2D_delete(FLOATmatrix2D_* p);
SECAPI FLOAT* FLOATmatrix2D_Element(FLOATmatrix2D_* p, INDEX r, INDEX c);
SECAPI FLOAT FLOATmatrix2D_Element_const(const FLOATmatrix2D_* p, INDEX r, INDEX c);
SECAPI FLOATmatrix2D_* FLOATmatrix2D_Transposed(const FLOATmatrix2D_* p);
SECAPI void FLOATmatrix2D_AssignTransposed(FLOATmatrix2D_* a, const FLOATmatrix2D_* b);
SECAPI FLOATmatrix2D_* FLOATmatrix2D_Plus(const FLOATmatrix2D_* a, const FLOATmatrix2D_* b);
SECAPI void FLOATmatrix2D_PlusInplace(FLOATmatrix2D_* a, const FLOATmatrix2D_* b);
SECAPI FLOATmatrix2D_* FLOATmatrix2D_Minus(const FLOATmatrix2D_* a, const FLOATmatrix2D_* b);
SECAPI void FLOATmatrix2D_MinusInplace(FLOATmatrix2D_* a, const FLOATmatrix2D_* b);
SECAPI FLOATmatrix2D_* FLOATmatrix2D_Multiply(const FLOATmatrix2D_* a, const FLOATmatrix2D_* b);
SECAPI void FLOATmatrix2D_MultiplyInplace(FLOATmatrix2D_* a, const FLOATmatrix2D_* b);
SECAPI FLOATmatrix2D_* FLOATmatrix2D_Multiply_scalar(const FLOATmatrix2D_* a, FLOAT b);
SECAPI void FLOATmatrix2D_MultiplyInplace_scalar(FLOATmatrix2D_* a, FLOAT b);
SECAPI FLOATmatrix2D_* FLOATmatrix2D_Divide_scalar(const FLOATmatrix2D_* a, FLOAT b);
SECAPI void FLOATmatrix2D_DivideInplace_scalar(FLOATmatrix2D_* a, FLOAT b);
SECAPI void FLOATmatrix2D_Diagonal_scalar(FLOATmatrix2D_* a, FLOAT b);
SECAPI void FLOATmatrix2D_Diagonal(FLOATmatrix2D_* a, const FLOAT2D_* b);
SECAPI FLOAT2D_* FLOATmatrix2D_GetRow(const FLOATmatrix2D_* p, INDEX r);
SECAPI FLOAT2D_* FLOATmatrix2D_GetColumn(const FLOATmatrix2D_* p, INDEX c);
SECAPI void FLOATmatrix2D_extract(CTStream_* s, FLOATmatrix2D_* p);
SECAPI void FLOATmatrix2D_insert(CTStream_* s, FLOATmatrix2D_* p);

// FLOAT3D
SECAPI FLOATmatrix3D_* FLOATmatrix3D_new();
SECAPI FLOATmatrix3D_* FLOATmatrix3D_new_x(FLOAT x);
SECAPI FLOATmatrix3D_* FLOATmatrix3D_clone(const FLOATmatrix3D_* p);
SECAPI void FLOATmatrix3D_copy(FLOATmatrix3D_* a, const FLOATmatrix3D_* b);
SECAPI void FLOATmatrix3D_delete(FLOATmatrix3D_* p);
SECAPI FLOAT* FLOATmatrix3D_Element(FLOATmatrix3D_* p, INDEX r, INDEX c);
SECAPI FLOAT FLOATmatrix3D_Element_const(const FLOATmatrix3D_* p, INDEX r, INDEX c);
SECAPI FLOATmatrix3D_* FLOATmatrix3D_Transposed(const FLOATmatrix3D_* p);
SECAPI void FLOATmatrix3D_AssignTransposed(FLOATmatrix3D_* a, const FLOATmatrix3D_* b);
SECAPI FLOATmatrix3D_* FLOATmatrix3D_Plus(const FLOATmatrix3D_* a, const FLOATmatrix3D_* b);
SECAPI void FLOATmatrix3D_PlusInplace(FLOATmatrix3D_* a, const FLOATmatrix3D_* b);
SECAPI FLOATmatrix3D_* FLOATmatrix3D_Minus(const FLOATmatrix3D_* a, const FLOATmatrix3D_* b);
SECAPI void FLOATmatrix3D_MinusInplace(FLOATmatrix3D_* a, const FLOATmatrix3D_* b);
SECAPI FLOATmatrix3D_* FLOATmatrix3D_Multiply(const FLOATmatrix3D_* a, const FLOATmatrix3D_* b);
SECAPI void FLOATmatrix3D_MultiplyInplace(FLOATmatrix3D_* a, const FLOATmatrix3D_* b);
SECAPI FLOATmatrix3D_* FLOATmatrix3D_Multiply_scalar(const FLOATmatrix3D_* a, FLOAT b);
SECAPI void FLOATmatrix3D_MultiplyInplace_scalar(FLOATmatrix3D_* a, FLOAT b);
SECAPI FLOATmatrix3D_* FLOATmatrix3D_Divide_scalar(const FLOATmatrix3D_* a, FLOAT b);
SECAPI void FLOATmatrix3D_DivideInplace_scalar(FLOATmatrix3D_* a, FLOAT b);
SECAPI void FLOATmatrix3D_Diagonal_scalar(FLOATmatrix3D_* a, FLOAT b);
SECAPI void FLOATmatrix3D_Diagonal(FLOATmatrix3D_* a, const FLOAT3D_* b);
SECAPI FLOAT3D_* FLOATmatrix3D_GetRow(const FLOATmatrix3D_* p, INDEX r);
SECAPI FLOAT3D_* FLOATmatrix3D_GetColumn(const FLOATmatrix3D_* p, INDEX c);
SECAPI void FLOATmatrix3D_extract(CTStream_* s, FLOATmatrix3D_* p);
SECAPI void FLOATmatrix3D_insert(CTStream_* s, FLOATmatrix3D_* p);
SECAPI FLOAT FLOATmatrix3D_Determinant(const FLOATmatrix3D_* p);
SECAPI FLOATmatrix3D_* FLOATmatrix3D_InverseMatrix(const FLOATmatrix3D_* p);

// FLOAT4D
SECAPI FLOATmatrix4D_* FLOATmatrix4D_new();
SECAPI FLOATmatrix4D_* FLOATmatrix4D_new_x(FLOAT x);
SECAPI FLOATmatrix4D_* FLOATmatrix4D_clone(const FLOATmatrix4D_* p);
SECAPI void FLOATmatrix4D_copy(FLOATmatrix4D_* a, const FLOATmatrix4D_* b);
SECAPI void FLOATmatrix4D_delete(FLOATmatrix4D_* p);
SECAPI FLOAT* FLOATmatrix4D_Element(FLOATmatrix4D_* p, INDEX r, INDEX c);
SECAPI FLOAT FLOATmatrix4D_Element_const(const FLOATmatrix4D_* p, INDEX r, INDEX c);
SECAPI FLOATmatrix4D_* FLOATmatrix4D_Transposed(const FLOATmatrix4D_* p);
SECAPI void FLOATmatrix4D_AssignTransposed(FLOATmatrix4D_* a, const FLOATmatrix4D_* b);
SECAPI FLOATmatrix4D_* FLOATmatrix4D_Plus(const FLOATmatrix4D_* a, const FLOATmatrix4D_* b);
SECAPI void FLOATmatrix4D_PlusInplace(FLOATmatrix4D_* a, const FLOATmatrix4D_* b);
SECAPI FLOATmatrix4D_* FLOATmatrix4D_Minus(const FLOATmatrix4D_* a, const FLOATmatrix4D_* b);
SECAPI void FLOATmatrix4D_MinusInplace(FLOATmatrix4D_* a, const FLOATmatrix4D_* b);
SECAPI FLOATmatrix4D_* FLOATmatrix4D_Multiply(const FLOATmatrix4D_* a, const FLOATmatrix4D_* b);
SECAPI void FLOATmatrix4D_MultiplyInplace(FLOATmatrix4D_* a, const FLOATmatrix4D_* b);
SECAPI FLOATmatrix4D_* FLOATmatrix4D_Multiply_scalar(const FLOATmatrix4D_* a, FLOAT b);
SECAPI void FLOATmatrix4D_MultiplyInplace_scalar(FLOATmatrix4D_* a, FLOAT b);
SECAPI FLOATmatrix4D_* FLOATmatrix4D_Divide_scalar(const FLOATmatrix4D_* a, FLOAT b);
SECAPI void FLOATmatrix4D_DivideInplace_scalar(FLOATmatrix4D_* a, FLOAT b);
SECAPI void FLOATmatrix4D_Diagonal_scalar(FLOATmatrix4D_* a, FLOAT b);
SECAPI void FLOATmatrix4D_Diagonal(FLOATmatrix4D_* a, const FLOAT4D_* b);
SECAPI FLOAT4D_* FLOATmatrix4D_GetRow(const FLOATmatrix4D_* p, INDEX r);
SECAPI FLOAT4D_* FLOATmatrix4D_GetColumn(const FLOATmatrix4D_* p, INDEX c);
SECAPI void FLOATmatrix4D_extract(CTStream_* s, FLOATmatrix4D_* p);
SECAPI void FLOATmatrix4D_insert(CTStream_* s, FLOATmatrix4D_* p);
SECAPI FLOATmatrix4D_* FLOATmatrix4D_InverseMatrix(const FLOATmatrix4D_* p);

// DOUBLE2D
SECAPI DOUBLEmatrix2D_* DOUBLEmatrix2D_new();
SECAPI DOUBLEmatrix2D_* DOUBLEmatrix2D_new_x(DOUBLE x);
SECAPI DOUBLEmatrix2D_* DOUBLEmatrix2D_clone(const DOUBLEmatrix2D_* p);
SECAPI void DOUBLEmatrix2D_copy(DOUBLEmatrix2D_* a, const DOUBLEmatrix2D_* b);
SECAPI void DOUBLEmatrix2D_delete(DOUBLEmatrix2D_* p);
SECAPI DOUBLE* DOUBLEmatrix2D_Element(DOUBLEmatrix2D_* p, INDEX r, INDEX c);
SECAPI DOUBLE DOUBLEmatrix2D_Element_const(const DOUBLEmatrix2D_* p, INDEX r, INDEX c);
SECAPI DOUBLEmatrix2D_* DOUBLEmatrix2D_Transposed(const DOUBLEmatrix2D_* p);
SECAPI void DOUBLEmatrix2D_AssignTransposed(DOUBLEmatrix2D_* a, const DOUBLEmatrix2D_* b);
SECAPI DOUBLEmatrix2D_* DOUBLEmatrix2D_Plus(const DOUBLEmatrix2D_* a, const DOUBLEmatrix2D_* b);
SECAPI void DOUBLEmatrix2D_PlusInplace(DOUBLEmatrix2D_* a, const DOUBLEmatrix2D_* b);
SECAPI DOUBLEmatrix2D_* DOUBLEmatrix2D_Minus(const DOUBLEmatrix2D_* a, const DOUBLEmatrix2D_* b);
SECAPI void DOUBLEmatrix2D_MinusInplace(DOUBLEmatrix2D_* a, const DOUBLEmatrix2D_* b);
SECAPI DOUBLEmatrix2D_* DOUBLEmatrix2D_Multiply(const DOUBLEmatrix2D_* a, const DOUBLEmatrix2D_* b);
SECAPI void DOUBLEmatrix2D_MultiplyInplace(DOUBLEmatrix2D_* a, const DOUBLEmatrix2D_* b);
SECAPI DOUBLEmatrix2D_* DOUBLEmatrix2D_Multiply_scalar(const DOUBLEmatrix2D_* a, DOUBLE b);
SECAPI void DOUBLEmatrix2D_MultiplyInplace_scalar(DOUBLEmatrix2D_* a, DOUBLE b);
SECAPI DOUBLEmatrix2D_* DOUBLEmatrix2D_Divide_scalar(const DOUBLEmatrix2D_* a, DOUBLE b);
SECAPI void DOUBLEmatrix2D_DivideInplace_scalar(DOUBLEmatrix2D_* a, DOUBLE b);
SECAPI void DOUBLEmatrix2D_Diagonal_scalar(DOUBLEmatrix2D_* a, DOUBLE b);
SECAPI void DOUBLEmatrix2D_Diagonal(DOUBLEmatrix2D_* a, const DOUBLE2D_* b);
SECAPI DOUBLE2D_* DOUBLEmatrix2D_GetRow(const DOUBLEmatrix2D_* p, INDEX r);
SECAPI DOUBLE2D_* DOUBLEmatrix2D_GetColumn(const DOUBLEmatrix2D_* p, INDEX c);
SECAPI void DOUBLEmatrix2D_extract(CTStream_* s, DOUBLEmatrix2D_* p);
SECAPI void DOUBLEmatrix2D_insert(CTStream_* s, DOUBLEmatrix2D_* p);

// DOUBLE3D
SECAPI DOUBLEmatrix3D_* DOUBLEmatrix3D_new();
SECAPI DOUBLEmatrix3D_* DOUBLEmatrix3D_new_x(DOUBLE x);
SECAPI DOUBLEmatrix3D_* DOUBLEmatrix3D_clone(const DOUBLEmatrix3D_* p);
SECAPI void DOUBLEmatrix3D_copy(DOUBLEmatrix3D_* a, const DOUBLEmatrix3D_* b);
SECAPI void DOUBLEmatrix3D_delete(DOUBLEmatrix3D_* p);
SECAPI DOUBLE* DOUBLEmatrix3D_Element(DOUBLEmatrix3D_* p, INDEX r, INDEX c);
SECAPI DOUBLE DOUBLEmatrix3D_Element_const(const DOUBLEmatrix3D_* p, INDEX r, INDEX c);
SECAPI DOUBLEmatrix3D_* DOUBLEmatrix3D_Transposed(const DOUBLEmatrix3D_* p);
SECAPI void DOUBLEmatrix3D_AssignTransposed(DOUBLEmatrix3D_* a, const DOUBLEmatrix3D_* b);
SECAPI DOUBLEmatrix3D_* DOUBLEmatrix3D_Plus(const DOUBLEmatrix3D_* a, const DOUBLEmatrix3D_* b);
SECAPI void DOUBLEmatrix3D_PlusInplace(DOUBLEmatrix3D_* a, const DOUBLEmatrix3D_* b);
SECAPI DOUBLEmatrix3D_* DOUBLEmatrix3D_Minus(const DOUBLEmatrix3D_* a, const DOUBLEmatrix3D_* b);
SECAPI void DOUBLEmatrix3D_MinusInplace(DOUBLEmatrix3D_* a, const DOUBLEmatrix3D_* b);
SECAPI DOUBLEmatrix3D_* DOUBLEmatrix3D_Multiply(const DOUBLEmatrix3D_* a, const DOUBLEmatrix3D_* b);
SECAPI void DOUBLEmatrix3D_MultiplyInplace(DOUBLEmatrix3D_* a, const DOUBLEmatrix3D_* b);
SECAPI DOUBLEmatrix3D_* DOUBLEmatrix3D_Multiply_scalar(const DOUBLEmatrix3D_* a, DOUBLE b);
SECAPI void DOUBLEmatrix3D_MultiplyInplace_scalar(DOUBLEmatrix3D_* a, DOUBLE b);
SECAPI DOUBLEmatrix3D_* DOUBLEmatrix3D_Divide_scalar(const DOUBLEmatrix3D_* a, DOUBLE b);
SECAPI void DOUBLEmatrix3D_DivideInplace_scalar(DOUBLEmatrix3D_* a, DOUBLE b);
SECAPI void DOUBLEmatrix3D_Diagonal_scalar(DOUBLEmatrix3D_* a, DOUBLE b);
SECAPI void DOUBLEmatrix3D_Diagonal(DOUBLEmatrix3D_* a, const DOUBLE3D_* b);
SECAPI DOUBLE3D_* DOUBLEmatrix3D_GetRow(const DOUBLEmatrix3D_* p, INDEX r);
SECAPI DOUBLE3D_* DOUBLEmatrix3D_GetColumn(const DOUBLEmatrix3D_* p, INDEX c);
SECAPI void DOUBLEmatrix3D_extract(CTStream_* s, DOUBLEmatrix3D_* p);
SECAPI void DOUBLEmatrix3D_insert(CTStream_* s, DOUBLEmatrix3D_* p);
SECAPI DOUBLE DOUBLEmatrix3D_Determinant(const DOUBLEmatrix3D_* p);
SECAPI DOUBLEmatrix3D_* DOUBLEmatrix3D_InverseMatrix(const DOUBLEmatrix3D_* p);

// DOUBLE4D
SECAPI DOUBLEmatrix4D_* DOUBLEmatrix4D_new();
SECAPI DOUBLEmatrix4D_* DOUBLEmatrix4D_new_x(DOUBLE x);
SECAPI DOUBLEmatrix4D_* DOUBLEmatrix4D_clone(const DOUBLEmatrix4D_* p);
SECAPI void DOUBLEmatrix4D_copy(DOUBLEmatrix4D_* a, const DOUBLEmatrix4D_* b);
SECAPI void DOUBLEmatrix4D_delete(DOUBLEmatrix4D_* p);
SECAPI DOUBLE* DOUBLEmatrix4D_Element(DOUBLEmatrix4D_* p, INDEX r, INDEX c);
SECAPI DOUBLE DOUBLEmatrix4D_Element_const(const DOUBLEmatrix4D_* p, INDEX r, INDEX c);
SECAPI DOUBLEmatrix4D_* DOUBLEmatrix4D_Transposed(const DOUBLEmatrix4D_* p);
SECAPI void DOUBLEmatrix4D_AssignTransposed(DOUBLEmatrix4D_* a, const DOUBLEmatrix4D_* b);
SECAPI DOUBLEmatrix4D_* DOUBLEmatrix4D_Plus(const DOUBLEmatrix4D_* a, const DOUBLEmatrix4D_* b);
SECAPI void DOUBLEmatrix4D_PlusInplace(DOUBLEmatrix4D_* a, const DOUBLEmatrix4D_* b);
SECAPI DOUBLEmatrix4D_* DOUBLEmatrix4D_Minus(const DOUBLEmatrix4D_* a, const DOUBLEmatrix4D_* b);
SECAPI void DOUBLEmatrix4D_MinusInplace(DOUBLEmatrix4D_* a, const DOUBLEmatrix4D_* b);
SECAPI DOUBLEmatrix4D_* DOUBLEmatrix4D_Multiply(const DOUBLEmatrix4D_* a, const DOUBLEmatrix4D_* b);
SECAPI void DOUBLEmatrix4D_MultiplyInplace(DOUBLEmatrix4D_* a, const DOUBLEmatrix4D_* b);
SECAPI DOUBLEmatrix4D_* DOUBLEmatrix4D_Multiply_scalar(const DOUBLEmatrix4D_* a, DOUBLE b);
SECAPI void DOUBLEmatrix4D_MultiplyInplace_scalar(DOUBLEmatrix4D_* a, DOUBLE b);
SECAPI DOUBLEmatrix4D_* DOUBLEmatrix4D_Divide_scalar(const DOUBLEmatrix4D_* a, DOUBLE b);
SECAPI void DOUBLEmatrix4D_DivideInplace_scalar(DOUBLEmatrix4D_* a, DOUBLE b);
SECAPI void DOUBLEmatrix4D_Diagonal_scalar(DOUBLEmatrix4D_* a, DOUBLE b);
SECAPI void DOUBLEmatrix4D_Diagonal(DOUBLEmatrix4D_* a, const DOUBLE4D_* b);
SECAPI DOUBLE4D_* DOUBLEmatrix4D_GetRow(const DOUBLEmatrix4D_* p, INDEX r);
SECAPI DOUBLE4D_* DOUBLEmatrix4D_GetColumn(const DOUBLEmatrix4D_* p, INDEX c);
SECAPI void DOUBLEmatrix4D_extract(CTStream_* s, DOUBLEmatrix4D_* p);
SECAPI void DOUBLEmatrix4D_insert(CTStream_* s, DOUBLEmatrix4D_* p);
SECAPI DOUBLEmatrix4D_* DOUBLEmatrix4D_InverseMatrix(const DOUBLEmatrix4D_* p);

// INDEX2D
SECAPI INDEXmatrix2D_* INDEXmatrix2D_new();
SECAPI INDEXmatrix2D_* INDEXmatrix2D_new_x(INDEX x);
SECAPI INDEXmatrix2D_* INDEXmatrix2D_clone(const INDEXmatrix2D_* p);
SECAPI void INDEXmatrix2D_copy(INDEXmatrix2D_* a, const INDEXmatrix2D_* b);
SECAPI void INDEXmatrix2D_delete(INDEXmatrix2D_* p);
SECAPI INDEX* INDEXmatrix2D_Element(INDEXmatrix2D_* p, INDEX r, INDEX c);
SECAPI INDEX INDEXmatrix2D_Element_const(const INDEXmatrix2D_* p, INDEX r, INDEX c);
SECAPI INDEXmatrix2D_* INDEXmatrix2D_Transposed(const INDEXmatrix2D_* p);
SECAPI void INDEXmatrix2D_AssignTransposed(INDEXmatrix2D_* a, const INDEXmatrix2D_* b);
SECAPI INDEXmatrix2D_* INDEXmatrix2D_Plus(const INDEXmatrix2D_* a, const INDEXmatrix2D_* b);
SECAPI void INDEXmatrix2D_PlusInplace(INDEXmatrix2D_* a, const INDEXmatrix2D_* b);
SECAPI INDEXmatrix2D_* INDEXmatrix2D_Minus(const INDEXmatrix2D_* a, const INDEXmatrix2D_* b);
SECAPI void INDEXmatrix2D_MinusInplace(INDEXmatrix2D_* a, const INDEXmatrix2D_* b);
SECAPI INDEXmatrix2D_* INDEXmatrix2D_Multiply(const INDEXmatrix2D_* a, const INDEXmatrix2D_* b);
SECAPI void INDEXmatrix2D_MultiplyInplace(INDEXmatrix2D_* a, const INDEXmatrix2D_* b);
SECAPI INDEXmatrix2D_* INDEXmatrix2D_Multiply_scalar(const INDEXmatrix2D_* a, INDEX b);
SECAPI void INDEXmatrix2D_MultiplyInplace_scalar(INDEXmatrix2D_* a, INDEX b);
SECAPI INDEXmatrix2D_* INDEXmatrix2D_Divide_scalar(const INDEXmatrix2D_* a, INDEX b);
SECAPI void INDEXmatrix2D_DivideInplace_scalar(INDEXmatrix2D_* a, INDEX b);
SECAPI void INDEXmatrix2D_Diagonal_scalar(INDEXmatrix2D_* a, INDEX b);
SECAPI void INDEXmatrix2D_Diagonal(INDEXmatrix2D_* a, const INDEX2D_* b);
SECAPI INDEX2D_* INDEXmatrix2D_GetRow(const INDEXmatrix2D_* p, INDEX r);
SECAPI INDEX2D_* INDEXmatrix2D_GetColumn(const INDEXmatrix2D_* p, INDEX c);
SECAPI void INDEXmatrix2D_extract(CTStream_* s, INDEXmatrix2D_* p);
SECAPI void INDEXmatrix2D_insert(CTStream_* s, INDEXmatrix2D_* p);

// INDEX3D
SECAPI INDEXmatrix3D_* INDEXmatrix3D_new();
SECAPI INDEXmatrix3D_* INDEXmatrix3D_new_x(INDEX x);
SECAPI INDEXmatrix3D_* INDEXmatrix3D_clone(const INDEXmatrix3D_* p);
SECAPI void INDEXmatrix3D_copy(INDEXmatrix3D_* a, const INDEXmatrix3D_* b);
SECAPI void INDEXmatrix3D_delete(INDEXmatrix3D_* p);
SECAPI INDEX* INDEXmatrix3D_Element(INDEXmatrix3D_* p, INDEX r, INDEX c);
SECAPI INDEX INDEXmatrix3D_Element_const(const INDEXmatrix3D_* p, INDEX r, INDEX c);
SECAPI INDEXmatrix3D_* INDEXmatrix3D_Transposed(const INDEXmatrix3D_* p);
SECAPI void INDEXmatrix3D_AssignTransposed(INDEXmatrix3D_* a, const INDEXmatrix3D_* b);
SECAPI INDEXmatrix3D_* INDEXmatrix3D_Plus(const INDEXmatrix3D_* a, const INDEXmatrix3D_* b);
SECAPI void INDEXmatrix3D_PlusInplace(INDEXmatrix3D_* a, const INDEXmatrix3D_* b);
SECAPI INDEXmatrix3D_* INDEXmatrix3D_Minus(const INDEXmatrix3D_* a, const INDEXmatrix3D_* b);
SECAPI void INDEXmatrix3D_MinusInplace(INDEXmatrix3D_* a, const INDEXmatrix3D_* b);
SECAPI INDEXmatrix3D_* INDEXmatrix3D_Multiply(const INDEXmatrix3D_* a, const INDEXmatrix3D_* b);
SECAPI void INDEXmatrix3D_MultiplyInplace(INDEXmatrix3D_* a, const INDEXmatrix3D_* b);
SECAPI INDEXmatrix3D_* INDEXmatrix3D_Multiply_scalar(const INDEXmatrix3D_* a, INDEX b);
SECAPI void INDEXmatrix3D_MultiplyInplace_scalar(INDEXmatrix3D_* a, INDEX b);
SECAPI INDEXmatrix3D_* INDEXmatrix3D_Divide_scalar(const INDEXmatrix3D_* a, INDEX b);
SECAPI void INDEXmatrix3D_DivideInplace_scalar(INDEXmatrix3D_* a, INDEX b);
SECAPI void INDEXmatrix3D_Diagonal_scalar(INDEXmatrix3D_* a, INDEX b);
SECAPI void INDEXmatrix3D_Diagonal(INDEXmatrix3D_* a, const INDEX3D_* b);
SECAPI INDEX3D_* INDEXmatrix3D_GetRow(const INDEXmatrix3D_* p, INDEX r);
SECAPI INDEX3D_* INDEXmatrix3D_GetColumn(const INDEXmatrix3D_* p, INDEX c);
SECAPI void INDEXmatrix3D_extract(CTStream_* s, INDEXmatrix3D_* p);
SECAPI void INDEXmatrix3D_insert(CTStream_* s, INDEXmatrix3D_* p);
SECAPI INDEX INDEXmatrix3D_Determinant(const INDEXmatrix3D_* p);
SECAPI INDEXmatrix3D_* INDEXmatrix3D_InverseMatrix(const INDEXmatrix3D_* p);

// INDEX4D
SECAPI INDEXmatrix4D_* INDEXmatrix4D_new();
SECAPI INDEXmatrix4D_* INDEXmatrix4D_new_x(INDEX x);
SECAPI INDEXmatrix4D_* INDEXmatrix4D_clone(const INDEXmatrix4D_* p);
SECAPI void INDEXmatrix4D_copy(INDEXmatrix4D_* a, const INDEXmatrix4D_* b);
SECAPI void INDEXmatrix4D_delete(INDEXmatrix4D_* p);
SECAPI INDEX* INDEXmatrix4D_Element(INDEXmatrix4D_* p, INDEX r, INDEX c);
SECAPI INDEX INDEXmatrix4D_Element_const(const INDEXmatrix4D_* p, INDEX r, INDEX c);
SECAPI INDEXmatrix4D_* INDEXmatrix4D_Transposed(const INDEXmatrix4D_* p);
SECAPI void INDEXmatrix4D_AssignTransposed(INDEXmatrix4D_* a, const INDEXmatrix4D_* b);
SECAPI INDEXmatrix4D_* INDEXmatrix4D_Plus(const INDEXmatrix4D_* a, const INDEXmatrix4D_* b);
SECAPI void INDEXmatrix4D_PlusInplace(INDEXmatrix4D_* a, const INDEXmatrix4D_* b);
SECAPI INDEXmatrix4D_* INDEXmatrix4D_Minus(const INDEXmatrix4D_* a, const INDEXmatrix4D_* b);
SECAPI void INDEXmatrix4D_MinusInplace(INDEXmatrix4D_* a, const INDEXmatrix4D_* b);
SECAPI INDEXmatrix4D_* INDEXmatrix4D_Multiply(const INDEXmatrix4D_* a, const INDEXmatrix4D_* b);
SECAPI void INDEXmatrix4D_MultiplyInplace(INDEXmatrix4D_* a, const INDEXmatrix4D_* b);
SECAPI INDEXmatrix4D_* INDEXmatrix4D_Multiply_scalar(const INDEXmatrix4D_* a, INDEX b);
SECAPI void INDEXmatrix4D_MultiplyInplace_scalar(INDEXmatrix4D_* a, INDEX b);
SECAPI INDEXmatrix4D_* INDEXmatrix4D_Divide_scalar(const INDEXmatrix4D_* a, INDEX b);
SECAPI void INDEXmatrix4D_DivideInplace_scalar(INDEXmatrix4D_* a, INDEX b);
SECAPI void INDEXmatrix4D_Diagonal_scalar(INDEXmatrix4D_* a, INDEX b);
SECAPI void INDEXmatrix4D_Diagonal(INDEXmatrix4D_* a, const INDEX4D_* b);
SECAPI INDEX4D_* INDEXmatrix4D_GetRow(const INDEXmatrix4D_* p, INDEX r);
SECAPI INDEX4D_* INDEXmatrix4D_GetColumn(const INDEXmatrix4D_* p, INDEX c);
SECAPI void INDEXmatrix4D_extract(CTStream_* s, INDEXmatrix4D_* p);
SECAPI void INDEXmatrix4D_insert(CTStream_* s, INDEXmatrix4D_* p);
SECAPI INDEXmatrix4D_* INDEXmatrix4D_InverseMatrix(const INDEXmatrix4D_* p);

SECAPI DOUBLEmatrix3D_* FLOAT2DOUBLEmx(const FLOATmatrix3D_* p);
SECAPI FLOATmatrix3D_* DOUBLE2FLOATmx(const DOUBLEmatrix3D_* p);

#ifdef __cplusplus
}
#endif

#endif
