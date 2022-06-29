#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void bi(int a)
{
	int m[8] = {0};
	int i;
	for (i = 0; i < 8; ++i)
	{
		m[i] = a % 2;
		a /= 2;
	}
	for (i = 7; i >= 0; --i)
		printf("%d", m[i]);
}
int main()
{
	int a, b, c, d;
	printf("*** DDN IP ****\n");
	do
	{
		printf("Enter a DDN (0.0.0.0 for exit) : ");
		scanf("%d.%d.%d.%d",&a,&b,&c,&d);
		if (a == 0 && b == 0 && c == 0 && d == 0)
		{
			printf("Bye!!!");
			return 0;
		}
		bi(a);
		putchar('.');
		bi(b);
		putchar('.');
		bi(c);
		putchar('.');
		bi(d);
		putchar('\n');
	} while (1);
}