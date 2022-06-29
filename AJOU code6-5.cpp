#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long long int n, i;
	printf("Enter a natural number.\n");
	scanf("%lld", &n);
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			printf("%lld ", i);
	}
	return 0;
}