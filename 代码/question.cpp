#include <cstdio>
#include <cstring>
#include <windows.h>
#include <conio.h>
#include <algorithm>
#include <cstdlib>
#include <math.h>
using namespace std;
#define j "########################################################################################################################\n"
#define w "                                       Welcome to Dr.Li's ETEL management system                   \n"

struct TEST
{
	char Question[1000];
	char Answer;
};
struct TEST pp[10];
void student_step_2();
void question(void)
{
	puts(j);
	puts(w);
	FILE*fp;
	puts("Now Let's Start!");
	char answer[10];
	int i, score = 0;
	fopen_s(&fp, "pp.dat", "rb+");
	fread(pp, sizeof(pp), 1, fp);
	for (i = 0; i < 5; i++)
	{
		getchar();
		printf("%d.%s\n",i, pp[i].Question);
		printf("please input answer:");
		scanf_s("%c", &answer[i], sizeof(answer[i]));
		if (answer[i] == pp[i].Answer)
			score += 20;
		//system("cls");//ÇåÆÁ 
	}
	printf("Your mark is %d\n", score);
	printf("Press any key to continue . . .\n");
	_getch();
	system("cls");
	student_step_2();
}