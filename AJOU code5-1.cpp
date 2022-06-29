#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int abs(int num)
{
	return num >= 0 ? num : num * (-1);
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", abs(n));
	return 0;
}