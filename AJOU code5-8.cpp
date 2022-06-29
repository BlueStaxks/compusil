#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char a;
	printf("Enter a character.\n");
	scanf("%c", &a);
	a >= '0' && a <= '9' ? printf("It is a digit.") : 
		(a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') ? printf("It is an alphabet.") : 
		printf("It is neither an alphabet nor digit.");
	return 0;
}