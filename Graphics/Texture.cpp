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

#include "Texture.h"
#include <Engine/Graphics/TextureEffects.h>

CTextureData_* CTextureData_new()
{
  return (CTextureData_*)(new CTextureData());
}

void CTextureData_delete(CTextureData_* p)
{
  delete ((CTextureData*)p);
}

DOUBLE CTextureData_td_ptegEffect_GetRenderingTime(CTextureData_* p)
{
  CTextureData& d = *((CTextureData*)p);
  return d.td_ptegEffect->GetRenderingTime();
}

ULONG* CTextureData_td_ulFlags(CTextureData_* p)
{
  CTextureData& d = *((CTextureData*)p);
  return &(d.td_ulFlags);
}

PIX* CTextureData_td_pixBufferWidth(CTextureData_* p)
{
  CTextureData& d = *((CTextureData*)p);
  return &(d.td_pixBufferWidth);
}

PIX* CTextureData_td_pixBufferHeight(CTextureData_* p)
{
  CTextureData& d = *((CTextureData*)p);
  return &(d.td_pixBufferHeight);
}

CTextureData_** CTextureData_td_ptdBaseTexture(CTextureData_* p)
{
  CTextureData& d = *((CTextureData*)p);
  return (CTextureData_**)(&(d.td_ptdBaseTexture));
}

void CTextureData_td_ptegEffect_AddEffectSource(CTextureData_* p, ULONG ulEffectSourceType, PIX pixU0, PIX pixV0, PIX pixU1, PIX pixV1)
{
  ((CTextureData*)p)->td_ptegEffect->AddEffectSource(ulEffectSourceType, pixU0, pixV0, pixU1, pixV1);
}

ULONG CTextureData_td_ptegEffect_teg_ulEffectType(CTextureData_* p)
{
  return ((CTextureData*)p)->td_ptegEffect->teg_ulEffectType;
}

INDEX* CTextureData_td_iFirstMipLevel(CTextureData_* p)
{
  CTextureData& d = *((CTextureData*)p);
  return &(d.td_iFirstMipLevel);
}

INDEX* CTextureData_td_ctFineMipLevels(CTextureData_* p)
{
  CTextureData& d = *((CTextureData*)p);
  return &(d.td_ctFineMipLevels);
}

MEX* CTextureData_td_mexWidth(CTextureData_* p)
{
  CTextureData& d = *((CTextureData*)p);
  return &(d.td_mexWidth);
}

MEX* CTextureData_td_mexHeight(CTextureData_* p)
{
  CTextureData& d = *((CTextureData*)p);
  return &(d.td_mexHeight);
}

INDEX* CTextureData_td_ctFrames(CTextureData_* p)
{
  CTextureData& d = *((CTextureData*)p);
  return &(d.td_ctFrames);
}

ULONG** CTextureData_td_pulFrames(CTextureData_* p)
{
  CTextureData& d = *((CTextureData*)p);
  return &(d.td_pulFrames);
}

BOOL CTextureData_HasEffectTexture(const CTextureData_* p)
{
  return ((const CTextureData*)p)->td_ptegEffect != NULL;
}

INDEX CTextureData_ClampMipLevel(const CTextureData_* p, FLOAT mip)
{
  return ((const CTextureData*)p)->ClampMipLevel(mip);
}

MEX CTextureData_GetWidth(const CTextureData_* p)
{
  return ((const CTextureData*)p)->GetWidth();
}

MEX CTextureData_GetHeight(const CTextureData_* p)
{
  return ((const CTextureData*)p)->GetHeight();
}

PIX CTextureData_GetPixWidth(const CTextureData_* p)
{
  return ((const CTextureData*)p)->GetPixWidth();
}

PIX CTextureData_GetPixHeight(const CTextureData_* p)
{
  return ((const CTextureData*)p)->GetPixHeight();
}

ULONG CTextureData_GetFlags(const CTextureData_* p)
{
  return ((const CTextureData*)p)->GetFlags();
}

ULONG CTextureData_GetNoOfMips(const CTextureData_* p)
{
  return ((const CTextureData*)p)->GetNoOfMips();
}

ULONG CTextureData_GetNoOfFineMips(const CTextureData_* p)
{
  return ((const CTextureData*)p)->GetNoOfFineMips();
}

BOOL CTextureData_IsModified(CTextureData_* p)
{
  return ((CTextureData*)p)->IsModified();
}

static void Export_t(CTextureData_* p, CImageInfo_* i, INDEX frame)
{
  SECAPI_TRY
  ((CTextureData*)p)->Export_t(*((CImageInfo*)i), frame);
  SECAPI_CATCH
}

void CTextureData_Export_t(CTextureData_* p, CImageInfo_* i, INDEX frame)
{
  STREAM_TRY
  Export_t(p, i, frame);
  STREAM_CATCH
}

void CTextureData_CreateEffectTexture(CTextureData_* p, PIX pixWidth, PIX pixHeight, MEX mexWidth, CTextureData_* ptdBaseTexture, ULONG ulGlobalEffect)
{
  ((CTextureData*)p)->CreateEffectTexture(pixWidth, pixHeight, mexWidth, (CTextureData*)ptdBaseTexture, ulGlobalEffect);
}

