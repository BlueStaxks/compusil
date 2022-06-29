#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
long long int fib(long long int n)
{
	if (n < 3)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	long long int num, r;
	clock_t start, end;
	printf("Enter the number N.\n");
	scanf("%lld", &num);
	start = clock();
	r = fib(num);
	end = clock();
	printf("%lldth fibonacci number is %lld.\n", num, fib(num));
	printf("Time elapsed for fibonacci is %.3lf seconds.", (end-start)/(double)CLOCKS_PER_SEC);
	return 0;
}

/* 4번 줄 부터 10번 줄 까지를 이렇게 바꾸면 훨씬훨씬훨씬 더 빠르게 계산할 수 있다.
long long int m[100000000] = {};
long long int fib(long long int n)
{
	if (n < 3)
		return 1;
	else if (m[n] > 0)
		return m[n];
	else
		return m[n] = fib(n - 1) + fib(n - 2);
}
*/