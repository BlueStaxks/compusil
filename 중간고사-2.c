#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("*** Leap Year ****\n");
	int i, c1 = 0, c2 = 0;
	for (i = 2000; i <= 2999; ++i)
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			c1++;
	for (i = 2000; i <= 3999; ++i)
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			c2++;
	printf("2000년에서 2999년까지 윤년은 %d번 있고, %.2lf%%입니다.\n", c1, (double)c1 / 1000);
	printf("2000년에서 3999년까지 윤년은 %d번 있고, %.2lf%%입니다.\n", c2, (double)c2 / 2000);
	return 0;
}