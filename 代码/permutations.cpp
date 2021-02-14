#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
using namespace std;
void student_step_2_1();
int PL(int a,int b);//定义一个可以计算“排列 ”的函数 
int ZH(int a,int b);//定义一个可以计算“组合 ”的函数 
void permutations(void)
{
	char x;
	int a,b,y;
	printf("Please choose what kind of the operator you want to do A or C:");
	while ((x = getchar()) == '\n')
	{ }
	printf("Please input the numbers:");
	scanf_s("%d %d",&a,&b);
	if (x = 'A')
	{
		y = PL(a, b);
		printf("PL=%d", y);
	}
	else if (x = 'B')
	{
		y = ZH(a, b);
		printf("ZH=%d", y);
	}
	else
		printf("Input error!\n");
	printf("Press any key to continue . . .\n");
	_getch();
	system("cls");
	student_step_2_1();

 } 
 int PL(int a,int b)
 {
 	int i;
	if(a<=0||b<=0)
 	return -1;
 	else
 	i=a*b;
 	return i;
  } 
int ZH(int a,int b)
{
	int j;
	if(a<=0||b<=0)
	return -1;
	else
	j=a*b/2;
	return j;
}
