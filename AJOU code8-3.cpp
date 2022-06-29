#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a, b, c, min, max;
void min_max(int a, int b, int c)
{
	a >= b ? a >= c ? max = a : max = c : b >= c ? max = b : max = c;
	a <= b ? a <= c ? min = a : min = c : b <= c ? min = b : min = c;
}
int main()
{
	printf("Enter three integers.\n");
	scanf("%d %d %d", &a, &b, &c);
	min_max(a, b, c);
	printf("min is %d, max is %d.", min, max);
	return 0;
}
