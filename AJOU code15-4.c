#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "stack2.h" //또 다른 스택 헤더
int main() {
	char ch;	stackType2 mystack;
	printf("Enter an expression.\n");
	init(&mystack);
	while ((ch = getchar()) != '\n')
	{
		if (ch == '(')
			push(&mystack);
		if (ch == ')') {
			if (mystack.p == 0) {
				printf("Stack empty.\n");
				exit(1);
			}
			else
				pop(&mystack);
		}
	}
	!mystack.p ? printf("Legal expression.\n") : printf("Illegal expression.\n");
	return 0;
}
