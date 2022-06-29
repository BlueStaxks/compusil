#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter three integers.\n");
	scanf("%d %d %d", &a, &b, &c);
	printf("The average of %d, %d, %d is %.3lf", a, b, c, ((double)a + (double)b + (double)c) / 3);
	return 0;
}