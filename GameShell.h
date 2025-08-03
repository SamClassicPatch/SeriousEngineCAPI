#ifndef SECAPI_GAME_SHELL_H
#define SECAPI_GAME_SHELL_H
#include "Base/Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI GameGUI_interface_* GameGUI_interface_new();
SECAPI void GameGUI_interface_delete(GameGUI_interface_* p);
SECAPI void GameGUI_interface_Initialize(GameGUI_interface_* p, const CTFileName_* f);
SECAPI void GameGUI_interface_End(GameGUI_interface_* p);
SECAPI void GameGUI_interface_QuickTest(GameGUI_interface_* p, const CTFileName_* fnMapName, CDrawPort_* pdp, CViewPort_* pvp);
SECAPI void GameGUI_interface_OnPlayerSettings(GameGUI_interface_* p);
SECAPI void GameGUI_interface_OnAudioQuality(GameGUI_interface_* p);
SECAPI void GameGUI_interface_OnVideoQuality(GameGUI_interface_* p);
SECAPI void GameGUI_interface_OnSelectPlayerAndControls(GameGUI_interface_* p);

#ifdef __cplusplus
}
#endif

#endif
