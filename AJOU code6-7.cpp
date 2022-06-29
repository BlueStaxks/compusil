#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i;
	double a = 0;
	printf("Enter the number of iteration.\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		a += 1 / (double)n;
	printf("1/%d summed up %d times is %.16lf.", n, n, a);
	return 0;
}

/*
* a를 double 형태로 저장 한 뒤 소수점 16자리까지 출력해 보면
* 값이 딱 1이 되지 않고 0.9~ 가 된다.
*
* 이것은 double 의 범위가 무한하지 않기 때문에 1/7이 무한소수가 아닌 유한소수로 나타내지기 때문이다.
*/