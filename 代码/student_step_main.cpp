#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
using namespace std;

#define q "########################################################################################################################\n"
#define w "                                       Welcome to Dr.Li's ETEL management system                   \n"
void student_step_3();
void student_step_2();
void step_2(void);
void student_step_1();

void student_step_main()
{
	
	while (1)
	{
		int flag;
		puts(q);
		puts(w);
		
		printf("Enter 0 to return to the previous level, enter 1 to query the results, enter 2 to open the life of the little helper, 3 to compare your previous results\n");
		scanf_s("%d", &flag);
		system("cls");
		if (flag == 0)
		{
			step_2();
		}
		else if (flag == 1)//查询成绩
			student_step_1();
		else if (flag == 2)//生活小帮手
			student_step_2();
		else if (flag == 3)//历次成绩比较
			student_step_3();
		else
		{
			printf("Imput wrong");
			Sleep(2000);
			continue;
		}
	}
}
