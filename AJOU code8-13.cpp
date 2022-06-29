#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void to_binary(int n)
{
	if (n > 1)
		to_binary(n / 2);
	printf("%d", n % 2);
}
int main()
{
	int n;
	scanf("%d", &n);
	to_binary(n);
	return 0;
}