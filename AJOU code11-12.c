#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print_array(char* arr, int length)
{
	while (length--)
		printf("%c", *(arr + length));
}
int main()
{
	static char s[100];
	printf("Enter a sentence.\n");
	scanf("%[^\n]s", s);
	print_array(s, strlen(s));
	return 0;
}