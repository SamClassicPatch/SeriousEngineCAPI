#include "GameShell.h"
#include <Engine/GameShell.h>

namespace
{
  class GameGUIinterface
  {
  public:
    GameGUIinterface()
      : m_handle(NULL)
      , mp_impl(NULL)
    {
      try {
        #define GAMEDLL _fnmApplicationExe.FileDir()+"GameGUI"+_strModExt+".dll"
        CTFileName fnmExpanded;
        ExpandFilePath(EFP_READ, CTString(GAMEDLL), fnmExpanded);

        m_handle = LoadLibraryA(fnmExpanded);
        if (m_handle == NULL) {
          ThrowF_t("%s", GetWindowsError(GetLastError()));
        }
        GameGUI_interface* (*GAMEGUI_Create)(void) = (GameGUI_interface* (*)(void))GetProcAddress(m_handle, "GAMEGUI_Create");
        if (GAMEGUI_Create == NULL) {
          ThrowF_t("%s", GetWindowsError(GetLastError()));
        }
        mp_impl = GAMEGUI_Create();

      } catch (char* strError) {
        FatalError("%s", strError);
      }
    }
    ~GameGUIinterface()
    {
      FreeLibrary(m_handle);
    }
    void Initialize(const CTFileName& gmsFile)
    {
      m_gmsFile = gmsFile;
      mp_impl->Initialize(m_gmsFile);
    }

  public:
    GameGUI_interface* mp_impl;

  private:
    HMODULE m_handle;
    CTFileName m_gmsFile;
  };
} // anonymous namespace

GameGUI_interface_* GameGUI_interface_new()
{
  return (GameGUI_interface_*)(new GameGUIinterface());
}

void GameGUI_interface_delete(GameGUI_interface_* p)
{
  delete ((GameGUIinterface*)p);
}

void GameGUI_interface_Initialize(GameGUI_interface_* p, const CTFileName_* f)
{
  STREAM_TRY
  ((GameGUIinterface*)p)->Initialize(*((const CTFileName*)f));
  STREAM_CATCH
}

void GameGUI_interface_End(GameGUI_interface_* p)
{
  STREAM_TRY
  ((GameGUIinterface*)p)->mp_impl->End();
  STREAM_CATCH
}

void GameGUI_interface_QuickTest(GameGUI_interface_* p, const CTFileName_* fnMapName, CDrawPort_* pdp, CViewPort_* pvp)
{
  STREAM_TRY
  ((GameGUIinterface*)p)->mp_impl->QuickTest(*((const CTFileName*)fnMapName), (CDrawPort*)pdp, (CViewPort*)pvp);
  STREAM_CATCH
}

