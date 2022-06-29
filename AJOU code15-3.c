#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "stack.h" //커스텀
int main() {
	char ch;	stackType mystack;
	printf("Enter an expression.\n");
	init(&mystack);
	while ((ch = getchar()) != '\n')
	{
		if (ch == '(') {
			if (mystack.p==10) {
				printf("Stack full.\n");
				exit(1);
			}
			else
				push(&mystack);
		}
		if (ch == ')') {
			if (mystack.p==0) {
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
