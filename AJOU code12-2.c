#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char s[1000];
	gets(s);

	puts(s);

	printf("%s\n", s);

	FILE* fpw = fopen("AJOU.txt", "w");
	fprintf(fpw, "%s", s);

	int i = 0;
	while(s[i]!='\0')
		printf("%c", s[i++]);

	return 0;
}