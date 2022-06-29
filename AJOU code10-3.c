#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fibo(int val[], int fnd[], int n){
	int temp;
	if (fnd[n] == 1)
		return val[n];
	else {// if (n >= 3)
		temp = fibo(val, fnd, n - 1) + fibo(val, fnd, n - 2);
		val[n] = temp;
		fnd[n] = 1;
		return temp;
	}
}
int main(){
	int i, num, value[100], found[100];	printf("Enter a number.\n");
	scanf("%d", &num);
	for (i = 0; i < 100; i++)	found[i] = 0;
	value[0] = value[1] = 1;
	found[0] = found[1] = 1;
	printf("%dth Fibonacci number is %d.\n", num, fibo(value, found, num - 1));
	return 0;
}