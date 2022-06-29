#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void move(int n, char X, char Y, char Z)
{
	if (n == 1)
	{
		printf("move a disk from %c to %c\n", X, Y);
	}
	else
	{
		move(n - 1, X, Z, Y);
		printf("move a disk from %c to %c\n", X, Y);
		move(n - 1, Z, Y, X);
	}
}
int main()
{
	int n;
	printf("Enter the number of disks.\n");
	scanf("%d", &n);
	move(n, 'X', 'Y', 'Z');
	return 0;
}