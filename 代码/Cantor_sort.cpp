#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
using namespace std;
void student_step_2_1();
#define q "########################################################################################################################\n"
#define w "                                       Welcome to Dr.Li's ETEL management system                   \n"


void Cantor_sort()
{
	int flag;
	while (1)
	{
		system("cls");
		puts(q);
		puts(w);
		printf("输入0返回上一层，输入1计算康拓排序，输入2计算逆康拓排序\n");
		scanf_s("%d", &flag);
		system("cls");
		if (flag == 0)
		{
			student_step_2_1();
		}
		else if (flag == 1)//康拓排序
		{
			int flag = 1;
			char a[100], flag1;
			long long  b = 1, sum1 = 0, sum2 = 0, sum3 = 1;
			printf("请输入这个序列（不超过17位）：\n");
			getchar();
			flag1 = getchar();
			a[0] = flag1;
			while ((a[flag++] = getchar()) != '\n');
			//fgets(a, strlen(a), stdin);
			//flag = strlen(a);
			a[flag - 1] = '\0';
			system("cls");
			for (int i = 0; i < flag - 1; i++)
				a[i] -= 48;
			for (int i = 0; i < flag; i++)
			{
				sum1 = 0;
				for (int j = flag - 2; j > i; j--)
				{
					if (a[i] > a[j])
						sum1++;
				}
				sum3 = 1;
				for (int k = flag - i - 2; k > 1; k--)
					sum3 *= k;
				sum2 += (sum1*sum3);
			}
			printf("这个序列是第%lld位\n\n", sum2 + 1);
			printf("按任意键退出\n");
			getchar();
			system("cls");
		}
		else if (flag == 2)//逆康拓排序
		{
			int book[20] = { 0 }, g = 0,  k = 0, l = 1, flag, flag1;
			long long a, jc = 1, c, d;
			char b[20], e;
			printf("请输入你想要生成序列的位数（不超过17位）:\n");
			scanf_s("%d", &flag);
			system("cls");
			printf("请输入这串序列在这个字典序中排多少位:\n");
			scanf_s("%lld", &a);
			a--;
			system("cls");
			printf("输入0以字母表示这个序列，输入1以数字表示这个序列(要想以数字表示序列，则这个序列不能超过10位):\n");
			scanf_s("%d", &flag1);
			system("cls");
			for (int i = flag - 1; i >= 0; i--)
			{
				jc = 1;
				for (int j = i; j > 1; j--)
					jc *= j;

				c = a % jc;
				d = a / jc;
				a = c;
				g = 0;
				k = 0;

				for (; k <= flag - 1; k++)
				{
					if (!book[k] && d)g++;
					if (d == 0)k--;
					if (g == d)
					{
						for (int j = k + 1; j <= flag - 1; j++)
						{
							if (book[j])k++;
							else goto to;
						}
					to:
						book[k + 1] = 1;
						break;
					}
				}
				if (!flag1)
					e = 97 + k + 1;
				else
					e = 48 + k + 1;
				b[flag - 1 - i] = e;
			}
			b[flag] = '\0';
			printf("这个序列是：%s\n\n", b);
			printf("按任意键返回\n");
			getchar();
			getchar();
		}
		else
			printf("错误输入");
	}
	printf("Press any key to continue . . .\n");
	_getch();
	system("cls");
}