#include <stdio.h>
void in_order(int m, int* n) {
	if (m > *n)
		return;
	else {
		++m;
		--(*n);
		printf("%d %d\n", m, *n);
		in_order(m, n);
		printf("%d %d\n", m, *n);
	}
}
int main() {
	int m = 2, n = 8;
	in_order(m, &n);
	printf("%d %d\n", m, n);
	return 0;
}

/*

먼저 main함수에서 printf보다 in_order 함수가 먼저 불러지기 때문에 in_order함수로 넘어간다
그런데 in_order 함수로 넘어갈 때 m은 일반 변수, n은 포인터 값을 넘겼다.
그래서 in_order 함수에선 *n으로 받았고, *n의 값은 아직 8이다.
첫 if문에선 m값이 더 작아 false가 되어 다음 else로 넘어간다.
else 문의 7번, 8번 줄을 거치며 m은 3이 되고 *n은 7이 된다.
그 상태로 출력이 되어 3, 7이 먼저 나오고 재귀의 형식으로 in_order함수를 부르므로 
4 6
5 5  까지 나올 것이다.
더 나아가 6 4까지 가서 한 번 출력되고 다음엔 if문에 걸리므로 리턴되고 그 전 단계에서 함수에서 한 번 더 출력되어 6 4가 다시 출력된다.
이제부터 함수가 연달아 끝나면서 값들이 출력될텐데, m값은 쌓인 함수마다 고유의 값이 있기 때문에 in_order 함수가 끝나고 되돌아갈 때마다
다시 1씩 줄어들고 마지막 main함수에서 2로 출력될 것이다.
하지만 n값은 쌓인 함수마다 고유의 값이 있는 것이 아니라, 포인터를 통해 값을 바꾼 것이기 때문에 in_order함수가 끝나고 되돌아가도 값이 변하지 않아서
끝까지 4로 출력될 것이다.

*/