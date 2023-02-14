#include <windows.h>

BOOL WINAPI
DllMain (HANDLE hDll, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
		case DLL_PROCESS_ATTACH:
			MessageBox(NULL, "DLL Hijacked", "Message", MB_ICONERROR | MB_OK);
			break;
		}
	
return TRUE;
}
