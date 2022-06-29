#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	FILE* fp = fopen("forcode1.txt", "w");
	char a[100]={""};
	char b[100]={""};
	gets(a);
	gets(b);
	fputs(a, fp);
	fputc('\n', fp);
	fputs(b, fp);  //잘 들어간다.
	return 0;
}