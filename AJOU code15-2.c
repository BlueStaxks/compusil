#define _CRT_SECURE_NO_WARNINGS //10의자리 이상의 수와 음수도 처리 가능 //왠진 모르겠지만 컴파일 후 왼쪽 아래에 '준비'라고 뜬 뒤에 식을 입력해야 오류가 안남
#include <stdio.h>
#include "stack4.h"
int main()
{
	int t1 = 0, b = 1, k1, k2;
	stackType4 s;
	init(&s);
	char c;
	while ((c = getchar()) != '\n')
	{
		if (c >= '0' && c <= '9')
		{
			t1 *= 10;
			t1 += (int)c - 48; //이래야 10이상의 수를 처리 가능
		}
		if (c == ' ')
		{
			push(&s, t1 * b);
			b = 1;
			t1 = 0;
			/*for (int i = 0; i < s.p; ++i)
				printf("%d ", s.line[i]);
			printf("\n\n");*/ //연산 과정
		}
		if (c == '+')
		{
			k2 = top(&s);
			pop(&s);
			k1 = top(&s);
			pop(&s);
			push(&s, k1 + k2);
			if ((c = getchar()) == '\n')
				break;
		}
		else if (c == '-')
		{
			if ((c = getchar()) == '\n')
			{
				k2 = top(&s);
				pop(&s);
				k1 = top(&s);
				pop(&s);
				push(&s, k1 - k2);
				break;
			}
			else if (c >= '0' && c <= '9') //이러면 연산 기호가 아니라 부호로 인식
			{
				b = -1;
				t1 = (int)c - 48;
			}
			else
			{
				k2 = top(&s);
				pop(&s);
				k1 = top(&s);
				pop(&s);
				push(&s, k1 - k2);
			}
		}
		else if (c == '*')
		{
			k2 = top(&s);
			pop(&s);
			k1 = top(&s);
			pop(&s);
			push(&s, k1 * k2);
			if ((c = getchar()) == '\n')
				break;
		}
		else if (c == '/')
		{
			k2 = top(&s);
			pop(&s);
			k1 = top(&s);
			pop(&s);
			push(&s, k1 / k2);
			if ((c = getchar()) == '\n')
				break;
		}
	}
	printf("%d", top(&s));
	return 0;
}