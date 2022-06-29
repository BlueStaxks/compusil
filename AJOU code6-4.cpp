#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i;
	double s = 0;
	printf("Enter the number of terms.\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		i % 2 == 0 ? s -= 4 / ((double)i * 2 - 1) : s += 4 / ((double)i * 2 - 1);
	printf("PI evaluated to %d terms is %.12lf.", n, s);
	return 0;
}