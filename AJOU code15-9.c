#define _CRT_SECURE_NO_WARNINGS
#define STRLEN 10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare_int(void* a, int i) {
	int* nptr = (int*)a;
	return (nptr[i] - nptr[i + 1]);
}

int compare_str(void* a, int i) {
	char(*row)[STRLEN] = a;
	return (strcmp(row[i], row[i + 1]));
}

void swap_int(void* a, int i) {
	int* nptr = (int*)a;
	int temp;
	temp = nptr[i];
	nptr[i] = nptr[i + 1];
	nptr[i + 1] = temp;
}

void swap_str(void* a, int i) {
	char(*row)[STRLEN] = a;
	char temp[1000];
	strcpy(temp, row[i]);
	strcpy(row[i], row[i + 1]);
	strcpy(row[i + 1], temp);
}

void bubble_sort(void* arr, int (*compare)(), void (*swap)(), int numelt) {
	int pass, current, sorted = 0;
	for (pass = 1; (pass < numelt) && (!sorted); pass++) {
		sorted = 1;
		for (current = 0; current < (numelt - pass); current++) {
			if (compare(arr, current) > 0) {
				swap(arr, current);
				sorted = 0;
			}
		}
	}
}

int main() {
	int i;
	int int_vector[] = { 3,1,2,5,4,6 };
	char str_vector[][STRLEN] = { "peach", "grape", "banana", "apple" };
	bubble_sort(int_vector, compare_int, swap_int, 6);
	for (i = 0; i < 6; i++)
		printf("%d ", int_vector[i]);
	printf("\n");

	bubble_sort(str_vector, compare_str, swap_str, 4);
	for (i = 0; i < 4; i++)
		printf("%s ", str_vector[i]);
	printf("\n");
	return 0;
}