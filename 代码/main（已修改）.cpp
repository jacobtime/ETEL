#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <graphics.h>
#include<time.h>
#include <windows.h>
#pragma comment(lib, "Winmm.lib")  
IMAGE img2;
void init();
using namespace std;
void step_1();
void step_2();
void runing();
void loading();
int main(void)
{
	init();
	runing();
	loading();
	system("color 97");
	step_1();
	step_2();
	cout << "Thank you for using";
	Sleep(2000);
	return 0;
}
void init()
{
	initgraph(639, 479);
	mciSendString("play 1.mp3", NULL, 0, NULL);
	setorigin(320, 240);
	setfillcolor(RGB(0,120,215));
	fillcircle(0, 0, 400);
	Sleep(1000);
	setfillcolor(RGB(0,204,106));
	fillcircle(0, 0, 300);
	Sleep(1000);
	setfillcolor(RGB(232,17,35));
	fillcircle(0, 0, 200);
	Sleep(1000);
	setfillcolor(RGB(255, 185, 0));
	fillcircle(0, 0, 100);
	Sleep(1000);
	settextcolor(RGB(0, 120, 215));
	settextstyle(50, 0, "微软雅黑");
	outtextxy(-40, -25, "ETEL");
	Sleep(2000);
}
void runing()
{
	cleardevice();
	initgraph(768, 432);
	setorigin(0, 0);
	loadimage(NULL, _T("a.jpg"), 768, 432);
	//loadimage(&img2, _T("t1.jpg"), 100, 86);
	settextcolor(RGB(0, 120, 215));
	LOGFONT f;
	gettextstyle(&f);
	f.lfHeight = 48;
	strcpy_s(f.lfFaceName, _T("微软雅黑"));
	f.lfQuality = 4;
	f.lfUnderline = false;
	settextstyle(&f);
	outtextxy(0, 0, "易教易学师生交互系统");
}
void loading()
{
	LOGFONT f;
	int y = 318;
	gettextstyle(&f);
	f.lfHeight = 48;
	strcpy_s(f.lfFaceName, _T("微软雅黑"));
	f.lfQuality = 4;
	f.lfUnderline = false;
	settextstyle(&f);
	outtextxy(0, 250, _T("正在加载中..."));
	setfillcolor(YELLOW);
	for (int i = 0; i <= 170; i += 10)
	{
		solidrectangle(i, 400, i + 10, 432);
		Sleep(100);
	}
	Sleep(500);
	for (int i = 180; i <= 300; i += 10)
	{
		solidrectangle(i, 400, i + 10, 432);
		Sleep(100);
	}
	Sleep(1000);
	for (int i = 310; i <= 760; i += 10)
	{
		solidrectangle(i, 400, i + 10, 432);
		Sleep(100);
	}
	Sleep(200);
	outtextxy(0, 250, _T("加载成功！"));
	mciSendString("close 1.mp3", NULL, 0, NULL);
	Sleep(200);
	closegraph();
	
}
