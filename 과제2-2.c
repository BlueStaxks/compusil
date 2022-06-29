#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int map[5][5];
int w[100];
int tc; //가짓수
void check(int c, int x, int y, int dx, int dy)
{
	int i;
	if (x == dx && y == dy)
	{
		for (i = 0; i < c; ++i)
			printf("\t%d", w[i]);
		printf("\n");
		tc++;
		return;
	}
	if (x < dx) //오른쪽으로 먼저 감
	{
		w[c] = map[x + 1][y];
		check(c + 1, x + 1, y, dx, dy);
	}
	if (y < dy)
	{
		w[c] = map[x][y + 1]; //w에 길 저장
		check(c + 1, x, y + 1, dx, dy);
	}
}
int main()
{
	while (1)
	{
		printf("Enter N, M and Mark (0<N,M<6): ");
		int n, m, a, i, j, x, y;
		scanf("%d %d %d", &n, &m, &a);
		if (!n)
		{
			printf("Bye!!!");
			return 0;
		}
		if (a > n * m || m > 5 || n > 5 || n < 0 || m <= 0 || a < 0)
		{
			printf("Error: Out of Range\n");
			continue;
		}
		for (i = 0; i < n; ++i)
			for (j = 0; j < m; ++j)
			{
				map[j][i] = m * i + j + 1;
				if (map[j][i] == a)
				{
					x = j; //Marking
					y = i;
				}
			}
		if (a)
		{
			w[0] = 1;
			int tc1, tc2;
			tc = 0;
			printf("Paths from 1 to %d:\n", a);
			check(1, 0, 0, x, y);
			tc1 = tc;
			tc = 0;
			w[0] = a;
			printf("Paths from %d to %d:\n", a, n * m);
			check(1, x, y, m - 1, n - 1);
			tc2 = tc;
			printf(" # of Paths stopping at %d: %d\n", a, tc1 * tc2); //곱하면 총 가짓수
		}
		else
		{
			tc = 0;
			w[0] = 1;
			printf("Paths from 1 to %d:\n", n * m);
			check(1, 0, 0, m - 1, n - 1);
			printf(" # of Paths stopping at none: %d\n", tc);
		}
	}
}