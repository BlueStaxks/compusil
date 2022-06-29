#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void print_array(char* arr, int length)
{
	if (length)
	{
		printf("%c", *(arr + length - 1));
		if (length > 1)
			print_array(arr, length - 1);
	}
}
int main()
{
	char s[100];
	int i = 0;
	scanf("%s", s);
	do
	{
		if (s[i] == '\0')
		{
			print_array(s, i);
			return 0;
		}
	} while (++i);
}