#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
double average_by_array(int p[], int length)
{
	int i;
	double s = 0;
	for (i = 0; i < length; ++i)
		s += p[i];
	return s / (double)length;
}
double average_by_pointer(int* p, int length)
{
	int i;
	double s = 0;
	for (i = 0; i < length; ++i)
		s += *(p + i);
	return s / (double)length;
}
int main() {
	int arr[5] = { 10,40,50,20,15 };
	printf("%lf\n", average_by_array(arr, 5));
	printf("%lf\n", average_by_pointer(arr, 5));
	return 0;
}