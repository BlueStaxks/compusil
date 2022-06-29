/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int s[11] = {};
	int i, t;
	printf("Enter scores of three judges.\n");
	for (i = 1; i <= 3; i++)
	{
		scanf("%d", &t);
		s[t] = 1;
	}
	t = 0;
	for (i = 1; i <= 10; i++)
		if (s[i] == 1)
		{
			t++;
			if (t == 2)
			{
				printf("The player gets %d.", i);
				return 0;
			}
		}
	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter scores of three judges.\n");
	scanf("%d %d %d", &a, &b, &c);
	printf("The player gets %d.", (a < b && b < c) ? b :
		(a < c && c < b) ? c :
		(b < a && a < c) ? a :
		(b < c && c < a) ? c :
		(c < a && a < b) ? a : b);
	return 0;
}