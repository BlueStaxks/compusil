#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add_number(int x, int y) {
	return x + y;
}
int main() {
	int a = 10, b = 20, sum;
	int (*fp)(int);
	fp = &add_number;
	sum = (*fp)(a, b);
	printf("sum is: %d", sum);
	return 0;
}