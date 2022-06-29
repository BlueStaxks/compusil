#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i, j, l;
	printf("Enter the maximum length N.\n");
	scanf("%d", &n);
	printf("The right-angled triangles are,\n");
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			for (l = 1; l <= n; l++)
				(i * i) + (j * j) == l * l ? printf("%d %d %d\n", i, j, l) : 0;
	return 0;
}