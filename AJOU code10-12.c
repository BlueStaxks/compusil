#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int m[1000] = {0};
void insertion_sort(int length)
{
	int r[1000] = { 0 };
	int i, j, l;
	r[0] = m[0];
	for (i = 1; i < length; ++i)
		for (j = i - 1; j >= 0; --j)
		{
			if (r[j] <= m[i])
			{
				for (l = i; l > j; --l)
					r[l] = r[l - 1];
				r[j + 1] = m[i];
				break;
			}
			if (!j)
			{
				for (l = i; l > 0; --l)
					r[l] = r[l - 1];
				r[0] = m[i];
				break;
			}
		}
	for (int i1 = 0; i1 < length; ++i1)
	{
		m[i1] = r[i1];
		printf("%d ", m[i1]);
	}
	printf("\n");
}
int has_element(int value, int set[], const int* cp)
{
	int i;
	for (i = 0; i < *cp; ++i)
		if (set[i] == value)
			return 1;
	return 0;
}
void add_element(int value, int set[], int* cp)
{
	int i;
	if (has_element(value, m, cp))
	{
		for (i = 0; i < *cp; ++i)
			printf("%d ", m[i]);
		printf("\n");
	}
	else
	{
		m[*cp] = value;
		int t = *cp;
		*cp=++t;
		insertion_sort(*cp);
	}
}
void delete_element(int value, int set[], int* cp)
{
	int i, j;
	if (has_element(value, m, cp))
	{
		int t = *cp;
		*cp = --t;
		for (i = 0; i < *cp + 1; ++i)
			if (m[i] == value)
			{
				for (j = i; j < *cp; ++j)
					m[j] = m[j + 1];
				break;
			}
		for (i = 0; i < *cp; ++i)
			printf("%d ", m[i]);
		printf("\n");
	}
	else
	{
		for (i = 0; i < *cp; ++i)
			printf("%d ", m[i]);
		printf("\n");
	}
}
int main()
{
	int a, count = 0;
	int* cp = &count;
	char t;
	while (1)
	{
		printf("Enter commands: a 5 adds 5 to the set, d 5 deletes 5 from the set.\n");
		scanf("%c", &t);
		if (t == 'q')	return 0;
		scanf("%d", &a);
		if (t == 'a')	add_element(a, m, cp);
		if (t == 'd')	delete_element(a, m, cp);
		while ((t = getchar()) != '\n');
	}
}