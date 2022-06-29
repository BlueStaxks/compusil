#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char s[100] = "I am here.";
	char* t = "I am here.";
	(s == t) ? printf("yes.\n") : printf("no.\n");		//이것은 s와 t의 포인터 값을 비교하는 것이다. 당연히 두 변수는 다르므로 포인터 값이 달러서 no가 나온다.
	(*s == *t) ? printf("yes.\n") : printf("no.\n");	//이것은 s와 t의 내용을 비교하는 것이다. 서로 다른 변수이긴 하지만 내용은 같기에 yes가 나온다.
	return 0;
}