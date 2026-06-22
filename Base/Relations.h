#ifndef SECAPI_BASE_RELATIONS_H
#define SECAPI_BASE_RELATIONS_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI CListHead_* CRelationLnk_GetSrc(CRelationLnk_* p);
SECAPI CListHead_* CRelationLnk_GetDst(CRelationLnk_* p);

SECAPI CRelationLnk_* CRelationLnk_from_rl_lnSrc(CListNode_* p);
SECAPI CRelationLnk_* CRelationLnk_from_rl_lnDst(CListNode_* p);

#ifdef __cplusplus
}
#endif

#endif
