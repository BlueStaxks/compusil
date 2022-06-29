#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
char c;
float float_calculate(float a, float b)
{
	float r;
	printf("%f %c %f  ", a, c, b);
	c == '+' ? r = a + b :
		c == '-' ? r = a - b :
		c == '*' ? r = a * b :
		c == '/' ? r = a / b : 
		c == '^' ? r = pow(a, b) : 0;
	printf("= %f.", r);
	return 0;
}
int int_calculate(int a, int b)
{
	int r;
	printf("%d %c %d  ", a, c, b);
	c == '+' ? r = a + b :
		c == '-' ? r = a - b :
		c == '*' ? r = a * b :
		c == '/' ? r = a / b :
		c == '%' ? r = a % b :
		c == '^' ? r = pow(a, b) : 0;
	printf("= %d.", r);
	return 0;
}
int main()
{
	int n;
	float a, b;
	printf("Enter 1 for floating point calculation, 2 for integer calculation.\n");
	scanf("%d", &n);
	printf("Enter an expression. for EXAMPLE, 2 + 5.\n");
	scanf("%f %c %f", &a, &c, &b);
	n == 1 ? float_calculate(a, b) : int_calculate(a, b);
	return 0;
}