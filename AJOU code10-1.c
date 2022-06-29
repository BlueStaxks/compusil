#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void add(const int a, const int b, int* p)
{
	*p = a + b;
}
int main()
{
	int a, b, sum;
	int* ptr = &sum;
	scanf("%d %d", &a, &b);
	add(a, b, ptr);
	printf("%d", sum);
	return 0;
}