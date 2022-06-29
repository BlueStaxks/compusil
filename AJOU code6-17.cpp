#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char s[10000] = "";
	int i = 0, c = 0;
	printf("Enter a sentence.\n");
	while (s[i] != '\n')
	{
		i++;
		scanf("%c", &s[i]);
	}
	s[0] = ' ';
	i = 0;
	do
	{
		i++;
		(s[i] == 'i' && s[i + 1] == 'n' && s[i + 2] == ' ') ? c++ : 0;
		// 영어 문장은 전치사 in으로 끝날 수도 있기 때문에 in 뒤에 공백만 오는 경우 말고 쉼표나 마침표가 오는 경우도 생각해야 한다.
        /*
         //(s[i - 1] == ' ' && s[i] == 'i' && s[i + 1] == 'n') && (s[i + 2] == ' ' || s[i + 2] == ',' || s[i + 2] == '.') ? c++ : 0;
         // 영어 문장은 전치사 in으로 끝날 수도 있기 때문에 in 뒤에 공백만 오는 경우 말고 쉼표나 마침표가 오는 경우도 생각해야 한다.
         s[i] == 'i' && s[i + 1] == 'n' && s[i + 2] == ' ' ? c++ : 0;*/
	} while (s[i + 3] != '\n');
	printf("The preposition 'in' appears %d times.", c);
	return 0;
}