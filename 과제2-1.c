#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int comp(int* a, int* b)
{
	if (*a < *b)	return -1;
	if (*a > *b)	return 1;
	return 0;
}
int main()
{
	char t;
	while (1)
	{
		printf("*** Play Game ***\n7 Cards given:\t");
		int m[7], i, c, s = 0, ts = 6; //ts는 배열의 총 크기 - 1을 의미
		for (i = 0; i < 7; ++i)
		{
			m[i] = (rand() % 13) + 1;
			printf("%d ", m[i]);
		}
		printf("\n7 Cards sorted:\t");
		qsort(m, 7, sizeof(int), comp);
		for (i = 0; i < 7; ++i)
			printf("%d ", m[i]);
		c = ts;
		while (c)
		{
			if (m[c] == m[c - 1])
			{
				if (m[c] == 1) //1이면 그냥 버려야됨
				{
					for (i = c - 1; i < ts - 1; ++i)
						m[i] = m[i + 2];
					ts -= 2;
					continue;
				}
				m[c - 1]--;
				for (i = c; i < ts; ++i)
					m[i] = m[i + 1];
				ts--;
				c = ts;
				qsort(m, ts + 1, sizeof(int), comp); //중간에 계속 소팅해줘야됨
				/*printf("\n");
				for (i = 0; i <= ts; ++i)
					printf("*%d ", m[i]);*/ //중간 과정
			}
			else
				c--;
		}
		printf("\n%d Cards left:\t", ts + 1);
		for (i = 0; i <= ts; ++i)
		{
			printf("%d ", m[i]);
			s += m[i];
		}
		printf("--> sum = %d\n", s);
		scanf("%c", &t);
		if(t!='\n')
			return 0;
	}
}