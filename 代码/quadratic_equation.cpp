#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
using namespace std;
void student_step_2_1();
void quadratic_equation(void)
{
	double a,b,c,d,x1,x2;
	printf("eg:ax^2+bx+c=0\n");
	printf("Please input a b c:");
	scanf_s("%lf %lf %lf",&a,&b,&c);
	printf("%.2fx^2+%.2fx+%.2f=0\n",a,b,c);
	d=b*b-4*a*c;//≈–∂œ¶§¥Û–°°£
	if(d<0)
	printf("None");
	else if(d==0)
	{
		x1=x2= -b/(2*a) ;
		printf("x1=x2= %f \n",x1);
	} 
	else
	{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("x1= %f \n",x1);
		printf("x2= %f \n",x2);
	}
	printf("Press any key to continue . . .\n");
	_getch();
	system("cls");
	student_step_2_1();
 } 
