#include "Engine.h"

static void sehSE_InitEngine_(CTString_* strGameID)
{
  SECAPI_TRY
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
