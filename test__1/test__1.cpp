
#include "stdio.h"
#include <Windows.h>

int main()
{
	while (1)
	{
		HWND hwnd = GetForegroundWindow();
		printf("hwnd = %x\r\n", hwnd);

		HWND findHwnd = FindWindowA("dbgviewClass", NULL);
		printf("findHwnd = %x\r\n", findHwnd);

		HWND queryhwnd = (HWND)0x0007003A;

		DWORD pid = 0, tid = 0;
		tid = GetWindowThreadProcessId(queryhwnd, &pid);
		printf("pid = %d,tid = %d\r\n", pid, tid);
		Sleep(1000);

		EnumWindows;
	}
	return 0;
}

