#include <stdio.h>
int main()
{
	int i;
	for (i = 0; i <= 127; i++)
	{
		printf("%d\t", i);
		printf("%c\n", i);
	}
	return 0;
}