#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int* reverse_array(int* a, int length)
{
	int i;
	int* b;
	b = (int*)malloc(sizeof(int) * 100);
	for (i = 0; i < length; ++i)
		*(b + i) = *(a + length - 1 - i);	
	return b;
}
int main() {
	int i = 0, num, length;
	int original[100], * reversed;
	printf("Enter a sequence of positive integers.\n");
	while (1) {
		scanf("%d", &num);
		if (num <= 0)
			break;
		original[i++] = num;
	}
	length = i;

	reversed = reverse_array(original, length);
	for (i = 0; i < length; i++)
		printf("%d ", reversed[i]);
	printf("\n");
	free(reversed);
	return 0;
}