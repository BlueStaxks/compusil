#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void min_max(int* arr, int* min, int* max, int length)
{
	*min = *max = *(arr + --length);
	for (; length > 0; --length)
	{
		if (*(arr + length) < *min)
			*min = *(arr + length);
		if (*(arr + length) > *max)
			*max = *(arr + length);
	}
}
int main()
{
	int m[100] = { 0 };
	int i = 0;
	int max, min;
	printf("Enter a sequence of positive integers.\n");
	while (++i)
	{
		scanf("%d", &m[i]);
		if (m[i] <= 0)
			break;
	}
	min_max(m, &min, &max, i);
	printf("Minimum is %d, Maximum is %d.", min, max);
	return 0;
}