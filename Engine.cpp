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

#include "Engine.h"
#include "Graphics/Shader.h"

static void (__stdcall* pglBlendEquation)(int) = NULL;

#define GL_BLEND_EQUATION_EXT 0x8009
#define GL_FUNC_ADD_EXT 0x8006
#define GL_FUNC_SUBTRACT_EXT 0x800A
#define GL_FUNC_REVERSE_SUBTRACT_EXT 0x800B
#define GL_MIN_EXT 0x8007
#define GL_MAX_EXT 0x8008
static GfxBlendEquation ogl_GetBlendEquation()
{
  int blend_equation = GL_FUNC_ADD_EXT;
  const int enginedll_base_address = reinterpret_cast<int>(&CEntity::HandleSentEvents) - 0xFEC80;
  void (**ppglGetIntegerv)(int, int*) = (void (**)(int, int*))(enginedll_base_address + 0x1F9E60);
  (*ppglGetIntegerv)(GL_BLEND_EQUATION_EXT, &blend_equation);
  switch (blend_equation)
  {
  case GL_FUNC_ADD_EXT:
    return GFX_BLENDEQ_ADD;

  case GL_FUNC_SUBTRACT_EXT:
    return GFX_BLENDEQ_SUBTRACT;

  case GL_FUNC_REVERSE_SUBTRACT_EXT:
    return GFX_BLENDEQ_REVSUBTRACT;

  case GL_MIN_EXT:
    return GFX_BLENDEQ_MIN;

  case GL_MAX_EXT:
    return GFX_BLENDEQ_MAX;

  default:
    return GFX_BLENDEQ_ADD;
  }
}

static void ogl_BlendEquation(GfxBlendEquation gfx_blend_equation)
{
  if (!pglBlendEquation)
    return;
  int blend_equation = GL_FUNC_ADD_EXT;
  switch (gfx_blend_equation)
  {
  case GFX_BLENDEQ_ADD:
    blend_equation = GL_FUNC_ADD_EXT;
    break;

  case GFX_BLENDEQ_SUBTRACT:
    blend_equation = GL_FUNC_SUBTRACT_EXT;
    break;

  case GFX_BLENDEQ_REVSUBTRACT:
    blend_equation = GL_FUNC_REVERSE_SUBTRACT_EXT;
    break;

  case GFX_BLENDEQ_MIN:
    blend_equation = GL_MIN_EXT;
    break;

  case GFX_BLENDEQ_MAX:
    blend_equation = GL_MAX_EXT;
    break;

  default:
    blend_equation = GL_FUNC_ADD_EXT;
    break;
  }
  pglBlendEquation(blend_equation);
}

static GfxBlendEquation d3d_GetBlendEquation()
{
  HRESULT hr;
  DWORD blend_equation = D3DBLENDOP_ADD;
  hr = _pGfx->gl_pd3dDevice->GetRenderState(D3DRS_BLENDOP, &blend_equation);
  D3D_CHECKERROR(hr);
  return static_cast<GfxBlendEquation>(blend_equation);
}

static void d3d_BlendEquation(GfxBlendEquation blend_equation)
{
  HRESULT hr;
  hr = _pGfx->gl_pd3dDevice->SetRenderState(D3DRS_BLENDOP, static_cast<DWORD>(blend_equation));
  D3D_CHECKERROR(hr);
}

static GfxBlendEquation none_GetBlendEquation() { return GFX_BLENDEQ_ADD; }
static void none_BlendEquation(GfxBlendEquation) { NOTHING; }

extern GfxBlendEquation(*gfxGetBlendEquation)(void) = &none_GetBlendEquation;
extern void (*gfxBlendEquation)(GfxBlendEquation) = &none_BlendEquation;

