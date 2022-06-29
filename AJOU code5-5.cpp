#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x, y;
	printf("Enter the x, y coordinates of the point.\n");
	scanf("%d %d", &x, &y);
	x > 0 && y > 0 ? printf("It's in the 1st quadrant.") : 0;
	x > 0 && y < 0 ? printf("It's in the 4th quadrant.") : 0;
	x < 0 && y > 0 ? printf("It's in the 2nd quadrant.") : 0;
	x < 0 && y < 0 ? printf("It's in the 3rd quadrant.") : 0;
	return 0;
}