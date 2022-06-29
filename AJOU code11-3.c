#include <stdio.h>
void f1(int* p) { *p = 30; }
void f2(int p) { p = 40; }
void f3(int* arr) {
	int* p = arr;
	printf("%d\n", *p);
	printf("%d\n", *(p + 3));
}
int main() {
	int m = 10, list[] = { 1,3,5,7 };
	f1(&m);
	printf("%d\n", m);
	f2(m);
	printf("%d\n", m);
	f3(list);
	return 0;
}
/*

먼저 main 함수에서 f1를 호출한다.
f1에 m의 위치를 넘겨주고 f1에선 그 위치에 해당하는 값을 30으로 바꿨으므로 처음엔 30이 나올 것이다.

그 뒤에 f2로 넘어가는데 f2엔 일반 변수로 넘어서 f2의 내용이 main에 영향을 주지 않는다. m값은 변하지 않고 그대로 30이 나올 것이다.

f3에서 list를 넘기는데 이것을 포인터 arr로 받으면 배열 자체를 역참조 하는 것이 아니라 배열의 첫 요소의 포인터가 된다.
그러니 f3 내에서 list의 첫 요소인 1이 나오고 그 3번째 뒤의 수인 7도 연달아 나올 것이다. (p + 3 때문)

*/