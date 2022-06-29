#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double a, r;
	int b;
	printf("Enter monthly amount in Kwh.\n");
	scanf("%lf", &a);
	printf("Enter 1 if summer or winter, 0 if not.\n");
	scanf("%d", &b);
	a <= 200 ? r = 93.3 * a + 910 :
		a > 200 && a <= 400 ? r = 187.9 * a + 1600 :
		a > 400 && a <= 1000 ? r = 280.6 * a + 7300 :
		a > 1000 && b == 1 ? r = 709.5 * a + 7300 : 
		a > 1000 && b == 0 ? r = 280.6 * a + 7300 : 0;
	printf("Including tax, you pay %d.", (int)(r * 1.137));
	return 0;
}