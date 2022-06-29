#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int square(int n)
{
	return pow(n, 2);
}
int main()
{
	int a, b;
	printf("Enter a, b.\n");
	scanf("%d %d", &a, &b);
	printf("%d * %d + %d * %d = %d.", a, a, b, b, square(a) + square(b));
	return 0;
}