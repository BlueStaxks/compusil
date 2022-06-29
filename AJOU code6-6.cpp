#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int power(int a, int b)
{
	int i;
	int s = a;
	for (i = 1; i < b; i++)
		s *= a;
	return s;
}
int main()
{
	int a, b;
	printf("Enter base and power.\n");
	scanf("%d %d", &a, &b);
	printf("%d to the power of %d is %d.", a, b, power(a, b));
	return 0;
}