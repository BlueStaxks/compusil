#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int count_vowel(char* arr, int length)
{
	int i, c = 0;
		for (i = 0; i < length; ++i)
		{
			if (*arr == 'a' || *arr == 'e' || *arr == 'i' || *arr == 'o' || *arr == 'u')
				c++;
			arr++;
		}
	return c;
}
int main()
{
	int i = 0, c = 0;
	char m[1000] = { "" };
	scanf("%s", m);
	printf("%d", count_vowel(m, strlen(m)));
	return 0;
}