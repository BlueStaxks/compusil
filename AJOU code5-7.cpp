#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char s;
	int a, r;
	double w;
	printf("Enter sex, age, and weight.\n");
	r = scanf("%c, %d, %lf", &s, &a, &w);
    printf("%d",r);
	r == 3 ? printf("%c, %d, %lf\n", s, a, w) : printf("Error in input format.");
	return 0;
}
