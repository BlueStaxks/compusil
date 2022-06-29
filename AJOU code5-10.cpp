#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int d = 0;
int is_digit(int ch)
{
	ch >= '0' && ch <= '9' ? d++ : 0;
	return 0;
}
int main()
{
	char a, b, c;
	printf("Enter a 3-letter word.\n");
	scanf("%c%c%c", &a, &b, &c);
	is_digit(a);
	is_digit(b);
	is_digit(c);
	printf("Digit appears %d times.", d);
}