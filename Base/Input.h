#ifndef SECAPI_BASE_INPUT_H
#define SECAPI_BASE_INPUT_H
#include "Types.h"

#ifdef __cplusplus
extern "C" {
#endif

SECAPI void _pInput_EnableInput_(CViewPort_* pvp);
SECAPI void _pInput_EnableInput_hwnd_(HWND hWnd);
SECAPI void _pInput_DisableInput_();
SECAPI void _pInput_SetJoyPolling_(BOOL bPoll);
SECAPI BOOL _pInput_IsInputEnabled_();
SECAPI void _pInput_GetInput_(BOOL bPreScan);
SECAPI void _pInput_ClearInput_();
SECAPI INDEX _pInput_GetAvailableAxisCount_();
SECAPI INDEX _pInput_GetAvailableButtonsCount_();
SECAPI CTString_* _pInput_GetAxisName_(INDEX iAxisNo);
SECAPI CTString_* _pInput_GetAxisTransName_(INDEX iAxisNo);
SECAPI FLOAT _pInput_GetAxisValue_(INDEX iAxisNo);
SECAPI CTString_* _pInput_GetButtonName_(INDEX iButtonNo);
SECAPI CTString_* _pInput_GetButtonTransName_(INDEX iButtonNo);
SECAPI BOOL _pInput_GetButtonState_(INDEX iButtonNo);

#ifdef __cplusplus
}
#endif

#endif
