#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char to_upper_case(char ch)
{
	printf("소문자 %c의 대문자는 %c입니다.", (int)ch, (int)ch - 32);
	return NULL;
}
int main()
{
	char a;
	printf("알파벳 소문자를 입력하세요.\n");
	scanf("%c", &a);
	to_upper_case(a);
	return 0;
}