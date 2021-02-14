#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
void standard_mode(); 
void science_mode();
void HDOB();
void student_step_2_1();
void cal_main(void)
{
	int a;
	cout << "0.Back\n1.Standard mode\n2.Science mode\n3.H-D-O-B\n";
	cin >> a;
		if (a == 0)
		{
			student_step_2_1();
		}
		else if (a == 1)
		{
			standard_mode();
		}
		else if (a == 2)
		{
			science_mode();
		}
		else if (a == 3)
		{
			HDOB();
		}
		system("pause");

}
