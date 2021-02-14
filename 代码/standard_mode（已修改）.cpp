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
void standard_mode()
{
	double ans,late;
	char cal;
	cout << j;
	cout << w;
	cout << "First number please.";
	cin >> ans;

	while (1)
	{
		cout << "Next two step (eg:\"+2\".) (b to back,c to cls)        \n";
		getchar();
		cal = getchar();
		if (cal == 'b')
		{
			system("cls");
			cal_main();
		}
		else if (cal == 'c')
		{
		system("cls");
		standard_mode();
		}
		cin >>late;
		if (cal == '-')
		{
			ans -= late;
		}
		else if (cal == '+')
		{
			ans += late;
		}
		else if (cal == '*')
		{
			ans *= late;
		}
		else if (cal == '/')
		{
			ans /= late;
		}
		
		
		system("cls");
		printf("%.6f", ans);
	}

}
