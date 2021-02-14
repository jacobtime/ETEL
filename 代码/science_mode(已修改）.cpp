#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;
void cal_main();
#define j "########################################################################################################################\n"
#define w "                                       Welcome to Dr.Li's ETEL management system                   \n"
void science_mode()
{
	char Pi;
	int a = 0, n;
	long  long int ans=1;
	double x, y;
	cout  << "0.Back\n1.x^y\n2.arcsinx\n3.arccosx\n4.cosx\n5.sinx\n6.tanx\n7.n!(using P to ¦°)";
	cin >> a;
	if (a == 0)
	{
		system("cls");
		cal_main();
	}
	else if (a == 1)
	{
		cout  << "Please enter the x and y by using \" \"to space:";
		cin >> x >> y;
		cout  << pow(x, y);
		cout  << "Press any key to continue . . .\n";
		_getch();
		system("cls");
		science_mode();
	}
	else if (a == 2)
	{
		cout  << "arcsin_\b";
		cin >> x;
		cout  << asin(x) / acos(-1) << "¦°";
		cout  << "Press any key to continue . . .\n";
		_getch();
		system("cls");
		science_mode();
	}
	else if (a == 3)
	{
		cout  << "arccos_\b";
		cin >> x;
		cout  << acos(x) / acos(-1) << "¦°";
		cout  << "Press any key to continue . . .\n";
		_getch();
		system("cls");
		science_mode();
	}
	else if (a == 4)
	{
		cout  << "cos_\b";
		cin >> x;
		Pi = getchar();
		if (Pi == 'P')
			cout  << cos(x*acos(-1));
		else
			cout  << cos(x);
		cout  << "Press any key to continue . . .\n";
		_getch();
		system("cls");
		science_mode();
	}
	else if (a == 5)
	{
		cout  << "sin_\b";
		cin >> x;
		Pi = getchar();
		if (Pi == 'P')
			cout  << sin(x*acos(-1));
		else
			cout  <<  sin(x);
		cout  << "Press any key to continue . . .\n";
		_getch();
		system("cls");
		science_mode();
	}
	else if (a == 6)
	{
		cout  << "tan_\b";
		cin >> x;
		Pi = getchar();
		if (Pi == 'P')
			cout  <<  tan(x*acos(-1));
		else
			cout  << tan(x);
		cout  << "Press any key to continue . . .\n";
		_getch();
		system("cls");
		science_mode();
	}
	else if (a == 7)
	{
		cout  << "Please enter n:_\b";
		cin >> n;
		while (n)
		{
			ans *= n--;
		}
		cout  << ans;
		cout  << "Press any key to continue . . .\n";
		_getch();
		system("cls");
		science_mode();
	}
}
