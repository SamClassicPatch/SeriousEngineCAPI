#ifndef SECAPI_CLASSES_BASE_EVENTS_H
#define SECAPI_CLASSES_BASE_EVENTS_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EFirstWorldBase_ EFirstWorldBase_;

inline CEntityEvent_* EFirstWorldBase_to_CEntityEvent(EFirstWorldBase_* p) { return (CEntityEvent_*)p; }
inline const CEntityEvent_* EFirstWorldBase_to_CEntityEvent_const(const EFirstWorldBase_* p) { return (const CEntityEvent_*)p; }
inline EFirstWorldBase_* CEntityEvent_to_EFirstWorldBase(CEntityEvent_* p) { return (EFirstWorldBase_*)p; }
inline const EFirstWorldBase_* CEntityEvent_to_EFirstWorldBase_const(const CEntityEvent_* p) { return (const EFirstWorldBase_*)p; }
SECAPI EFirstWorldBase_* EFirstWorldBase_new();
SECAPI EFirstWorldBase_* EFirstWorldBase_clone(const EFirstWorldBase_* p);
SECAPI void EFirstWorldBase_delete(EFirstWorldBase_* p);
SECAPI void EFirstWorldBase_copy(EFirstWorldBase_* a, const EFirstWorldBase_* b);

#ifdef __cplusplus
}
#endif

#endif
