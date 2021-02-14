#include <stdio.h>
#include <iostream> 
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <string>
using namespace std;
//void teacher_step_1();
//void teacher_step_2();
//void teacher_step_3();
void teacher_step_main(void);

//void step_2();
#define j "########################################################################################################################\n"
#define w "                                       Welcome to Dr.Li's ETEL management system                   "
struct register_ {
	string admin ;
	string password ;
};
void teacher_step_4()
{
	int i, o;
	FILE* fp;
	fopen_s(&fp, "3.dat", "rb +");
	struct register_ admin[20];
	fread(admin, sizeof(admin), 1, fp);
	fclose(fp);
	cout << j;
	cout << w;
	for (i = 0; i < 20; i++)
	{
		if (admin[i].admin[0] == 'b')
			break;
	}
	cout << "username please:('b' to back)";

	cin >> admin[i].admin;
	cout << "password please:";
	cin >> admin[i].password;
	for (o = 0; o < admin[i].admin.size() - 1; o++)
	{
		admin[i].admin[o] += o;
	}
	for (o = 0; o < admin[i].password.size() - 1; o++)
	{
		admin[i].password[o] -= o;
	}
	i++;
	admin[i].admin[0] = 'b';
	fopen_s(&fp, "3.dat", "wb +");
	fwrite(admin, sizeof(admin), 1, fp);
	fclose(fp);
	system("cls");
	teacher_step_main();
}
