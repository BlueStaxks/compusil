#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void factorial(int n, int* p)
{
	if (n > 1)
		*p *= n;
	else
		return;
	return factorial(n - 1, p);
}
int main()
{
	int result = 1;
	int n;
	int *ptr = &result;
	scanf("%d", &n);
	factorial(n, ptr);
	printf("%d", result);
	return 0;
}