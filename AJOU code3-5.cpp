#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	printf("Enter a natural number.\n");
	scanf("%d", &a);
	printf("%d\n%d\n%d", (a % 5 == 0 || a % 6 == 0), (a % 5 == 0 && a % 6 == 0), (a % 5 != 0 && a % 6 != 0));
	return 0;
}