#include "Input.h"

void _pInput_EnableInput_(CViewPort_* pvp)
{
  _pInput->EnableInput((CViewPort*)pvp);
}

void _pInput_EnableInput_hwnd_(HWND hWnd)
{
  _pInput->EnableInput(hWnd);
}

void _pInput_DisableInput_()
{
  _pInput->DisableInput();
}

void _pInput_SetJoyPolling_(BOOL bPoll)
{
  _pInput->SetJoyPolling(bPoll);
}

BOOL _pInput_IsInputEnabled_()
{
  return _pInput->IsInputEnabled();
}

void _pInput_GetInput_(BOOL bPreScan)
{
  _pInput->GetInput(bPreScan);
}

void _pInput_ClearInput_()
{
  _pInput->ClearInput();
}

INDEX _pInput_GetAvailableAxisCount_()
{
  return _pInput->GetAvailableAxisCount();
}

INDEX _pInput_GetAvailableButtonsCount_()
{
  return _pInput->GetAvailableButtonsCount();
}

CTString_* _pInput_GetAxisName_(INDEX iAxisNo)
{
  return (CTString_*)(&(_pInput->GetAxisName(iAxisNo)));
}

CTString_* _pInput_GetAxisTransName_(INDEX iAxisNo)
{
  return (CTString_*)(&(_pInput->GetAxisTransName(iAxisNo)));
}

FLOAT _pInput_GetAxisValue_(INDEX iAxisNo)
{
  return _pInput->GetAxisValue(iAxisNo);
}

CTString_* _pInput_GetButtonName_(INDEX iButtonNo)
{
  return (CTString_*)(&(_pInput->GetButtonName(iButtonNo)));
}

CTString_* _pInput_GetButtonTransName_(INDEX iButtonNo)
{
  return (CTString_*)(&(_pInput->GetButtonTransName(iButtonNo)));
}

BOOL _pInput_GetButtonState_(INDEX iButtonNo)
{
  return _pInput->GetButtonState(iButtonNo);
}
