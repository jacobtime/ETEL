#include<stdio.h>
int years(int year)
{
          if(year%4==0&&year%100!=0) 
	return 1;
          else if(year%400==0) 
	return 1;
          else 
	return 0;
}//判断年份是否是闰年。 
int monthdays(int year, int month)
{
          if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
          return 31;
          else if(years(year)==1&&month==2) 
	return 29;
          else if(month==2) 
	return 28;
          else 
	return 30;
}//判断月份对应天数。 
int sumdays(int year0,int month0,int day0,int year,int month,int day)
{
          int sum=0, i, j, k, days;
          for(i=year0; i<year; i++)
          {
                    if(years(i)) 
		days = 366;
		else 
		days = 365;
		sum = sum + days;
          }
          for(j=1; j<month0; j++)
	sum = sum - monthdays(year0,j);
	sum = sum - day0;
	for(k=1; k<month; k++)
	sum = sum + monthdays(year,k);
	sum = sum + day;
	return sum;
}//计算天数。 
int  days (void)
{
	int year=2021, month=12, day=22, year0, month0, day0, sumday;
	printf("Today is ：\n");
	scanf_s("%d %d %d",&year0,&month0,&day0); 
	sumday = sumdays(year0,month0,day0,year,month,day);
	
	return(sumday);
}
