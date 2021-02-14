#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;
void teacher_step_1();
void teacher_step_2();
void teacher_step_3();
void teacher_step_4();
void step_2();
#define j "########################################################################################################################\n"
#define w "                                       Welcome to Dr.Li's ETEL management system                   "
void teacher_step_main(void)
{
	cout << j;
	cout << w;
	cout << "\n\nWelcome teacher!\n\twhich things do you need?\n\n\n0.back\n1.Add class marks and add comments.\n2.Change class marks.\n3.Input masks.\n\"4\" to register \n\t";
	int i = 0;
	while (cin >> i)
	{
		if (i == 1)
		{
			system("cls");
			teacher_step_1();
			
		}
		else if (i == 2)
		{
			system("cls");
			teacher_step_2();
		}
		else if (i == 3)
		{
			system("cls");
			teacher_step_3();
		}
		else if (i == 4)
		{
			system("cls");
			teacher_step_4();
		}
		else if (i == 0)
		{
			system("cls");
			step_2();
		}
		else
		{
			cout << "Improper command! Try it again!";
			Sleep(5000);
			system("cls");
			cout << j;
			cout << w;
			cout << "\n\n\n\nWelcome teacher!\n\twhich things do you need?\n1.Check class marks.\n2.Change class marks.\n3.Input masks.\n4.Write the comments.\n\t";
		}
	}
}
