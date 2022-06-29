#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	printf("Enter seconds.\n");
	scanf("%d", &a);
	printf("It is %d hours, %d minutes, %d seconds", a / 3600, (a % 3600) / 60, a % 60);
	return 0;
}