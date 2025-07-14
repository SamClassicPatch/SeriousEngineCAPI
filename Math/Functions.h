#ifndef SECAPI_MATH_FUNCTIONS_H
#define SECAPI_MATH_FUNCTIONS_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef SERIOUSENGINECAPI_EXPORTS
#define ANGLE_SNAP (0.25f)
#define PI FLOAT(3.14159265359)
#endif

SECAPI ULONG NormFloatToByte_(const FLOAT f);
SECAPI FLOAT NormByteToFloat_(const ULONG ul);
SECAPI SLONG FloatToInt_(FLOAT f);
SECAPI FLOAT Log2_(FLOAT f);
SECAPI FLOAT Sqrt_(FLOAT x);
SECAPI ANGLE WrapAngle_(ANGLE a);
SECAPI ANGLE NormalizeAngle_(ANGLE a);
SECAPI ANGLE AngleDeg_(FLOAT fDegrees);
SECAPI ANGLE AngleRad_(DOUBLE dRadians);
SECAPI FLOAT DegAngle_(ANGLE aAngle);
SECAPI FLOAT RadAngle_(ANGLE aAngle);
SECAPI FLOAT Sin_(ANGLE a);
SECAPI FLOAT Cos_(ANGLE a);
SECAPI FLOAT Tan_(ANGLE a);
SECAPI FLOAT SinFast_(ANGLE a);
SECAPI FLOAT CosFast_(ANGLE a);
SECAPI FLOAT TanFast_(ANGLE a);
SECAPI ANGLE ASin_(DOUBLE y);
SECAPI ANGLE ACos_(DOUBLE x);
SECAPI ANGLE ATan_(DOUBLE z);
SECAPI ANGLE ATan2_(DOUBLE y, DOUBLE x);
SECAPI void Snap_(DOUBLE* dest, DOUBLE step);
SECAPI void Snap_f(FLOAT* dest, FLOAT step);
SECAPI FLOAT LerpFLOAT_(FLOAT f0, FLOAT f1, FLOAT fFactor);
SECAPI ANGLE LerpANGLE_(ANGLE a0, ANGLE a1, FLOAT fFactor);
SECAPI FLOAT CalculateRatio_(FLOAT fCurr, FLOAT fMin, FLOAT fMax, FLOAT fFadeInRatio, FLOAT fFadeOutRatio);

#ifdef __cplusplus
}
#endif

#endif
