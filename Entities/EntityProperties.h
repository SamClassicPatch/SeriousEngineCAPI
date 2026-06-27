#ifndef SECAPI_ENTITIES_ENTITY_PROPERTIES_H
#define SECAPI_ENTITIES_ENTITY_PROPERTIES_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI MEMBER_VAL_DECL(CEntityPropertyEnumValue, INDEX, epev_iValue)
SECAPI MEMBER_PTR_DECL(CEntityPropertyEnumValue, char, epev_strName)

SECAPI MEMBER_ARR_DECL(CEntityPropertyEnumType, CEntityPropertyEnumValue_, epet_aepevValues)
SECAPI MEMBER_VAL_DECL(CEntityPropertyEnumType, INDEX, epet_ctValues)

typedef FLOAT RANGE;
typedef INDEX ILLUMINATIONTYPE;
typedef INDEX ANIMATION;

#define EPROPF_HIDEINPERSPECTIVE    (1UL<<0)  // not visualized in perspective view (for ranges)

#define EPT_PARENT_ 9998
#define EPT_SPAWNFLAGS_ 9999
#define EPT_ENUM_ 1
#define EPT_BOOL_ 2
#define EPT_FLOAT_ 3
#define EPT_COLOR_ 4
#define EPT_STRING_ 5
#define EPT_RANGE_ 6
#define EPT_ENTITYPTR_ 7
#define EPT_FILENAME_ 8
#define EPT_INDEX_ 9
#define EPT_ANIMATION_ 10
#define EPT_ILLUMINATIONTYPE_ 11
#define EPT_FLOATAABBOX3D_ 12
#define EPT_ANGLE_ 13
#define EPT_FLOAT3D_ 14
#define EPT_ANGLE3D_ 15
#define EPT_FLOATplane3D_ 16
#define EPT_MODELOBJECT_ 17
#define EPT_PLACEMENT3D_ 18
#define EPT_ANIMOBJECT_ 19
#define EPT_FILENAMENODEP_ 20
#define EPT_SOUNDOBJECT_ 21
#define EPT_STRINGTRANS_ 22
#define EPT_FLOATQUAT3D_ 23
#define EPT_FLOATMATRIX3D_ 24
#define EPT_FLAGS_ 25
#define EPT_MODELINSTANCE_ 26

SECAPI MEMBER_VAL_DECL(CEntityProperty, PropertyType_, ep_eptType)
SECAPI MEMBER_PTR_DECL(CEntityProperty, CEntityPropertyEnumType_, ep_pepetEnumType)
SECAPI MEMBER_VAL_DECL(CEntityProperty, SLONG, ep_slOffset)
SECAPI MEMBER_PTR_DECL(CEntityProperty, char, ep_strName)
SECAPI MEMBER_VAL_DECL(CEntityProperty, ULONG, ep_ulFlags)
SECAPI MEMBER_VAL_DECL(CEntityProperty, char, ep_chShortcut)

SECAPI MEMBER_ARR_DECL(CDLLEntityClass, CEntityProperty_, dec_aepProperties)
SECAPI MEMBER_VAL_DECL(CDLLEntityClass, INDEX, dec_ctProperties)
SECAPI MEMBER_PTR_DECL(CDLLEntityClass, char, dec_strName)
SECAPI MEMBER_PTR_DECL(CDLLEntityClass, char, dec_strIconFileName)
SECAPI MEMBER_PTR_DECL(CDLLEntityClass, CDLLEntityClass_, dec_pdecBase)
SECAPI CEntityProperty_* CDLLEntityClass_PropertyForName(CDLLEntityClass_* p, const CTString_* s);

#ifdef __cplusplus
}
#endif

#endif
