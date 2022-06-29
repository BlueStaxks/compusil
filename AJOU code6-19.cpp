#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char t = 0;
	int c = 0;
	printf("Enter a sentence.\n");
	while (t != '\n')
	{
		scanf("%c", &t);
		t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u' ? c++ : 0;
	}
	printf("Vowel appears %d times.", c);
	return 0;
}