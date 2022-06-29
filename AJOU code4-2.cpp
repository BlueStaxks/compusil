#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	double p[3] = {};
	double q[3] = {};
	printf("Enter the coordinates of point p.\n");
	scanf("%lf %lf", &p[1], &p[2]);
	printf("Enter the coordinates of point q.\n");
	scanf("%lf %lf", &q[1], &q[2]);
	printf("Distance between the points is %lf.", sqrt(pow((p[1] - q[1]), 2) + pow((p[2] - q[2]), 2)));
	return 0;
}