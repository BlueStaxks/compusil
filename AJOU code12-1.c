#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void fcn(char* str) {
	char ch;
	char* current = str;
	while (*str)
		str++;
	for (str--; str > current; str--, current++) {
		ch = *str;
		*str = *current;
		*current = ch;
	}
}

int main() {
	char string[100];
	printf("Enter input string.\n");
	gets(string);
	fcn(string);
	puts(string);
	return 0;
}

/*

	string 배열에 문자열이 입력되고 그 문자열이 fcn함수로 넘어가게 된다.

	current를 str로 설정하면서 시작점이 된다.

	그리고는 str을 문자열 끝까지 보낸다.
	이 끝은 실제 끝보다 한 칸 더 간 끝이다.

	그리고 current는 올라가면서, str은 내려가면서 서로의 내용 값을 바꿔준다.
	그러니 결국 문자열이 뒤집히게 되는 것이다.

*/