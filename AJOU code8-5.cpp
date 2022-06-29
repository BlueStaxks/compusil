#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int s = 0;
int sum(int n)
{
	if (n == 0)
	{
		printf("%d", s);
		return 0;
	}
	s += n;
	return sum(n - 1);
}
int main()
{
	int n;
	scanf("%d", &n);
	sum(n);
	return 0;
}