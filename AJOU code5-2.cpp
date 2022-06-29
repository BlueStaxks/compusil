#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_vowel(char c)
{
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ? 1 : 0;
}
int main()
{
	char c;
	scanf("%c", &c);
	printf("%s", is_vowel(c) ? "Vowel" : "Consonant");
	return 0;
}