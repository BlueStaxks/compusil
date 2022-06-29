#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b = 0, s = 0, i = 1;
	printf("Enter a maximum number.\n");
	scanf("%d", &a);
	while (1)
	{
		s += i;
		s > a ? b = 1 : 0;
		if (b == 1)
			break;
		i++;
	}
	printf("The sum from 1 to %d is %d.", i - 1, s - i);
	return 0;
}