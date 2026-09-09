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

#ifndef SECAPI_MATH_CLIPPING_H
#define SECAPI_MATH_CLIPPING_H
#include "../Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef SERIOUSENGINECAPI_EXPORTS
/*
 * Line clipping flags
 */
#define LCF_REMOVED   (0x00L)  // the entire edge is invisible
#define LCF_UNCLIPPED (0x80L)  // this point remains unclipped
#define LCF_NEAR      (0x01L)  // this point is clipped at near plane
#define LCF_FAR       (0x02L)  // this point is clipped at far plane
#define LCF_LEFT      (0x04L)  // this point is clipped at left plane
#define LCF_RIGHT     (0x08L)  // this point is clipped at right plane
#define LCF_TOP       (0x10L)  // this point is clipped at top plane
#define LCF_BOTTOM    (0x20L)  // this point is clipped at bottom plane

#define LCF_EDGEREMOVED (0x0000L)   // used for testing if entire edge is removed
// shifts used for clip flags for start/end vertex
#define LCS_VERTEX0 (0)
#define LCS_VERTEX1 (8)
// masks used for clip flags for start/end vertex
#define LCM_VERTEX0 (0x00FFL)
#define LCM_VERTEX1 (0xFF00L)
// creating line clip flags for start/end vertex
#define LCFVERTEX0(lcf) ((lcf)<<LCS_VERTEX0)
#define LCFVERTEX1(lcf) ((lcf)<<LCS_VERTEX1)
#endif

#ifdef __cplusplus
}
#endif

#endif
