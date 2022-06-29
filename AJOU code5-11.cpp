#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int leap_year(int y)
{
	(y % 4 == 0 && y % 100 != 0) || (y % 400 == 0) ? printf("It is a leap year.") : 
		printf("It is not a leap year.");
	return 0;
}
int main()
{
	int a;
	printf("Enter year.\n");
	scanf("%d", &a);
	leap_year(a);
	return 0;
}