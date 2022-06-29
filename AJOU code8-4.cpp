#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int current_min(int n)
{
	static int min = 100; //정적 변수
	return min > n ? min = n : min;
}
int main()
{
	int a;
	printf("Enter a number.\n");
	scanf("%d", &a);
	while (a >= 0)
	{
		printf("Current min is %d.\nEnter a number.\n", current_min(a));
		scanf("%d", &a);
	}
	return 0;
}