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

#ifndef SECAPI_LIGHT_LIGHT_SOURCE_H
#define SECAPI_LIGHT_LIGHT_SOURCE_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef SERIOUSENGINECAPI_EXPORTS
/*
 * Structure describing properties of a light source entity.
 */
#define LSF_DIRECTIONAL             (1L<<0)   // rays are not emanating from point, but from direction
#define LSF_CASTSHADOWS             (1L<<1)   // light can cast shadows
#define LSF_DIFFUSION               (1L<<2)   // intensity depends on angle with polygon normal
#define LSF_DARKLIGHT               (1L<<3)   // darkens polygons instead of lighting them
#define LSF_SUBSTRACTSECTORAMBIENT  (1L<<4)   // sector ambient is substract from intensity
#define LSF_NONPERSISTENT           (1L<<5)   // not saved (can change during game)
#define LSF_LENSFLAREONLY           (1L<<6)   // no light, only lens flare
#define LSF_DYNAMIC                 (1L<<7)   // dynamic light (fast frequent caching, no shadows)

#endif

SECAPI MEMBER_VAL_DECL(CLightSource, ULONG, ls_ulFlags)
SECAPI MEMBER_PTR_DECL(CLightSource, CEntity_, ls_penEntity)

#ifdef __cplusplus
}
#endif

#endif
