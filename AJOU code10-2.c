#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int r = 0;
int count(const int a[], const int comp, int last)
{
	if (comp == a[last])
		r++;
	if (last > 0)
		return count(a, comp, last - 1);
	return 0;
}
int main()
{
	int a[10000] = {0};
	int t, c = 0;
	printf("Enter input numbers.\n");
	while (1)
	{
		scanf("%d", &t);
		if (t == -1)
			break;
		a[c] = t;
		c++;
	}
	printf("Enter a number to search.\n");
	scanf("%d", &t);
	count(a, t, c);
	printf("%d appear %d times.", t, r);
	return 0;
}