#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int k_palindrome(const char* string)
{
	int i = strlen(string), j;
	for (j = 0; j < (i / 2) - 1; j += 2)
		if (string[j] != string[i - 2 - j] || string[j + 1] != string[i - 1 - j])
			return 0;
	return 1;
}
int main()
{
	char t;
	int i, j;
	while (1)
	{
		i = 0;
		char m[10000] = { "" };
		while (1)
		{
			scanf("%c", &t);
			if (t == '\n')
				break;
			if ((int)t >= 32 && (int)t <= 47)
				continue;
			m[i] = t;
			i++;
		}
		k_palindrome(m) == 1 ? printf("네. 회문입니다.\n") : printf("회문이 아닙니다.\n");
	}
}