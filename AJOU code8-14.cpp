/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void recurse(int n) {
	if (n > 10)
		return;
	printf("%d.\n", n);
	recurse(n + 1);
}
int main() {
	int num;
	printf("Enter a natural number.\n");
	scanf("%d", &num);
	recurse(num);
	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num, i;
	printf("Enter a natural number.\n");
	scanf("%d", &num);
	for (i = num; i <= 10; i++)
		printf("%d.\n", i);
	return 0;
}