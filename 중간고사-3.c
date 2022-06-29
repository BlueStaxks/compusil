#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x1, x2, x3, y1, y2, y3;
	printf("*** Rectangle ****\n");
	printf("좌표 입력(x, y): ");
	scanf("%d %d", &x1, &y1);
	printf("좌표 입력(x, y): ");
	scanf("%d %d", &x2, &y2);
	printf("좌표 입력(x, y): ");
	scanf("%d %d", &x3, &y3);
	printf("주어진 세개의 좌표: (%d, %d), (%d, %d), (%d, %d)\n", x1, y1, x2, y2, x3, y3);
	printf("나머지 네번째 좌표: (%d, %d)", x1 ^ x2 ^ x3, y1 ^ y2 ^ y3);
	return 0;
}