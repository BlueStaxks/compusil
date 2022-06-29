#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv)
{
	int i;
	int a, b;
	char c;
	a = atoi(argv[1]);
	c = *argv[2];
	b = atoi(argv[3]);
	if (c == '+')
		printf("%d + %d = %d\n", a, b, a + b);
	else if (c == '-')
		printf("%d - %d = %d\n", a, b, a - b);
	else if (c == '*')
		printf("%d * %d = %d\n", a, b, a * b);
	else if (c == '/')
		printf("%d / %d = %d\n", a, b, a / b);
	else if (c == '%')
		printf("%d %% %d = %d\n", a, b, a % b);
	else if (c == '^')
		printf("%d ^ %d = %d\n", a, b, (int)pow(a, b));
	return 0;
}
//exe파일 내용