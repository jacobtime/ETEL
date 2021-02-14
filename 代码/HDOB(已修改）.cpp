#include <iostream>
#include <string.h>
#include <stdint.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <algorithm>
#include <stdlib.h>
#include <cmath>
using namespace std;
void cal_main(void);
#define j "########################################################################################################################\n"
#define w "                                       Welcome to Dr.Li's ETEL management system                   \n"
void HDOB()
{
	int a,i,k;
	long long int o,DEC=0,HEX=0,BIN=0,OCT=0;
	char b[200] = { 99 };
	int HEX_1[200], BIN_1[200] , OCT_1[200] ;
	for (i = 0; i < 200; i++)
	{
		HEX_1[i] = BIN_1[i] = OCT_1[i] = 99;
	}
	cout << "Which one do you want?" << endl;
	cout << "0.back\n1.Hex.\n2.DEC\n3.OCT\n4.BIN" << endl;
	cin >> a;
	if (a == 0)
	{
		system("cls");
		cal_main();
	}
		
	o = 0;
	cout << "Print your num:_\b" << endl;
	cin >> b;
	if (a == 1)
	{
		for (i = 0; b[i] != '\0'; i++);
		k = i;
		for (i = 0; i < k; i++)
		{
			o += (b[i] - 48) * (int)pow(10, k - 1);
		}
	}
	else if (a == 2)
	{
		for (i = 0; b[i] != '\0'; i++);
		k = i;
		for (i = 0; i < k; i++)
		{
			o += (b[i]-48) * (int)pow(10, k - 1);
		}
	}
	else if (a == 3)
	{
		for (i = 0; b[i] != '\0'; i++);
		k = i;
		for (i = 0; i < k; i++)
		{
			o += (b[i] - 48) * (int)pow(10, k - 1);
		}
	}
	else if (a == 4)
	{
		for (i = 0; b[i] != '\0'; i++);
		k = i;
		for (i = 0; i < k; i++)
		{
			o += (b[i] - 48) * (int)pow(10, k - 1);
		}
	}
	
	for (DEC = o,i = 0; DEC; i++)
	{
		HEX_1[i] = DEC % 16;
		DEC /= 16;
	}
	for (DEC = o, i = 0; DEC; i++)
	{
		OCT_1[i] = DEC % 8;
		DEC /= 8;
	}
	for (DEC = o, i = 0; DEC; i++)
	{
		BIN_1[i] = DEC % 2;
		DEC /= 2;
	}
	for (i = 0; HEX_1[i] != 99; i++)
	{
		HEX += HEX_1[i] * (int)pow(10, i);
	}
	for (i = 0; OCT_1[i] != 99; i++)
	{
		OCT += OCT_1[i] * (int)pow(10, i);
	}
	for (i = 0; BIN_1[i] != 99; i++)
	{
		BIN += BIN_1[i] * (int)pow(10, i);
	}
	system("cls");
	cout << "DEC:" << o << "\nHEX:" << HEX << "\nOCT:" << OCT << "\nBIN:" << BIN << endl;
	cout << "Press any key to continue . . .\n";
	_getch();
	system("cls");
	void HDOB();
}
