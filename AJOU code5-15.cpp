#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c, r;
	printf("단가를 입력하세요.\n");
	scanf("%d", &a);
	printf("개수를 입력하세요.\n");
	scanf("%d", &b);
	printf("급행 여부를 입력하세요. (1: 급행, 0: 아님)\n");
	scanf("%d", &c);
	a * b >= 20000 ? r = a * b + 1500 : r = a * b + 2000;
	printf("지불해야 할 총액은 %d원입니다.\n", c == 1 ? r += 1000 : r);
	return 0;
}