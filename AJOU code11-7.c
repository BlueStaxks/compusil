#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void print_array(int* arr, int length)
{
	int i;
	for (i = 0; i < length; ++i)
		printf("%d ", *(arr + i));
	printf("\n");
}
void swap_array(int* a, int* b, int length)
{
	int i;
	int* t;
	t = (int*)malloc(sizeof(int) * 5);
	for (i = 0; i < length; ++i)
	{
		*(t + i) = *(a + i);
		*(a + i) = *(b + i);
		*(b + i) = *(t + i);
	}
	free(t);
}
int main()
{
	int arr1[5] = { 0 };
	int arr2[5] = { 0 };
	int i;
	printf("Enter the contents of first array.\n");
	for (i = 0; i < 5; ++i)
		scanf("%d", &arr1[i]);
	printf("Enter the contents of second array.\n");
	for (i = 0; i < 5; ++i)
		scanf("%d", &arr2[i]);
	printf("Before swapping,\n");
	printf("first: ");
	print_array(arr1, 5);
	printf("second: ");
	print_array(arr2, 5);
	swap_array(arr1, arr2, 5);
	printf("After swapping,\n");
	printf("first: ");
	print_array(arr1, 5);
	printf("second: ");
	print_array(arr2, 5);
	return 0;
}