#define _CRT_SECURE_NO_WARNINGS
#define TripleXor(a, b) ((a)^=(b)^=(a)^=(b))
#include <stdio.h>
int main() {
	float x = 4.19, y = 5.18;
	int a = x;
	int b = y;
	int k = TripleXor(a, b);
	//printf("%d %d", a, b);
	return 0;
}

//TripleXor은 두 정수를 swap하는 함수이다.