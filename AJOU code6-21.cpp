#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int bin_to_dec(long long int n)
{
	int r = 0, c = 0;
	while (n != 0)
	{
		r += (n % 10) * pow(2, c);
		c++;
		n /= 10;
	}
	return r;
}
int main()
{
	long long int n;
	printf("Enter a binary number.\n");
	scanf("%lld", &n);
	printf("The demical value of binary %lld is %d.", n, bin_to_dec(n));
	return 0;
}