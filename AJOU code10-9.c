#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int m[12] = { 0 };
int comp(int *a, int *b)
{
	if (*a < *b)	return -1;
	if (*a > *b)	return 1;
	if (*a == *b)	return 0;
}
void check(int a, int b, int c)
{
	if (a > b)
	{
		printf("No such data.");
		return;
	}
	int i = (a + b) / 2;
	if (m[i] == c)
	{
		printf("It is in index %d.", i);
		return;
	}
	if (m[i] > c)
		check(a, i - 1, c);
	else
		check(i + 1, b, c);
}
int main()
{
	int i, a;
	printf("Enter twelve integers.\n");
	for (i = 0; i < 12; ++i)
		scanf("%d", &m[i]);
	qsort(m, sizeof(m) / sizeof(int), sizeof(int), comp);
	printf("Enter data to be searched.\n");
	scanf("%d", &a);
	check(0,11,a);
	return 0;
}