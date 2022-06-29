#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, s = 0, i;
	printf("Enter a natural number.\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 5 == 0)
			continue;
		s += i;
	}
	printf("The sum is %d.", s);
	return 0;
}