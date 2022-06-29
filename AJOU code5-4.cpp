#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i;
	double s[4];
	printf("Enter three real numbers.\n");
	scanf("%lf %lf %lf", &s[1], &s[2], &s[3]);
	s[0] = s[3];
	for (i = 1; i <= 3; i++)
		if (s[i] + s[(i + 1) % 3] > s[(i + 2) % 3] ? 1 : 0)
		{
			printf("%lf", s[i] + s[(i + 1) % 3] + s[(i + 2) % 3]);
			return 0;
		}
	printf("No such triangle.");
	return 0;
}
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i;
	double s[6];
	printf("Enter three real numbers.\n");
	scanf("%lf %lf %lf", &s[1], &s[2], &s[3]);
	s[4] = s[1];
	s[5] = s[2];
	for (i = 1; i <= 3; i++)
		if (s[i] + s[i + 1] > s[i + 2] ? 1 : 0)
		{
			printf("%lf", s[i] + s[i + 1] + s[i + 2]);
			return 0;
		}
	printf("No such triangle.");
	return 0;
}
*/