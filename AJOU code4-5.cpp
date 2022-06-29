#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double std_deviation(double a, double b, double c)
{
	double av = (a + b + c) / 3;
	return sqrt((pow(a - av, 2) + pow(b - av, 2) + pow(c - av, 2)) / 3);
}
int main()
{
	double a, b, c;
	printf("Enter a three real numbers.\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("The standard deviation is %lf.", std_deviation(a, b, c));
	return 0;
}