#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_palindrome(char s[], int first, int last)
{
	if (first >= last)
		return 1;
	if (s[first] != s[last])
		return 0;
	is_palindrome(s, ++first, --last);
}
int main()
{
	char s[10000] = { "" };
	char t;
	printf("Enter input sentence.\n");
	int i = 0;
	while (1)
	{
		scanf("%c", &t);
		if (t == '\n')
			break;
		s[i] = t;
		i++;
	}
	if (is_palindrome(s, 0, i - 1))
		printf("Yes, it is a palindrome.");
	else
		printf("No, it is not a palindrome.");
	return 0;
}