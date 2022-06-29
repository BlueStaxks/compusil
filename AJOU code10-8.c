#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double horner(const int n, const double p[], const double x)
{
	int i;
	double r;
	r = p[0];
	for (i = 1; i <= n; ++i)
		r = r * x + p[i];
	return r;
}
int main()
{
	int p, i;
	double x;
	double d[10000] = { 0.0 };
	printf("Enter order of polynomial.\n"); //차수
	scanf("%d", &p);
	printf("Enter %d coefficients.\n", p + 1);
	for (i = 0; i <= p; ++i)
		scanf("%lf", &d[i]);
	printf("Enter the value of x.\n");
	scanf("%lf", &x);
	printf("The value of the polynomial is %lf.", horner(p, d, x));
	return 0;
}