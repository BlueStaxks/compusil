#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double round_up(double n)
{
	return floor(n + 0.5);
}
int main()
{
	double a;
	printf("Enter a positive real number.\n");
	scanf("%lf", &a);
	printf("The round up value is %d.", (int)round_up(a));
	return 0;
}