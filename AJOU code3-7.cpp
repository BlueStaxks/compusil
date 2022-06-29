#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	printf("Enter the amount of change.\n");
	scanf("%d", &n);
	printf("500원: %d개, 100원: %d개, 50원: %d개, 10원: %d개.", (n / 500), ((n % 500) / 100), ((n % 100) / 50), ((n % 50) / 10));
	return 0;
}