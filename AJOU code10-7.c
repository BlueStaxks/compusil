#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int modulo(int a[], const int m, const int size)
{
	int t, i;
	t = a[0] % m;
	for (i = 1; i < size; ++i)
		t = (t * 10 + a[i]) % m;
	return t;
}
int main() {
	int i, mod, arr[1000];
	char ch;
	printf("Enter a big positive integer.\n");
	i = 0;
	while ((ch = getchar()) != '\n') {
		arr[i] = atoi(&ch);
		i++;
	}
	printf("Enter a modulus number.\n");
	scanf("%d", &mod);
	printf("The result of modulo is %d.\n", modulo(arr, mod, i));
	return 0;
}