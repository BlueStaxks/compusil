#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int c = 0;
	double a = 0, n;
	while (1)
	{
		c++;
		printf("Enter a natural number.\n");
		scanf("%lf", &n);
		if (n <= 0)
			return 0;
		a += n;
		printf("Current average is %.3lf.\n", a / (double)c);
	}
	return 0;
}