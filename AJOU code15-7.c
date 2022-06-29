#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
static void increment(int* value) {
	(*value)++;
}
static void decrement(int* value) {
	(*value)--;
}
void for_each_element(int vector[], int len, void (*fp)()) {
	int i;
	for (i = 0; i < len; i++)
		fp(&vector[i]);
}

int main() {
	int i, vector[] = { 1,2,3,4 };
	for_each_element(vector, 4, increment);
	for (i = 0; i < 4; i++)
		printf("%d ", vector[i]);
	for_each_element(vector, 4, decrement);
	for (i = 0; i < 4; i++)
		printf("%d ", vector[i]);
	return 0;
}