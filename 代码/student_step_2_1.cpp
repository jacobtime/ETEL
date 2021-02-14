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
void Cantor_sort();
void student_step_2();
void cal_main(void);
void quadratic_equation(void);
void permutations(void);
void lcdm(void);
void student_step_2_1()
{
	int flag;
	while (1)
	{
		puts(q);
		puts(w);
		printf("Enter 0 to return to the previous layer, input 1 to turn on the Calculator, input 2 to solve the quadratic equation, input 3 to open the permutation combination, input 4 to the greatest common divisor and the least common multiple solution \n input 5 for the Kangtuo sorting solution\n");
		scanf_s("%d", &flag);
		system("cls");
		if (flag == 0)
		{
			student_step_2();
		}
		else if (flag == 1)//计算器
		{
			cal_main();
		}
		else if (flag == 2)//一元二次方程求解
		{
			quadratic_equation();
		}
		else if (flag == 3)//排列组合
		{
			permutations();
		}
		else if (flag == 4)//最大公约数和最小公倍数
		{
			lcdm();
		}
		else if (flag == 5)//康拓排序
		{
			Cantor_sort();
		}
		else
			printf("Imput wrong");
	}
}