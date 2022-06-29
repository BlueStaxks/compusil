#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter degrees in Celcius.\n");
	scanf("%d", &a);
	printf("%d degrees in Celcius is %d degrees in Fahrenheit.", a, 9 * a / 5 + 32);
	return 0;
}