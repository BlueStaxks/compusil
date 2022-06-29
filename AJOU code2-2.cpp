#include <stdio.h>
int main()
{
	int a = 0xB1A2EC9;
	int i, p;
	for (i = 31; i >= 0; i--)
	{
		p = a >> i & 1;
		printf("%d", p);
	}
	return 0;
}