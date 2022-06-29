#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char* my_strchr(const char* str, int c)
{
	while (*str != '\0')
	{
		if ((int)(*str) == c)
			return str;
		str++;
	}
	return NULL;
}
int main()
{
	char s[10000];
	char t, t1;
	char* r;
	while (1)
	{
		printf("Enter source string.\n");
		gets(s);
		if (s[0] == 'q' && s[1] == 'u' && s[2] == 'i' && s[3] == 't' && s[4] == '\0')
			return 0;
		printf("Emter character to be searched.\n");
		scanf("%c", &t);
		scanf("%c", &t1);
		r = my_strchr(s, (int)t);
		if (r == NULL)
			printf("No such character.\n");
		else
			printf("%s\n", r);
	}
}