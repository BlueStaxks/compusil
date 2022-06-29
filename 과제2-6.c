#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
int getToday(int* y, int* m, int* d)
{
	time_t current;
	struct tm* t;
	time(&current);
	t = localtime(&current);
	*y = t->tm_year + 1900;
	*m = t->tm_mon + 1;
	*d = t->tm_mday;
	return t->tm_yday;
}
int Daypass(int y, int m, int d) //0부터 다 셈
{
	int months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (!(y % 4) && y % 100 || !(y % 400)) //달 계산
		months[1]++;
	int i, r = 0;
	y--;
	r = y * 365 + y / 4 - y / 100 + y / 400; //년만 계산 (1년이면 0, 2년이면 365)
	for (i = 0; i < m - 1; i++)
		r += months[i];
	return r += d; //일 추가
}
int main()
{
	printf("*** Days of Life ****\n");
	char wda[7][10] = { {"Sunday"},{"Monday"},{"Tuesday"},{"Wednesday"},{"Thursday"},{"Friday"},{"Saturday"} };
	while (1)
	{
		int tyear, tmonth, tday;
		getToday(&tyear, &tmonth, &tday);
		printf("Enter the Day 1 (as yyyy.mm.dd) : ");
		int y, m, d, dp, dp2;
		scanf("%d.%d.%d", &y, &m, &d);
		if (y < 1900)
		{
			dp = Daypass(tyear, tmonth, tday) - Daypass(tyear, 1, 1);
			dp2 = Daypass(tyear, tmonth, tday) - Daypass(1900, 1, 1); //요일 체크용
			printf("* Out of Bound: year [%d] < 1900\nToday is %04d.%02d.%02d (%s),\n\tThe Day %d of this Year.", y, tyear, tmonth, tday, wda[(dp2 + 1) % 7], dp + 1);
			return 0;
		}
		dp = Daypass(tyear, tmonth, tday) - Daypass(y, m, d);
		dp2 = Daypass(y, m, d) - Daypass(1900, 1, 1); //요일 체크용
		printf("The Day 1 of Life : %04d.%02d.%02d (%s)\nThe number of days passed since the Day 1: %d\n\t--> The Day %d of Life\n", y, m, d, wda[(dp2 + 1) % 7], dp, dp + 1);
	}
}