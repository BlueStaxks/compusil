#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void static cyclic_swap(int* a, int* b, int* c)
{
	int t;
	t = *a;
	*a = *c;
	*c = *b;
	*b = t;
}
int main()
{
	int a1, b1, c1;
	printf("Enter three integers a, b, c.\n");
	scanf("%d %d %d", &a1, &b1, &c1);
	printf("Before cyclic swap, a = %d, b = %d, c = %d.\n", a1, b1, c1);
	cyclic_swap(&a1, &b1, &c1);
	printf("After cyclic swap, a = %d, b = %d, c = %d.", a1, b1, c1);
	return 0;
}