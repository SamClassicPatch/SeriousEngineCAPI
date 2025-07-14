#ifndef SECAPI_BASE_STATISTICS_H
#define SECAPI_BASE_STATISTICS_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI void STAT_Reset_();
SECAPI void STAT_Report_(CTString_* strReport);

#ifdef __cplusplus
}
#endif

#endif
