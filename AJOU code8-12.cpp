#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int is_prime(int n, int half)
{
	if (half == 1)
		return 1;
	if (n % half == 0)
		return 0;
	return is_prime(n, half - 1);
}
int main()
{
	int n;
	scanf("%d", &n);
	if (n == 2 || n == 3)
	{
		printf("It is a prime.");
		return 0;
	}
	else if (n % 2 == 0)
	{
		printf("It is NOT a prime.");
		return 0;
	}
	is_prime(n, (int)sqrt(n)) ? printf("It is a prime.") : printf("It is NOT a prime.");
	return 0;
}