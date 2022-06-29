#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int k_letters(const char* string)
{
	int c = 0, t;
	while (1)
	{
		if (*string == '\0')
			return c;
		t = (int)(*string);
		if (t < 0 || t >= 128)
		{
			string += 2;
			c++;
		}
		else
			string++;
	}
}
int main()
{
	char s[100000] = { "" };
	while (1)
	{
		printf("Enter a sentence with Korean and English letters.\n");
		gets(s);
		printf("한글 문자는 %d번 나옵니다.\n", k_letters(s));
	}
}