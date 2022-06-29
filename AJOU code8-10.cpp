#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int power(int a, int b)
{
	static int s = a;
	static int k = b;
	if (b > 1)
	{
		s *= a;
		return power(a, b - 1);
	}
	else
		printf("%d to the power of %d is %d ", a, k, s);
	return 0;
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	power(a, b);
	return 0;
}