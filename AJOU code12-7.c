#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int my_strcmp(const char* str1, const char* str2)
{
	int i = 0;
	while (1)
	{
		if (*(str1 + i) == '\0' && *(str2 + i) == '\0')
			return 0;
		if (*(str1 + i) < *(str2 + i))
			return -1;
		if (*(str1 + i) > *(str2 + i))
			return 1;
		i++;
	}
}
int main()
{
	char s1[10000]={""};
	char s2[10000]={""};
	while (1)
	{
		printf("Enter string 1.\n");
		gets(s1);
		if (s1[0] == 'q' && s1[1] == 'u' && s1[2] == 'i' && s1[3] == 't' && s1[4] == '\0')
			return 0;
		printf("Enter string 2.\n");
		gets(s2);
		if (s2[0] == 'q' && s2[1] == 'u' && s2[2] == 'i' && s2[3] == 't' && s2[4] == '\0')
			return 0;
		printf("Result of strcmp(str1, str2) is %d.\n", my_strcmp(s1, s2));
	}
}