static void InitContext_OGL_Extra(void)
{
  const int enginedll_base_address = reinterpret_cast<int>(&CEntity::HandleSentEvents) - 0xFEC80;
  PROC (__stdcall** ppwglGetProcAddress)(LPCSTR) = (PROC (__stdcall**)(LPCSTR))(enginedll_base_address + 0x1FA4D4);
  pglBlendEquation = (void (__stdcall*)(int))(*ppwglGetProcAddress)("glBlendEquation");
  void (*pReloadTextures)(void) = (void (*)(void))(enginedll_base_address + 0x61AF0);
  pReloadTextures();
}

static void PatchInitContext_OGL()
{
  const int enginedll_base_address = reinterpret_cast<int>(&CEntity::HandleSentEvents) - 0xFEC80;
  const int InitContext_OGL_injection_address = enginedll_base_address + 0x58037;
  UBYTE call_bytes[5] = { UBYTE(0xE8), UBYTE(0x0), UBYTE(0x0), UBYTE(0x0), UBYTE(0x0) };
  const int InitContext_OGL_Extra_offset = reinterpret_cast<int>(&InitContext_OGL_Extra) - InitContext_OGL_injection_address - 5;
  memcpy(call_bytes + 1, &InitContext_OGL_Extra_offset, sizeof(int));
  
  DWORD old_page_mode;
  if (::VirtualProtect(reinterpret_cast<void*>(InitContext_OGL_injection_address), sizeof(call_bytes), PAGE_EXECUTE_READWRITE, &old_page_mode) != 0)
  {
    memcpy(reinterpret_cast<void*>(InitContext_OGL_injection_address), call_bytes, sizeof(call_bytes));
    DWORD dummy;
    ::VirtualProtect(reinterpret_cast<void*>(InitContext_OGL_injection_address), sizeof(call_bytes), old_page_mode, &dummy);
  }
}

static void GFX_SetFunctionPointers_Extra(INDEX iAPI)
{
  if (iAPI == GAT_OGL)
  {
    gfxGetBlendEquation     = &ogl_GetBlendEquation;
    gfxBlendEquation        = &ogl_BlendEquation;
  } else if (iAPI == GAT_D3D)
  {
    gfxGetBlendEquation     = &d3d_GetBlendEquation;
    gfxBlendEquation        = &d3d_BlendEquation;
  } else {
    gfxGetBlendEquation     = &none_GetBlendEquation;
    gfxBlendEquation        = &none_BlendEquation;
  }

  const int enginedll_base_address = reinterpret_cast<int>(&CEntity::HandleSentEvents) - 0xFEC80;
  void (*pGFX_SetFunctionPointers)(INDEX) = (void (*)(INDEX))(enginedll_base_address + 0x5C0E0);
  pGFX_SetFunctionPointers(iAPI);
}


static void PatchGFXFunctionRef(const int patch_addr)
{
  const int enginedll_base_address = reinterpret_cast<int>(&CEntity::HandleSentEvents) - 0xFEC80;
  const int injection_address = enginedll_base_address + patch_addr;
  UBYTE call_bytes[5] = { UBYTE(0xE8), UBYTE(0x0), UBYTE(0x0), UBYTE(0x0), UBYTE(0x0) };
  const int call_offset = reinterpret_cast<int>(&GFX_SetFunctionPointers_Extra) - injection_address - 5;
  memcpy(call_bytes + 1, &call_offset, sizeof(int));
  
  DWORD old_page_mode;
  if (::VirtualProtect(reinterpret_cast<void*>(injection_address), sizeof(call_bytes), PAGE_EXECUTE_READWRITE, &old_page_mode) != 0)
  {
    memcpy(reinterpret_cast<void*>(injection_address), call_bytes, sizeof(call_bytes));
    DWORD dummy;
    ::VirtualProtect(reinterpret_cast<void*>(injection_address), sizeof(call_bytes), old_page_mode, &dummy);
  }
}

static void PatchGFX_SetFunctionPointers()
{
  PatchGFXFunctionRef(0x6203C);
  PatchGFXFunctionRef(0x621D7);
  PatchGFXFunctionRef(0x659DD);
  PatchGFXFunctionRef(0x65C2E);
  PatchGFXFunctionRef(0x65E25);
  PatchGFXFunctionRef(0x65FD7);
}

