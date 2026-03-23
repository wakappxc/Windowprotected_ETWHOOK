#pragma once
#include <ntifs.h>


ULONG_PTR GetUserFindWindowEx();

ULONG_PTR GetUserGetForegroundWindow();

ULONG_PTR GetUserBuildHwndList();

ULONG_PTR GetUserQueryWindow();

ULONG_PTR GetUserWindowFromPoint();


VOID InitHook();
