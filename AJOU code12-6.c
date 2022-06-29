#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void change_str(char* str, const char* to, const char* from)
{
	char* p;
	int i;
	while (1)
	{
		p = strstr(str, from);
		if (p != NULL)
		{
			for (i = 0; i < strlen(from); ++i)
				*(p + i) = *(to + i);
			str = p + i;
		}
		else
			return;
	}
}
int main()
{
	char s[1000] = { "" };
	char t1[30];
	char t2[30];
	printf("Enter a string.\n");
	gets(s);
	printf("from string.\n");
	gets(t1);
	printf("to string.\n");
	gets(t2);
	change_str(s, t2, t1);
	printf("%s", s);
	return 0;
}