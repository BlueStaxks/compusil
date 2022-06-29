#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, i, j;
	printf("Enter the numbers.\n");
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d", j);
		printf("\n");
	}
	for (i = 1; i <= (a+1)/2; i++)
	{
		for (j = (a + 1) / 2 - i; j >= 1; j--)
			printf(" ");
		for (j = 1; j <= i * 2 - 1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}