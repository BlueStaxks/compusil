#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print(int n)
{
	if (n > 0)
	{
		printf("*");
		return print(n - 1);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	print(n);
	return 0;
}