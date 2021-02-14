#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
using namespace std;
void student_step_main();
#define j "########################################################################################################################\n"
#define w "                                       Welcome to Dr.Li's ETEL management system                   \n"
struct student {
	char num[1000];
	char name[21];
	int C_language;
	int math;
	int English;
	int total;
	char comment[1001];
};
struct student test[30][30], book[30];

void student_step_3()
{
	//3_1,3_2
	FILE *fp;
	int p = 0, flag = 0, flag1, flag2 = 0;
	char stunum[100], nam[2];
	char open_[100];
	puts(j);
	puts(w);
	puts("Please enter your class's number to seek your message(\"b\" to back)");
	scanf_s("%s", open_, 100);
	if (open_[0] == 'b')                                    //bug1
	{
		system("cls");
		open_[0] = '\0';
		student_step_main();
	}

	strcat_s(open_, "_");
	for (int i = 1; 1; i++)
	{
		nam[0] = i + 48;
		nam[1] = '\0';
		//sprintf_s(nam,sizeof(nam), "%s", flag2);
		//printf("%s\n", nam);
		strcat_s(open_, nam);
		strcat_s(open_, ".dat");
		printf("%s", open_);
		flag++;
		if ((fopen_s(&fp, open_, "rb+")) != NULL)//失败返回
		{
			flag2 = 1;//记录是否已经把这个班级的所有成绩都读取到
			system("cls");
			if (flag == 1)//如果第一次读取就失败，则执行这个if
			{
				printf("If there is no information about this class or if there is no such class, please re-enter\n");
				Sleep(2000);
				for (int i = 2; i <= 6; i++)
					open_[i] = '\0';
				student_step_3();
			}
			else
				;
		}
		if (flag2)//如果不是第一次读取就失败（证明这个班级的数据存在），且flag2已经为1（表明读取完成），则执行这个if
		{
			flag1 = i - 1;
			system("cls");
			break;
		}
		fread(test[i - 1], sizeof(test[0]), 1, fp);
		fclose(fp);
		for (int i = 2; i <= 6; i++)
			open_[i] = '\0';
	}
	puts(j);
	puts(w);
	printf("Please enter your student number (enter b to return to the previous level)\n");
	scanf_s("%s", stunum, 100);
	printf("%c", stunum[0]);
	for (int i = 0; i <= 100; i++)
		if (stunum[i] == 'b')//有b即返回
		{
			//fclose(fp);                     //bug2
			Sleep(1000);
			system("cls");
			student_step_main();
		}
	p = 0;
	for (int i = 0; i <= flag1; i++)
	{
		for (int k = 0; k < 30; k++)
			if (strcmp(test[i][k].num, stunum) == 0)//判定是否为相等
			{
				book[i] = test[i][k];//将这个班级所有考试中此学生的成绩统一放入book中
				break;
				p++;
			}
	}
	system("cls");
	puts(j);
	puts(w);
	printf("Your previous achievements are as follows：\nThe C_language	The math	The English		The Total	commend\n");
	for (int i = 0; i <= p + 1; i++)
	{
		printf("第%d次成绩： %d		%d			%d		          %d		%s\n", i + 1, book[i].C_language, book[i].math, book[i].English, book[i].total, book[i].comment);
	}
	while (1)
	{
		printf("Enter 0 to return\n");
		int flag2 = 0;
		scanf_s("%d", &flag2);
		if (flag)
			break;
	}

}