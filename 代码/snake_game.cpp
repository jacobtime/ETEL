#include <windows.h>
#include <conio.h>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <graphics.h>
#include<time.h>
#include <windows.h>
#pragma comment(lib, "Winmm.lib")  
#pragma warning(disable:4715)
IMAGE img1;
enum fx
{
	u = 72,
	d = 80,
	l = 75,
	r = 77
};
struct snakexy
{
	int x;
	int y;
}xy;
struct snake
{
	int n;
	snakexy xy[500];
	char ch = r;
	char cch;
}snake;
struct food
{
	snakexy food;
	int flag;
}food;
void initsnake()
{
	srand((unsigned int)time);
	//mciSendString(L"open C:\\Users\\Ô¸°®\\Desktop\\×ÀÃæ\\ÎÄ¼þ\\1.mp3 alias BGM", NULL, 0, NULL);
	//mciSendString(L"play BGM repeat", NULL, 0, NULL);
	snake.n = 1;
	snake.ch = r;
	snake.xy[0].x = 0; snake.xy[0].y = 0;
}
void drawsnake()
{
	/*setbkcolor(GREEN);
	cleardevice();*/
	for (int i = 0; i < snake.n; i++)
	{
		setfillcolor(YELLOW);
		fillrectangle(snake.xy[i].x, snake.xy[i].y,
			snake.xy[i].x + 20, snake.xy[i].y + 20);
	}

}
void movesnake()
{
	for (int i = snake.n - 1; i > 0; i--)
	{
		snake.xy[i].x = snake.xy[i - 1].x;
		snake.xy[i].y = snake.xy[i - 1].y;
	}
	switch (snake.ch)
	{
	case u:
		snake.xy[0].y -= 20;
		break;
	case d:
		snake.xy[0].y += 20;
		break;
	case l:
		snake.xy[0].x -= 20;
		break;
	case r:
		snake.xy[0].x += 20;
		break;
	}
}
void changesnakech()
{
	int ch1 = _getch();
	switch (ch1)
	{
	case u:
		if (snake.ch != d)
			snake.ch = ch1;
		break;
	case d:
		if (snake.ch != u)
			snake.ch = ch1;
		break;
	case l:
		if (snake.ch != r)
			snake.ch = ch1;
		break;
	case r:
		if (snake.ch != l)
			snake.ch = ch1;
		break;
	}
}
void xyfood()
{
	food.food.x = rand() % 32 * 20;
	food.food.y = rand() % 24 * 20;
	food.flag = 0;
}
void drawfood()
{
	fillroundrect(food.food.x, food.food.y, food.food.x + 20, food.food.y + 20, 20, 20);
}
void eatfood()
{
	if (snake.xy[0].x == food.food.x&&snake.xy[0].y == food.food.y)
	{
		food.flag = 1;
		snake.n++;
	}
}
int strikesnake()
{
	if (snake.xy[0].x >= 640 || snake.xy[0].x < 0 || snake.xy[0].y >= 480 || snake.xy[0].y < 0)
	{
		return 1;
	}
	else
	{
		int flag = 1;
		for (int i = snake.n - 1; i > 0; i--)
		{
			if (!flag)
				return 1;
			else if (snake.xy[i].x == snake.xy[0].x&&snake.xy[i].y == snake.xy[0].y)
				flag--;
			else
				return 0;
		}
	}
}
int gre_snake_begin(int n)
{
	initgraph(640, 480);
	initsnake();
	while (1)
	{
		if (n)
		{
			xyfood();
			drawsnake();
			n--;
		}

		while (!_kbhit())
		{
			if (food.flag)
				xyfood();
			cleardevice();
			void drawui();
			{
				setfillcolor(BLACK);
				for (int i = 0; i < 640; i += 20)
				{
					for (int k = 0; k < 480; k += 20)
					{
						fillrectangle(i, k, i + 20, k + 20);
					}
				}
			}
			movesnake();
			if (strikesnake())
				return 0;
			drawsnake();
			drawfood();
			eatfood();
			Sleep(200);
		}
		changesnakech();
	}

}
int gre_snake(int n)
{
	gre_snake_begin(n);
	//mciSendString(L"pause BGM", NULL, 0, NULL);
	closegraph();
	return 0;
}