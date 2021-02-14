#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string>
using namespace std;
#define j "########################################################################################################################\n"
#define w "                                       Welcome to Dr.Li's ETEL management system                   \n"
struct student {
	string num[1000];
	char name[21];
	int C_language;
	int math;
	int English;
	int total;
	char comment[1001];
};

bool cmp(student a, student b)
{
	if (a.total > b.total)
	{
		return true;
	}
	else
		if (a.total == b.total)
		{
			if (a.C_language > b.C_language)
			{
				return true;
			}
		}
	return false;
}
void teacher_step_main();
void teacher_step_3(void)
{
	struct student test[30];
	FILE *fp;
	int i, p = 0, a;
	string open_;
	cout << j;
	cout << w;
	cout << "Please enter the class's number to change his/her message(\"b\" to back)";
	cin >> open_;

	open_ += ".dat";//憧俊撹猟周
	if ((fopen_s(&fp, open_, "rb+")) != NULL)//払移卦指
	{
		cout << "Can't find the file.";
		system("cls");
		exit(0);
	}

	fread(test, sizeof(test), 1, fp);//響函欺潤更悶 
	cout << "How many students have you imputted ?";
	cin >> a;
	system("cls");
	cout << j;
	cout << w;
	sort(test, test + a, cmp);
	cout << "           Name     C_language           math        English          Total\n！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！";
	for (i = 0; i < a; i++)
	{
		cout <<  test[i].name << test[i].C_language << test[i].math <<  test[i].English << test[i].total << "\n！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！";
	}
	cout << "Press any key to continue . . .\n";
	_getch();
	system("cls");
	teacher_step_main();
}
