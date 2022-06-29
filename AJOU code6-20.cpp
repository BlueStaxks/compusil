#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char s[1000] = "";
	int v = 0, i = 0;
	printf("Enter an identifier.\n");
	while (s[i] != '\n')
	{
		i++;
		scanf("%c", &s[i]);
		s[i] >= '0' && s[i] <= '9' ? v = 1 : 0;
	}
	v == 1 && i <= 8 && s[1] >= 'a' && s[1] <= 'z' ? printf("It's a legal ID.") : printf("Nope.");
	return 0;
}