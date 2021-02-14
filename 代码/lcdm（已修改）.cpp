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
int fac (int m,int n);
void student_step_2_1();
void lcdm(void)
{
	int m,n,r;
	cin >> n >> m;
	if(n>m)
	{
		r=n;
		n=m;
		m=r;
	}
	cout << fac(m, n) << m*n / fac(m, n);
	printf("Press any key to continue . . .\n");
	_getch();
	system("cls");
	 student_step_2_1();
}
int fac (int m,int n)
{
	if(m%n==0)
		return n;
	else
		return fac(n,m%n);
}

