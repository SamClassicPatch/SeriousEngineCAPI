#ifndef SECAPI_MATH_FLOAT_H
#define SECAPI_MATH_FLOAT_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef SERIOUSENGINECAPI_EXPORTS
#define FPT_24BIT_ 0
#define FPT_53BIT_ 1
#define FPT_64BIT_ 2
#endif

SECAPI FPUPrecisionType_ GetFPUPrecision_();
SECAPI void SetFPUPrecision_(FPUPrecisionType_ fptNew);

#ifdef __cplusplus
}
#endif

#endif
