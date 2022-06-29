#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char matually_prime(int a, int b)
{
	int i, j;
	for (i = 2; i <= a; i++)
		if (a % i == 0)
			for (j = 2; j <= b; j++)
				if (b % j == 0 && i == j)
					return 'n';
	return 'y';
}
int main()
{
	int a, b;
	printf("Enter two numbers.\n");
	scanf("%d %d", &a, &b);
	matually_prime(a, b) == 'y' ? printf("They are matually prime.") : printf("They are not matually prime.");
	return 0;
}