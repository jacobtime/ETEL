#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <iostream>
using namespace std;
#define j "########################################################################################################################\n"
#define w "                                       Welcome to Dr.Li's ETEL management system                   \n"
using namespace std;
struct student {
	string num;
	string name ;
	int C_language;
	int math;
	int English;
	int total;
	string comment ;
};
void teacher_step_main();
void teacher_step_2(void)
//int main(void)
{
	struct student test[30];
	FILE *fp;
	int i, choose, p = 0;
	string stunum ;
	string open_ ;
	cout <<  j;
	cout << w;
	cout << "Please enter the class's number to change his/her message(\"b\" to back)";
	cin >> open_;

	open_ += ".dat";//拼接成文件
	if ((fopen_s(&fp, open_, "rb+")) != NULL)//失败返回
	{
		cout <<"Can't find the file.";
		system("cls");
		exit(0);
	}



	fread(test, sizeof(test), 1, fp);
	while (1)
	{
		system("cls");
		cout << (j);
		cout << (w);



		cout << ("Please enter the student's number to change his/her message (b to back)");
		cin >> stunum;
		for (i = 0; i < 100; i++)
			if (stunum[i] == 'b')//有b即返回
			{
				//返回前重新写入
				fclose(fp);
				fopen_s(&fp, open_, "rb+");
					fwrite(test, sizeof(test), 1, fp);
				
				fclose(fp);
				Sleep(1000);
				system("cls");
				//exit(0);//
				teacher_step_main();
			}
		p = 0;//使得每次循环p从0开始记我们要找的位置
		for (i = 0; i < 28; i++)
		{
			if (test[i].num == stunum)//判定是否为相等
			{
				break;
			}
			p++;
		}

		system("cls");

		while (1)
		{
			cout << (j);
			cout << (w);//下面的为输出文件
			printf( "His/Her name is:%s \nThe C_language:%-10dThe math:%-10dThe English:%-10dThe Total:%-10d\n The comments:%s\n\n", test[p].name.c_str(), test[p].C_language, test[p].math, test[p].English, test[p].total, test[p].comment.c_str());
			cout << ("which one would you like to change?(0 to back)");
			cout << ("1.his/her name");
			cout << ("2.his/her C_language masks");
			cout << ("3.his/her math masks");
			cout << ("4.his/her English masks");
			cout << ("5.his/her comment");
			if (cin >> choose && (choose < 6 && choose >= 0))//判定是否在范围内
			{
				if (choose == 1)
				{
					cout << ("Please cout <<  his/her name");
					cin >> test[p].name;
				}
				else if (choose == 2)
				{
					cout << ("Please cout <<  his/her C_language masks");
					cin >> test[p].C_language;
					test[p].total = test[p].C_language + test[p].English + test[p].math;
				}
				else if (choose == 3)
				{
					cout << ("Please cout <<  his/her math masks");
					cin >> test[p].math;
					test[p].total = test[p].C_language + test[p].English + test[p].math;
				}
				else if (choose == 4)
				{
					cout << ("Please cout <<  his/her English masks");
					cin >> test[p].English;
					test[p].total = test[p].C_language + test[p].English + test[p].math;
				}
				else if (choose == 5)
				{
					cout << ("Please cout <<  his/her comments");
					cin >> test[p].comment;
				}
				else
				{
					break;//返回选班级
				}
			}
			system("cls");
		}

	}
	//return 0;
}
