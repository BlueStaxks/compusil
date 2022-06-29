#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a/*단가*/, b/*개수*/, c/*총액*/;
	printf("단가와 개수를 띄어쓰기로 구분하여 한 줄에 입력하시오.\n");
	scanf("%d %d", &a, &b);
	c = (int)(b > 10 ? a * b * 0.95 : a * b);
	printf("%d", c);
	return 0;
}