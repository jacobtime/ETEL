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

void student_step_1()
{
	struct student test[30];
	FILE *fp,*fp1;
	int i, p = 0;
	char stunum[100],nam[2];
	char open_[100];
	puts(j);
	puts(w);
	puts("Please enter your class's number to seek your message(\"b\" to back)");
	scanf_s("%s", open_, 100);
	if (open_[0] == 'b')                                    //NOg1
	{
		system("cls");
		open_[0] = '\0';
		student_step_main();
	}
	for (int i = 1; 1; i++)
	{
		strcat_s(open_, "_");
		nam[0] = i + 48;
		nam[1] = '\0';
		strcat_s(open_, nam);
		strcat_s(open_, ".dat");
		if ((fopen_s(&fp1, open_, "rb+")) != NULL)
			break;
		else
		{
			fclose(fp1);
			fopen_s(&fp, open_, "rb+");
			fclose(fp);
		}
		for (int i = 1; i <= 6; i++)
			open_[i] = '\0';
	}
	open_[2]--;
	fopen_s(&fp, open_, "rb+");
	fread(test, sizeof(test), 1, fp);
	fclose(fp);

	while (1)
	{
		system("cls");
		puts(j);
		puts(w);
		puts("Please enter your number to seek your message (b to back)");
		scanf_s("%s", stunum, 100);
		for (i = 0; i < 100; i++)
			if (stunum[i] == 'b')//有b即返回
			{
				fclose(fp);
				Sleep(1000);
				system("cls");
				student_step_main();
			}
		p = 0;//使得每次循环p从0开始记我们要找的位置
		for (i = 0; i < 28; i++)
		{
			if (strcmp(test[i].num, stunum) == 0)//判定是否为相等
			{
				break;
			}
			p++;
		}

		system("cls");

		while (1)
		{
			int flag = 1;
			puts(j);
			puts(w);//下面的为输出文件
			printf("your name is:%s \nThe C_language:%-10dThe math:%-10dThe English:%-10dThe Total:%-10d\n The comments:%s\n\n", test[p].name, test[p].C_language, test[p].math, test[p].English, test[p].total, test[p].comment);
			printf("Type 0 to return\n");
			scanf_s("%d", &flag);
			if (!flag)
				break;
		}
	}
}