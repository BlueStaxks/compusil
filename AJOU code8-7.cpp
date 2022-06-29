/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_up(int n)
{
	if (n == 0)
		return;
	print_up(n - 1);
	printf("%d ", n);
}
int main()
{
	int a;
	printf("Enter the last integer.\n");
	scanf("%d", &a);
	print_up(a);
	return 0;
}
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_up(int n)
{
	static int i = 1;
	if (i <= n)
	{
		printf("%d ", i);
		i++;
		return print_up(n);
	}
}
int main()
{
	int a;
	printf("Enter the last integer.\n");
	scanf("%d", &a);
	print_up(a);
	return 0;
}