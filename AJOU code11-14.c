#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* a, * b, * m;
	int* a1, * b1, * m1;
	int s1, s2, i;

	printf("Enter number of elements in array a.\n");
	scanf("%d", &s1);
	a = (int*)malloc(sizeof(int) * s1);
	printf("Enter data to be inserted in array a. It must be in sorted order.\n");
	for (i = 0; i < s1; ++i)
		scanf("%d", a + i);

	printf("Enter number of elements in array b.\n");
	scanf("%d", &s2);
	b = (int*)malloc(sizeof(int) * s2);
	printf("Enter data to be inserted in array b. It must be in sorted order.\n");
	for (i = 0; i < s2; ++i)
		scanf("%d", b + i);

	m = (int*)malloc(sizeof(int) * (s1 + s2));
	a1 = a;
	b1 = b;
	m1 = m;

	while (1)
	{
		if (a >= s1 + a1)
		{
			for (; b <= b1 + s2; ++b)
			{
				*m = *b;
				m++;
			}
			break;
		}
		if (b >= s2 + b1)
		{
			for (; a <= a1 + s1; ++a)
			{
				*m = *a;
				m++;
			}
			break;
		}
		if (*a > *b)
		{
			*m = *b;
			m++;
			b++;
		}
		else
		{
			*m = *a;
			m++;
			a++;
		}
	}

	for (i = 0; i < s1 + s2; ++i)
		printf("%d ", *(m1 + i));
	free(a1);
	free(b1);
	free(m1);
	return 0;
}