static void PatchDecomposeMatrixPrecision()
{
  const int enginedll_base_address = reinterpret_cast<int>(&CEntity::HandleSentEvents) - 0xFEC80;
  const int patch_address = enginedll_base_address + 0x2F275;
  DWORD old_page_mode;
  if (::VirtualProtect(reinterpret_cast<void*>(patch_address), 1, PAGE_EXECUTE_READWRITE, &old_page_mode) != 0)
  {
    // changes "if (a<0.001) {" condition in DecomposeRotationMatrixNoSnap
    // to "if (a<0.0001f) {" by using a more precise constant from void operator^=(ANGLE3D &a3dAngles, const DOUBLEmatrix3D &t3dRotation)
    // 600ef273 dc 1d 68 4b 25 60       FCOMP      double ptr [DAT_60254b68]
    // will become
    // 600ef273 dc 1d 90 4b 25 60       FCOMP      double ptr [DAT_60254b90]
    const UBYTE ref_to_0dot0001 = UBYTE(0x90);
    memcpy(reinterpret_cast<void*>(patch_address), &ref_to_0dot0001, 1);
    DWORD dummy;
    ::VirtualProtect(reinterpret_cast<void*>(patch_address), 1, old_page_mode, &dummy);
  }
}

static void sehSE_InitEngine_(CTString_* strGameID)
{
  SECAPI_TRY
  PatchInitContext_OGL();
  PatchGFX_SetFunctionPointers();
  PatchDecomposeMatrixPrecision();
  SE_InitEngine(*((CTString*)strGameID));
  SECAPI_CATCH
}

void SE_InitEngine_(CTString_* strGameID)
{
  STREAM_TRY
  sehSE_InitEngine_(strGameID);
  STREAM_CATCH
}

static void sehSE_InitEngineAtDirectory_(CTString_* strGameID, const CTFileName_* fnAppPath, const CTFileName_* fnExePath)
{
  SECAPI_TRY
  PatchInitContext_OGL();
  PatchGFX_SetFunctionPointers();
  PatchDecomposeMatrixPrecision();
  _fnmApplicationPath = *((const CTFileName*)fnAppPath);
  _fnmApplicationExe = *((const CTFileName*)fnExePath);

  if (_strLogFile=="") {
    _strLogFile = _fnmApplicationExe.FileName();
  }

  // skip routine that calculates _fnmApplicationPath and _fnmApplicationExe from GetModuleFileNameA
  UBYTE jump_instruction[sizeof(int) + 1] = { UBYTE(0xE9), 0, 0, 0, 0 };
  int offset = 0x191 - sizeof(jump_instruction);
  memcpy(jump_instruction + 1, &offset, sizeof(int));
  void* instruction_addr = reinterpret_cast<void*>(reinterpret_cast<int>(&SE_InitEngine) + 0x44);
  UBYTE orig_instruction[sizeof(jump_instruction)] = { 0, 0, 0, 0, 0 };
  memcpy(orig_instruction, instruction_addr, sizeof(orig_instruction));
  
  DWORD old_page_mode, dummy;
  if (::VirtualProtect(instruction_addr, sizeof(jump_instruction), PAGE_EXECUTE_READWRITE, &old_page_mode) == 0)
    throw "Failed to init engine";
  memcpy(instruction_addr, jump_instruction, sizeof(jump_instruction));
  if (::VirtualProtect(instruction_addr, sizeof(jump_instruction), old_page_mode, &dummy) == 0)
    throw "Failed to init engine";

  SE_InitEngine(*((CTString*)strGameID));

  if (::VirtualProtect(instruction_addr, sizeof(orig_instruction), PAGE_EXECUTE_READWRITE, &old_page_mode) == 0)
    throw "Failed to init engine";
  memcpy(instruction_addr, orig_instruction, sizeof(orig_instruction));
  if (::VirtualProtect(instruction_addr, sizeof(orig_instruction), old_page_mode, &dummy) == 0)
    throw "Failed to init engine";

  SECAPI_CATCH
}

