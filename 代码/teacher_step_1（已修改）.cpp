#include <cstdio>
#include <cstring>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;
#define j "########################################################################################################################\n"
#define w "                                       Welcome to Dr.Li's ETEL management system                   \n"
struct student {
	string num;
	string name;
	int C_language;
	int math;
	int English;
	int total;
	string comment;
};
void teacher_step_main(void);
void teacher_step_1(void)
//int main(void)
{
	struct student stu[30];
	string classnum;
	FILE *fp;
	int i = 0;
	int p;
	int o = 0;
	cout << j;
	cout << w;
	cout << "---------------------------------------------------------------------";
	cout << "Please Enter The class's number£º('b' to back to the teacher's menu)\n";
	cout << "---------------------------------------------------------------------";
	cin >> classnum;

	classnum += ".dat";
	if ((fopen_s(&fp, classnum, "wb")) != NULL)
	{
		cout << "Create fail";
	}
	system("cls");
	for (p = 0; p < 28; p++)
	{
		cout << j;
		cout << w;
		cout << "---------------------------------------------------------------------";
		cout << "Please Enter The student's number£º('b' to back to the teacher's menu)\n";
		cout << "---------------------------------------------------------------------";
		cin >> stu[p].num;
		for (i = 0; i < 200; i++)
			if (stu[p].num[i] == 'b')
			{
				system("cls");
				cout << j;
				cout << w;
				cout << "Saving Now...";
				fwrite(stu, sizeof(stu), 1, fp);
				fclose(fp);
				Sleep(1000);
				cout << "Close file succeed!";
				Sleep(1000);
				system("cls");
				//exit(0);
				teacher_step_main();
			}
		cout << "-------------------------------";
		cout << "Please Enter The students'name£º";
		cout << "-------------------------------";
		getchar();
		cout <<  stu[p].name;
		cout << "--------------------------------------------";
		cout << "Please Enter The students'C_language grades£º";
		cout << "--------------------------------------------";
		cin.ignore(999999);
		while (cin >> stu[p].C_language)
		{
			cout << "Can't read ! Please try it again";
		}
		cout << "--------------------------------------";
		cout << "Please Enter The students'math grades£º";
		cout << "--------------------------------------";
		cin.ignore(999999);
		while (cin >> stu[p].math)
		{
			cout << "Can't read ! Please try it again";
		}
		cout << "-----------------------------------------";
		cout << "Please Enter The students'English grades£º";
		cout << "-----------------------------------------";
		cin.ignore(999999);
		while (cin >> stu[p].English) 
		{
			cout << "Can't read ! Please try it again";
		}
		stu[p].total = stu[p].C_language + stu[p].English + stu[p].math;
		cout << "---------------------------------------------------";
		cout << "Please Enter The comment you will give to students£º\n";
		cout << "---------------------------------------------------";
		getchar();
		cin >> stu[p].comment;
		printf("His/Her name is:%s \nThe C_language:%-10dThe math:%-10dThe English:%-10dThe Total:%-10d\n ",stu[p].name.c_str(), stu[p].C_language, stu[p].math, stu[p].English, stu[p].total);
		cout << "The comments:" << stu[p].comment << endl;
		Sleep(2000);
		system("cls");
	}
	//return 0;
}


