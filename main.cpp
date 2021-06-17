#include <iostream>
#include <Windows.h>
#include <ios>
#include <limits>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <sstream>
#include <string>
#include <future>
#include <tchar.h>

void checkadmin()
{
	bool IsRunningAsAdmin = false;

	BOOL fRet = FALSE;
	HANDLE hToken = NULL;
	if (OpenProcessToken(GetCurrentProcess(), TOKEN_QUERY, &hToken)) {
		TOKEN_ELEVATION Elevation;
		DWORD cbSize = sizeof(TOKEN_ELEVATION);
		if (GetTokenInformation(hToken, TokenElevation, &Elevation, sizeof(Elevation), &cbSize)) {
			fRet = Elevation.TokenIsElevated;
		}
	}
	if (hToken) {
		CloseHandle(hToken);
	}
	IsRunningAsAdmin = fRet;

	if (!IsRunningAsAdmin) {
		int msgboxID = MessageBoxA(
			NULL,
			(LPCSTR)"please, run as admin.",
			(LPCSTR)"XkdKLEQsHA9tUbzA",
			MB_OK
		);
		exit(-1);
	}
}

void randomtitle(char* sStr, unsigned int iLen)
{
	char Syms[] = "0123456789abcdefghijklmnoprstuwxyzABCDEFGHIJKLMNOPRSTUWXYZ";
	unsigned int Ind = 0;
	srand(time(NULL) + rand());
	while (Ind < iLen)
	{
		sStr[Ind++] = Syms[rand() % 62];
	}
	sStr[iLen] = '\0';
	}

	void DetectByTitle()
	{
		HWND window;
		window = FindWindow(0, (L"IDA: Quick start"));
		if (window)
		{
			exit(8);
		}
		window = FindWindow(0, (L"Memory Viewer"));
		if (window)
		{
			exit(8);
		}
		window = FindWindow(0, (L"Cheat Engine 7.2"));
		if (window)
		{
			exit(8);
		}
	}


	int main()
	{
		char title[100];
		randomtitle(title, 16);
		SetConsoleTitleA(title);
		checkadmin();
		int license{};
		DetectByTitle();
		system("color c");
		printf("		[+] status >> under development");
		Sleep(5000);
		system("cls");
		system("color e");
		printf("\n\n	[!] enter password >> ");
		std::cin >> license;
		if (license == 1337)
		{
			int choice;
			system("cls");
			system("color 9");
			printf("	[!] initializing variables [01,92]");
			Sleep(5000);
			MessageBoxA(NULL, "variables initialized", "scagl.xyz", MB_OK);
			system("cls");
			system("color 1");
			printf("		|\\/|");
			Sleep(100);
			system("cls");
			system("color 2");
			printf("		M");
			Sleep(100);
			system("cls");
			system("color 3");
			printf("		M/\\");
			Sleep(100);
			system("cls");
			system("color 4");
			printf("		MA");
			Sleep(100);
			system("cls");
			system("color 5");
			printf("		MA|>");
			Sleep(100);
			system("cls");
			system("color 6");
			printf("		MAD");
			Sleep(100);
			system("cls");
			system("color 7");
			printf("		MAD|=");
			Sleep(100);
			system("cls");
			system("color 8");
			printf("		MADE ");
			Sleep(100);
			system("cls");
			system("color 9");
			printf("		MADE |>");
			Sleep(100);
			system("cls");
			system("color 0");
			printf("		MADE B");
			Sleep(100);
			system("cls");
			system("color a");
			printf("		MADE B\\/");
			Sleep(100);
			system("cls");
			system("color b");
			printf("		MADE BY");
			Sleep(100);
			system("cls");
			system("color c");
			printf("		MADE BY |>");
			Sleep(100);
			system("cls");
			system("color d");
			printf("		MADE BY D");
			Sleep(100);
			system("cls");
			system("color e");
			printf("		MADE BY D/\\");
			Sleep(100);
			system("cls");
			system("color f");
			printf("		MADE BY DA");
			Sleep(100);
			system("cls");
			system("color 1");
			printf("		MADE BY DA/\\/\\");
			Sleep(100);
			system("cls");
			system("color 2");
			printf("		MADE BY DAM");
			Sleep(100);
			system("cls");
			system("color 3");
			printf("		MADE BY DAM<>");
			Sleep(100);
			system("cls");
			system("color 4");
			printf("		MADE BY DAMO");
			Sleep(1000);
			menu:
			system("cls");
			system("color 8");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("		[1] spoof\n\n");
			printf("		[2] clean\n\n");
			printf("		[3] exit\n\n");
			printf("		[>] your choice: ");
			std::cin >> choice;
			if (choice == 1)
			{
				system("cls");
				system("color b");
				printf("		[?] spoofing\n\n");
				Sleep(10000);
				system("cls");
				system("color a");
				printf("		[+] spoofed");
				Sleep(2000);
				goto menu;
			}
			if (choice == 2)
			{
				system("cls");
				system("color b");
				printf("		[?] cleaning");
				Sleep(10000);
				system("cls");
				system("color a");
				printf("		[+] cleaned");
				Sleep(2000);
				goto menu;
			}
			if (choice == 3)
			{
				exit(-1);
			}
		}
		else
		{
			system("cls");
			system("color c");
			printf("	[>.<] wrong password!");
			Sleep(4000);
			exit(-1);
		}
	}


	// released at github.com/5nx
	// open-source again :p
	// made by damo#4444
	// add features by yourself <3
	// don't try to sell it
