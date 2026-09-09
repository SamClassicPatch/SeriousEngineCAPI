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

#include "WorldRayCasting.h"

MEMBER_VAL_IMPL(CCastRay, BOOL, cr_bAllowOverHit)
MEMBER_VAL_IMPL(CCastRay, BOOL, cr_bHitPortals)
MEMBER_VAL_IMPL(CCastRay, TestType_, cr_ttHitModels)
MEMBER_VAL_IMPL(CCastRay, BOOL, cr_bHitFields)
MEMBER_VAL_IMPL(CCastRay, BOOL, cr_bHitBrushes)
MEMBER_PTR_IMPL(CCastRay, CEntity_, cr_penHit)
MEMBER_VAL_IMPL(CCastRay, FLOAT3D_, cr_vHit)
MEMBER_PTR_IMPL(CCastRay, CBrushPolygon_, cr_pbpoBrushPolygon)
MEMBER_PTR_IMPL(CCastRay, CBrushSector_, cr_pbscBrushSector)

CCastRay_* CCastRay_new_pl(CEntity_* o, const CPlacement3D_* pl)
{
  return (CCastRay_*)(new CCastRay((CEntity*)o, *((CPlacement3D*)pl)));
}

CCastRay_* CCastRay_new_plf(CEntity_* o, const CPlacement3D_* pl, FLOAT f)
{
  return (CCastRay_*)(new CCastRay((CEntity*)o, *((CPlacement3D*)pl), f));
}

CCastRay_* CCastRay_new_vv(CEntity_* o, const FLOAT3D_* vo, const FLOAT3D_* vt)
{
  return (CCastRay_*)(new CCastRay((CEntity*)o, *((FLOAT3D*)vo), *((FLOAT3D*)vt)));
}

CCastRay_* CCastRay_clone(const CCastRay_* p)
{
  return (CCastRay_*)(new CCastRay(*((const CCastRay*)p)));
}

void CCastRay_copy(CCastRay_* a, const CCastRay_* b)
{
  *((CCastRay*)a) = *((const CCastRay*)b);
}

void CCastRay_delete(CCastRay_* p)
{
  delete ((CCastRay*)p);
}

void CCastRay_Cast(CCastRay_* p, CWorld_* w)
{
  ((CCastRay*)p)->Cast((CWorld*)w);
}

void CCastRay_ContinueCast(CCastRay_* p, CWorld_* w)
{
  ((CCastRay*)p)->ContinueCast((CWorld*)w);
}