void SE_InitEngineAtDirectory_(CTString_* strGameID, const CTFileName_* fnAppPath, const CTFileName_* fnExePath)
{
  STREAM_TRY
  sehSE_InitEngineAtDirectory_(strGameID, fnAppPath, fnExePath);
  STREAM_CATCH
}

static void sehSE_EndEngine_()
{
  SECAPI_TRY
  SE_EndEngine();
  SECAPI_CATCH
}

void SE_EndEngine_()
{
  STREAM_TRY
  sehSE_EndEngine_();
  STREAM_CATCH
}

static void sehSE_LoadDefaultFonts_()
{
  SECAPI_TRY
  SE_LoadDefaultFonts();
  SECAPI_CATCH
}

void SE_LoadDefaultFonts_()
{
  STREAM_TRY
  sehSE_LoadDefaultFonts_();
  STREAM_CATCH
}

void SE_UpdateWindowHandle_(HWND hwndWindowed)
{
  SECAPI_TRY
  SE_UpdateWindowHandle(hwndWindowed);
  SECAPI_CATCH
}

static void sehSE_PretouchIfNeeded_()
{
  SECAPI_TRY
  SE_PretouchIfNeeded();
  SECAPI_CATCH
}

void SE_PretouchIfNeeded_()
{
  STREAM_TRY
  sehSE_PretouchIfNeeded_();
  STREAM_CATCH
}

static bool g_replaceFilePatched = false;
static void PatchReplaceFile()
{
  if (g_replaceFilePatched)
    return;
  g_replaceFilePatched = true;

  const char this_dll_name[] = "SeriousEngineCAPI.dll";
  const int name_len = strlen(this_dll_name) + 1;
  const int enginedll_base_address = reinterpret_cast<int>(&CEntity::HandleSentEvents) - 0xFEC80;
  const int engine_gui_name_addr = enginedll_base_address + 0x1DB318; // data with "EngineGUI.dll" string

  DWORD old_page_mode;
  if (::VirtualProtect(reinterpret_cast<void*>(engine_gui_name_addr), name_len, PAGE_READWRITE, &old_page_mode) != 0)
  {
    // "EngineGUI.dll" string is actually written 2 times, so its okay to overwrite over length of one of them
    // as long as "SeriousEngineCAPI.dll0" (len is 22) is shorter than "EngineGUI.dll000EngineGUI.dll0" (len is 30)
    // second string is used for error handling printing so its not important
    memcpy(reinterpret_cast<void*>(engine_gui_name_addr), this_dll_name, name_len);
    DWORD dummy;
    ::VirtualProtect(reinterpret_cast<void*>(engine_gui_name_addr), name_len, old_page_mode, &dummy);
  }
}

static CTFileName_* (*pFileRequesterCallback)(char* title, char* filters, char* registry, char* selectedByDefault) = NULL;

void SetFileRequesterCallback(CTFileName_* (*c)(char* title, char* filters, char* registry, char* selectedByDefault))
{
  pFileRequesterCallback = c;
  PatchReplaceFile();
}

// not "extern C" to keep weird C++
// mangled name which should be "?FileRequester@@YA?AVCTFileName@@PAD000@Z"
// vanilla Engine.dll looks for it in CallFileRequester func at ReplaceFile.cpp : 70
// following pragma makes sure the symbol is mangled as expected by Engine
#pragma comment(linker, "/export:CAPIFileRequester=?FileRequester@@YA?AVCTFileName@@PAD000@Z")
SECAPI CTFileName FileRequester(
  char* pchrTitle, 
  char* pchrFilters,
  char* pchrRegistry,
  char* pchrFileSelectedByDefault)
{
  if (pFileRequesterCallback)
  {
    CTFileName* res_tmp = (CTFileName*)pFileRequesterCallback(pchrTitle, pchrFilters, pchrRegistry, pchrFileSelectedByDefault);
    CTFileName res = *res_tmp;
    delete res_tmp;
    return res;
  }
  return CTString("");
}
