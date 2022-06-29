#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i = 0;
	char s[10000] = "";
	char t;
	printf("Enter the key.\n");
	scanf("%d", &n);
	scanf("%c", &t);
	printf("Enter the text.\n");
	while (s[i] != '\n')
	{
		i++;
		scanf("%c", &s[i]);
	}
	i = 1;
	while (s[i] != '\n')
	{
		printf("%c", ((int)s[i] + n) % 128);
		i++;
	}
	return 0;
}