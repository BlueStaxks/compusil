#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "stack3.h" //커스텀
int main()
{
	int p = 0, i;
	char c;
	stackType3 s1;
	stackType3 s2;
	init(&s1);
	init(&s2);
	while ((c = getchar()) != '\n')
	{
		if (c == '*')
			pop(&s1);
		else
			push(&s1, c);
	}
	int l = s1.p;
	for (i = 0; i < l; ++i)
	{
		push(&s2, s1.line[s1.p - 1]);
		pop(&s1);
	}
	for (i = 0; i < l; ++i)
	{
		printf("%c", s2.line[s2.p - 1]);
		pop(&s2);
	}
	return 0;
}