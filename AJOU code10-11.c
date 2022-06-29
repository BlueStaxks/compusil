#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void insertion_sort(int arr[], int length)
{
	int r[10000] = { 0 };
	int i, j, l;
	r[0] = arr[0];
	for (i = 1; i < length; ++i)
	{
		/*for (int i1 = 0; i1 < length; ++i1)
			printf("%d ", r[i1]);
		printf("\n");*/ //중간 과정을 보는 코드
		for (j = i - 1; j >= 0; --j)
		{
			if (r[j] <= arr[i])
			{
				for (l = i; l > j; --l)
					r[l] = r[l - 1];
				r[j + 1] = arr[i];
				break;
			}
			if (!j)
			{
				for (l = i; l > 0; --l)
					r[l] = r[l - 1];
				r[0] = arr[i];
				break;
			}
		}
	}
	printf("After sorting: ");
	for (int i1 = 0; i1 < length; ++i1)
		printf("%d ", r[i1]);
}
int main()
{
	int i = 0;
	int m[10000] = { 0 };
	printf("Enter input numbers.\n");
	while (1)
	{
		scanf("%d", &m[i]);
		if (m[i] == -1)
			break;
		i++;
	}
	insertion_sort(m, i);
	return 0;
}