static void Create_t(CTextureData_* p, const CImageInfo_* i, MEX wanted, INDEX fineMips, BOOL force32bit)
{
  SECAPI_TRY
  ((CTextureData*)p)->Create_t((const CImageInfo*)i, wanted, fineMips, force32bit);
  SECAPI_CATCH
}

void CTextureData_Create_t(CTextureData_* p, const CImageInfo_* i, MEX wanted, INDEX fineMips, BOOL force32bit)
{
  STREAM_TRY
  Create_t(p, i, wanted, fineMips, force32bit);
  STREAM_CATCH
}

void CTextureData_Clear(CTextureData_* p)
{
  ((CTextureData*)p)->Clear();
}

static void Force(CTextureData_* p, ULONG flags)
{
  SECAPI_TRY
  ((CTextureData*)p)->Force(flags);
  SECAPI_CATCH
}

void CTextureData_Force(CTextureData_* p, ULONG flags)
{
  STREAM_TRY
  Force(p, flags);
  STREAM_CATCH
}

COLOR CTextureData_GetTexel(CTextureData_* p, MEX u, MEX v)
{
  COLOR res = 0;
  STREAM_TRY
  res = ((CTextureData*)p)->GetTexel(u, v);
  STREAM_CATCH
  return res;
}

void CTextureData_FetchRow(CTextureData_* p, PIX row, void* dst, INDEX channel, BOOL convertToFloat)
{
  STREAM_TRY
  ((CTextureData*)p)->FetchRow(row, dst, channel, convertToFloat);
  STREAM_CATCH
}

ULONG* CTextureData_GetRowPointer(CTextureData_* p, PIX row)
{
  ULONG* res = NULL;
  STREAM_TRY
  res = ((CTextureData*)p)->GetRowPointer(row);
  STREAM_CATCH
  return res;
}


CTextureObject_* CTextureObject_new()
{
  return (CTextureObject_*)(new CTextureObject());
}

void CTextureObject_delete(CTextureObject_* p)
{
  delete ((CTextureObject*)p);
}

MEX CTextureObject_GetWidth(const CTextureObject_* p)
{
  return ((const CTextureObject*)p)->GetWidth();
}

MEX CTextureObject_GetHeight(const CTextureObject_* p)
{
  return ((const CTextureObject*)p)->GetHeight();
}

ULONG CTextureObject_GetFlags(const CTextureObject_* p)
{
  return ((const CTextureObject*)p)->GetFlags();
}

static void SetData_t(CTextureObject_* p, const CTFileName_* f)
{
  SECAPI_TRY
  ((CTextureObject*)p)->SetData_t(*((const CTFileName*)f));
  SECAPI_CATCH
}

void CTextureObject_SetData_t(CTextureObject_* p, const CTFileName_* f)
{
  STREAM_TRY
  SetData_t(p, f);
  STREAM_CATCH
}

const CTFileName_* CTextureObject_GetName(CTextureObject_* p)
{
  return (const CTFileName_*)(&(((CTextureObject*)p)->GetName()));
}

static void sehCreateTexture_t_(const CTFileName_* f, MEX mex, INDEX mips, BOOL force32bit)
{
  SECAPI_TRY
  CreateTexture_t(*((const CTFileName*)f), mex, mips, force32bit);
  SECAPI_CATCH
}

void CreateTexture_t_(const CTFileName_* f, MEX mex, INDEX mips, BOOL force32bit)
{
  STREAM_TRY
  sehCreateTexture_t_(f, mex, mips, force32bit);
  STREAM_CATCH
}

static void sehCreateTexture_t_o(const CTFileName_* f, const CTFileName_* of, MEX mex, INDEX mips, BOOL force32bit)
{
  SECAPI_TRY
  CreateTexture_t(*((const CTFileName*)f), *((const CTFileName*)of), mex, mips, force32bit);
  SECAPI_CATCH
}

void CreateTexture_t_o(const CTFileName_* f, const CTFileName_* of, MEX mex, INDEX mips, BOOL force32bit)
{
  STREAM_TRY
  sehCreateTexture_t_o(f, of, mex, mips, force32bit);
  STREAM_CATCH
}

void sehProcessScript_t_(const CTFileName_* f)
{
  SECAPI_TRY
  ProcessScript_t(*((const CTFileName*)f));
  SECAPI_CATCH
}

void ProcessScript_t_(const CTFileName_* f)
{
  STREAM_TRY
  sehProcessScript_t_(f);
  STREAM_CATCH
}

INDEX _ctTextureEffectGlobalPresets_()
{
  return _ctTextureEffectGlobalPresets;
}

const char* _ategtTextureEffectGlobalPresets_tegt_strName(INDEX iClass)
{
  return _ategtTextureEffectGlobalPresets[iClass].tegt_strName;
}

INDEX _ategtTextureEffectGlobalPresets_tet_ctEffectSourceTypes(INDEX iClass)
{
  return _ategtTextureEffectGlobalPresets[iClass].tet_ctEffectSourceTypes;
}

const char* _ategtTextureEffectGlobalPresets_tet_atestEffectSourceTypes_test_strName(INDEX iClass, INDEX iEffect)
{
  return _ategtTextureEffectGlobalPresets[iClass].tet_atestEffectSourceTypes[iEffect].test_strName;
}
