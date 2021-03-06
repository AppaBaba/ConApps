// CConAppEscSeq.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"#include <stdio.h>
#include <wchar.h>
#include <windows.h>



int main()
{
	// Set output mode to handle virtual terminal sequences
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hOut == INVALID_HANDLE_VALUE)
	{
		return GetLastError();
	}

	DWORD dwMode = 0;
	if (!GetConsoleMode(hOut, &dwMode))
	{
		return GetLastError();
	}

	dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
	if (!SetConsoleMode(hOut, dwMode))
	{
		return GetLastError();
	}

	// Terminal escape sequences
	wprintf(L"\x1b[31mHi there\r\n");
	wprintf(L"\x1b[32mHi there\r\n");
	wprintf(L"\x1b[33mHi there\r\n");
	wprintf(L"\x1b[34mHi there\r\n");
	wprintf(L"\x1b[mHi there\r\n");
	wprintf(L"\x1b[1mHi there\r\n");
	wprintf(L"\x1b[31mHi there\r\n");
	wprintf(L"\x1b[32mHi there\r\n");
	wprintf(L"\x1b[33mHi there\r\n");
	wprintf(L"\x1b[34mHi there\r\n");
	wprintf(L"\x1b[0mHi there\r\n");
	wprintf(L"\x1b[31;43mHi there\r\n");
	wprintf(L"\x1b[32;44mHi there\r\n");
	wprintf(L"\x1b[33;45mHi there\r\n");
	wprintf(L"\x1b[34;46mHi there\r\n");
	wprintf(L"\x1b[0mHi there\r\n");
	wprintf(L"\x1b[39mHi there\r\n");
	wprintf(L"\x1b[49mHi there\r\n");

	return 0;

}

