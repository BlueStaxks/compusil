#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int narciss(int n)
{
	int i = 1, c = 0, s = 0, p = n;
	while (1)
	{
		if (n >= i)
		{
			i *= 10;
			c++;
		}
		else
		{
			for (i = 1; i <= c; i++)
			{
				s += pow(n % 10, c);
				n /= 10;
			}
			break;
		}
	}
	if (s == p)
		return 1;
	else
		return 0;
}
int main()
{
	int n;
	printf("Enter a number.\n");
	scanf("%d", &n);
	narciss(n) == 1 ? printf("Yes, %d is a narcissistic number.", n) : printf("No, %d is not a narcissistic number.", n);
	return 0;
}