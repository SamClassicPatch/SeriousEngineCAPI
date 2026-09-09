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

#include "Functions.h"

ULONG NormFloatToByte_(const FLOAT f)
{
  return NormFloatToByte(f);
}

FLOAT NormByteToFloat_(const ULONG ul)
{
  return NormByteToFloat(ul);
}

SLONG FloatToInt_(FLOAT f)
{
  return FloatToInt(f);
}

FLOAT Log2_(FLOAT f)
{
  return Log2(f);
}

FLOAT Sqrt_(FLOAT x)
{
  return Sqrt(x);
}

ANGLE WrapAngle_(ANGLE a)
{
  return WrapAngle(a);
}

ANGLE NormalizeAngle_(ANGLE a)
{
  return NormalizeAngle(a);
}

ANGLE AngleDeg_(FLOAT fDegrees)
{
  return AngleDeg(fDegrees);
}

ANGLE AngleRad_(DOUBLE dRadians)
{
  return AngleRad(dRadians);
}

FLOAT DegAngle_(ANGLE aAngle)
{
  return DegAngle(aAngle);
}

FLOAT RadAngle_(ANGLE aAngle)
{
  return RadAngle(aAngle);
}

FLOAT Sin_(ANGLE a)
{
  return Sin(a);
}

FLOAT Cos_(ANGLE a)
{
  return Cos(a);
}

FLOAT Tan_(ANGLE a)
{
  return Tan(a);
}

FLOAT SinFast_(ANGLE a)
{
  return SinFast(a);
}

FLOAT CosFast_(ANGLE a)
{
  return CosFast(a);
}

FLOAT TanFast_(ANGLE a)
{
  return TanFast(a);
}

ANGLE ASin_(DOUBLE y)
{
  return ASin(y);
}

ANGLE ACos_(DOUBLE x)
{
  return ACos(x);
}

ANGLE ATan_(DOUBLE z)
{
  return ATan(z);
}

ANGLE ATan2_(DOUBLE y, DOUBLE x)
{
  return ATan2(y, x);
}

void Snap_(DOUBLE* dest, DOUBLE step)
{
  Snap(*dest, step);
}

void Snap_f(FLOAT* dest, FLOAT step)
{
  Snap(*dest, step);
}

FLOAT LerpFLOAT_(FLOAT f0, FLOAT f1, FLOAT fFactor)
{
  return LerpFLOAT(f0, f1, fFactor);
}

ANGLE LerpANGLE_(ANGLE a0, ANGLE a1, FLOAT fFactor)
{
  return LerpANGLE(a0, a1, fFactor);
}

FLOAT CalculateRatio_(FLOAT fCurr, FLOAT fMin, FLOAT fMax, FLOAT fFadeInRatio, FLOAT fFadeOutRatio)
{
  return CalculateRatio(fCurr, fMin, fMax, fFadeInRatio, fFadeOutRatio);
}
