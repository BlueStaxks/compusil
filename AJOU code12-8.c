#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int my_atoi(const char* string)
{
	int r = 0, p = 1;
	if (*string == '-')
	{
		p = -1;
		string++;
	}
	while(1)
	{
		if (*(string) != '\0')
		{
			r *= 10;
			r += (int)(*(string++)) - 48;
		}
		else
			return r * p;
	}
}
int main()
{
	char s[1000];
	while (1)
	{
		printf("Enter a number string.\n");
		gets(s);
		if (s[0] == 'q' && s[1] == 'u' && s[2] == 'i' && s[3] == 't' && s[4] == '\0')
			return 0;
		printf("The string you enter is integer %d.\n", my_atoi(s));
	}
}