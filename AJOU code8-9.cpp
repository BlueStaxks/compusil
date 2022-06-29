#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int s = 0;
int sum(int n)
{
	if (n > 0)
		s += n * 10 + 2;
	else
		return s;
	return sum(n - 1);
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", sum(n));
	return 0;
}