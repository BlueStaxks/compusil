#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i, s = 9, r = 0;
	printf("Enter the number of terms.\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		r += s;
		s *= 10;
		s += 9;
	}
	printf("The sum is %d.", r);
	return 0;
}