#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	printf("Enter an integer.\n");
	scanf("%d", &a);
	(a & 1) == 1 ? printf("It is an odd number.") : printf("It is an even number.");
	return 0;
}