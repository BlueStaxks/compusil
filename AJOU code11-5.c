#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void reverse_array(int* a, int* b, int length)
{
	int i;
	for (i = 0; i < length; ++i)
		*(b + i) = *(a + length - 1 - i);
}
int main()
{
	int a[1000] = { 0 };
	int b[1000] = { 0 };
	int t, i = 0, j;
	printf("Enter a sequence of positive integers.\n");
	while (1)
	{
		scanf("%d", &t);
		if (t == -1)
			break;
		a[i] = t;
		i++;
	}
	reverse_array(a, b, i);
	for (j = 0; j < i; ++j)
		printf("%d ", b[j]);
	return 0;
}