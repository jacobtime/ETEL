#include <iostream>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <string>
using namespace std;
#define j "########################################################################################################################\n"
#define w "                                       Welcome to Dr.Li's ETEL management system                   \n"
void teacher_step_main(void);
void student_step_main(void);
string password, username;
#pragma warning(disable:4018)
struct register_ {
	string admin;
	string password;
};
void step_2(void)
{
	int choose_1 = 5, i = 0, k, o = 0, p = 0;;
	char ch;
	struct register_ admin[20];
	while (choose_1 != 1 && choose_1 != 2 && choose_1 != 0)
	{
		cout << j;
		cout << w;
		FILE* fp;
		fopen_s(&fp, "3.dat", "rb+");
		fread(admin, sizeof(admin), 1, fp);
		cout << "Choose \"1\" to login teacher port  \"2\" to login student port \"0\" to exit\n";
		cin >> choose_1;
		if (choose_1 == 1 || choose_1 == 2)
		{
			cout << "It will login ...\n";
			Sleep(2000);
			system("cls");
			cout << j;
			cout << w;
			cout << "user name:";
			cin >> username;
			cout << "password:";
			while (((ch = _getch()) != '\r') && i < 20)
			{
				if (ch == '\b')
				{
					password[--i] = 0;
					system("cls");
					cout << j;
					cout << w;
					cout << "user name:" << username << endl;
					cout << "password:";
					for (k = 0; k < i; k++)
					{
						putchar('*');
					}
				}

				else
				{
					password[i] = ch;
					putchar('*');
					i++;
				}
			}
		}
		password[i] = '\0';
		putchar('\n');
		if (choose_1 == 1)
		{
			if (username == "admin")
			{

				for (o = 0; o < username.size() - 1; o++)
				{
					username[o] += o;
				}
				for (o = 0; o < password.size() - 1; o++)
				{
					password[o] -= o;
				}
				for (i = 0; admin[i].admin[0] != 'b'; i++)
				{
					
					if (username == admin[i].admin)
					{
						p++;
						break;
					}
				}
				if (!p)
				{
					cout << "username unfind!";
					system("cls");
					Sleep(2000);
					fclose(fp);
					teacher_step_main();

				}
				i--;
				if (password == admin[i].password)
				{
					cout << "welcome " << username << " teacher";
					Sleep(10000);
					system("cls");
					fclose(fp);
					teacher_step_main();
				}
				else
				{
					cout << "Wrong username or password.";
					Sleep(3000);
					system("cls");
					fclose(fp);
					step_2();
				}
			}
			else
			{
				if (username == "admin" && password == "123456")
				{
					cout << "welcome " << username <<  " teacher";
					Sleep(2000);
					system("cls");
					fclose(fp);
					teacher_step_main();

				}
				else
				{
					cout << "Wrong username or password.";
					Sleep(3000);
					system("cls");
					fclose(fp);
					step_2();
				}
			}
		}
		else if (choose_1 == 2)
		{
			if (username == "admin" && password == "123456")
			{
				cout << "welcome " << username << "student";
				Sleep(2000);
				system("cls");
				fclose(fp);
				student_step_main();
			}
			else
			{
				cout << "Wrong username or password.";
				Sleep(3000);
				system("cls");
				fclose(fp);
				step_2();
			}
		}

		else if (choose_1 == 0)
			exit(0);
		else
		{
			cout << "Improper command! Try it again!";
			Sleep(2000);
			system("cls");
		}
	}
}
