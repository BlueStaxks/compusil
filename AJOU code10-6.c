#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void reverse(char s[], int last)
{
	if (last >= 0)
	{
		printf("%c", s[last]);
		return reverse(s, last - 1);
	}
}
int main()
{
	char c[10000] = { "" };
	char t;
	int i = 0;
	while (1)
	{
		scanf("%c", &t);
		if (t == '\n')
			break;
		c[i] = t;
		i++;
	}
	reverse(c, i - 1);
	return 0;
}