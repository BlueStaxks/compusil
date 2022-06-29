#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int gmax(int a, int b)
{
	return ((a - b) & 0x80000000) ? b : a;
}
int main()
{
	int a, b, c, t, max, min;
	while (1)
	{
		printf("Enter Three Positive Integers: ");
		scanf("%d %d %d", &a, &b, &c);
		if (!(gmax(a,-1)+1))
		{
			printf("Bye!!!");
			return 0;
		}
		if (!(gmax(a,b)-a) && !(gmax(a,c)-a))
		{
			max = a;
			if (!(gmax(b,c)-c))
				min = b;
			else
				min = c;
		}
		else if (!(gmax(b,a)-b) && !(gmax(b,c)-b))
		{
			max = b;
			if (!(gmax(c,a)-c))
				min = c;
			else
				min = a;
		}
		else
		{
			max = c;
			if (!(gmax(a,b)-b))
				min = a;
			else
				min = b;
		}
		printf("Min (%d, %d, %d) = %d\nMax (%d, %d, %d) = %d\n", a, b, c, min, a, b, c, max);
	}
}