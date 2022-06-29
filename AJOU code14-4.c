#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* fp = fopen(__FILE__, "r");
	char ch;
	int a = 0, b = 0, c = 0, d = 0;
	while ((ch = fgetc(fp)) != EOF)
	{
		if (ch == '{')	a++;
		if (ch == '}')	b++;
		if (ch == '(')	c++;
		if (ch == ')')	d++;
	}
	printf("left parenthesis: %d, right parenthesis: %d\nleft braceL %d, right brace: %d", c, d, a, b);
	return 0;
}