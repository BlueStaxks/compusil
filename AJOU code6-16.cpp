#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char ch;
	int sum = 0;
	int value;
	printf("Enter a natural number.\n");
	while (1)
	{
		scanf("%c", &ch);
		if (ch == '\n')	break;
		value = int(ch) - 48;
		sum = sum * 10 + value;
	}
	printf("You entered %d in demical.\n", sum);
	return 0;
}