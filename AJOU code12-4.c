#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char* my_strcat(char* dest, char* src)
{
	char* c = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return c;
}
int main()
{
	char s[10000] = { "" };
	char t[100];
	printf("Enter destination string.\n");
	while (1)
	{
		gets(t);
		if (t[0] == 'q' && t[1] == 'u' && t[2] == 'i' && t[3] == 't' && t[4] == '\0')
			return 0;
		printf("%s\n", my_strcat(s, t));
	}
}