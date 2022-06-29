#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <windows.h>
int main()
{
	struct tm* t;
	time_t now = time(NULL);
	t = localtime(&now);
	char wda[7][4] = { {"Sun"},{"Mon"},{"Tue"},{"Wed"},{"Thu"},{"Fri"},{"Sat"}};
	char yda[12][4] = { {"Jan"},{"Feb"},{"Mar"},{"Apr"},{"May"},{"Jun"},{"Jul"},{"Aug"},{"Sep"},{"Oct"},{"Nov"},{"Dec"} };
	printf("Current time is : %s %s %d %02d:%02d:%02d %d\n", wda[t->tm_wday], yda[t->tm_mon], t->tm_mday, t->tm_hour, t->tm_min, t->tm_sec, t->tm_year + 1900);
	printf("Enter number of years and months you want to get back.\n");
	int a, b;
	scanf("%d %d", &a, &b);
	t->tm_year -= a;
	t->tm_mon -= b;
	mktime(t);
	printf("Now your time is : %s %s %d %02d:%02d:%02d %d", wda[t->tm_wday], yda[t->tm_mon], t->tm_mday, t->tm_hour, t->tm_min, t->tm_sec, t->tm_year + 1900);
	return 0;
}