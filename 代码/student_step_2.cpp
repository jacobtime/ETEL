#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
using namespace std;
#define j "########################################################################################################################\n"
#define w "                                       Welcome to Dr.Li's ETEL management system                   \n"
int gre_snake(int n);
void student_step_2_1();
void student_step_main();
void question(void);

void student_step_2()
{
	int flag;
	while (1)
	{
		puts(j);
		puts(w);
		printf("Enter 0 to go back to the previous level, enter 1 to open the teaching tool, enter 2 to open the C language exercises, and when you are in a bad mood, type 3 to play a game of Snake to relax yourself.\n");
		scanf_s("%d", &flag);
		system("cls");
		if (flag == 0)
		{
			system("cls");
			student_step_main();
		}
		else if (flag == 1)//教学工具
		{
			student_step_2_1();
		}
		else if (flag == 2)//C语言练习题
		{
			question();
		}
		else if (flag == 3)//贪吃蛇
		{
			int n = 1;
			gre_snake(n);
		}
		else
			printf("Imput wrong");
	}

}