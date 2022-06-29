#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter dividend.\n");
	scanf("%d", &a);
	printf("Enter divisor.\n");
	scanf("%d", &b);
	printf("Quotient is %d. Remainder is %d.", a / b, a & b);
	return 0;
}