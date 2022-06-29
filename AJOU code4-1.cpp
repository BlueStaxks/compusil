#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_larger(int f, int s)
{
	return f >= s;
}
int main()
{
	int a, b;
	printf("Enter two integers.\n");
	scanf("%d %d", &a, &b);
	printf("Result is %d.", is_larger(a, b));
	return 0;
}