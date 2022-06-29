#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
static int add(int a, int b) {
	return a + b;
}
static int mult(int a, int b) {
	return a * b;
}

int traverse(static int (*fp)(), int size, int* elms) {
	int i, val = *elms;
	for (i = 1; i < size; ++i)
		val = fp(val, *(elms+i));
	return val;
}

int main() {
	int vector[] = { 1,2,3,4,5 };
	printf("%d\n", traverse(add, 5, vector));
	printf("%d\n", traverse(mult, 5, vector));
	return 0;
}