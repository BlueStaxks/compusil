#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, i, j;
	printf("Enter row and column.\n");
	scanf("%d %d", &a, &b);
	int** m = (int**)malloc(sizeof(int*) * a);
	for (i = 0; i < a; ++i)
		m[i] = (int*)malloc(sizeof(int) * b);
	printf("Enter the value of array elements.\n");
	for (i = 0; i < a; ++i)
		for (j = 0; j < b; ++j)
			scanf("%d", &m[j][i]);
	for (i = 0; i < a; ++i)
	{
		for (j = 0; j < b; ++j)
			printf("%d ", m[j][i] * m[j][i]);
		printf("\n");
	}
	return 0;
}