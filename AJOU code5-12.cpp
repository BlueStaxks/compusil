#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,r;
	printf("Enter your weight.\n");
	scanf("%lf", &a);
	printf("Enter your height.\n");
	scanf("%lf", &b);
	r = a / pow(b, 2);
	printf("Your BMI is %.2lf. ", r);
	r < 18.5 ? printf("It is underweight.") :
		r >= 18.5 && r < 25 ? printf("It is normal.") : 
		printf("It is overweight.");
	return 0;
}