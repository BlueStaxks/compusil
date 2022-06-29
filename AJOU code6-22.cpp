#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, c = 0, t, s, i;
	printf("Enter a number.\n");
	scanf("%d", &n);
	while (c < n)
	{
		s = 0;
		c++;
		t = c;
		while (t != 0)
		{
			t % 10 == 3 || t % 10 == 6 || t % 10 == 9 ? s++ : 0;
			t /= 10;
		}
		if (s > 0)
		{
			for (i = 1; i <= s; i++)
				printf("!");
			printf(" ");
		}
		else
			printf("%d ", c);
	}
	return 0;
}