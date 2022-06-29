#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int dx1[] = { 1,0,-1,0 }; //방향 정하기
	int dy1[] = { 0,1,0,-1 };
	int dx2[] = { 0,1,0,-1 };
	int dy2[] = { 1,0,-1,0 };
	while (1)
	{
		printf("행렬 크기N [0<N<10]: ");
		int n;
		scanf("%d", &n);
		if (!n)
		{
			printf("Bye!!!");
			return 0;
		}
		int m1[10][10];
		int m2[10][10];
		int c, c1, c2, i, j;
		int x1, x2, y1, y2, t1, t2;
		c = c1 = c2 = x1 = x2 = y1 = y2 = i = 0;
		for (i = 0; i < n; ++i)
			for (j = 0; j < n; ++j)
				m1[j][i] = m2[j][i] = -1;  //처음엔 다 -1로 정리
		for (i = 0; i < n * n; ++i)
		{
			m1[x1][y1] = i;
			t1 = x1 + dx1[c];
			t2 = y1 + dy1[c];
			if (t1 < n && t1 >= 0 && t2 < n && t2 >= 0 && m1[t1][t2] == -1)
			{
				x1 += dx1[c];
				y1 += dy1[c];
			}
			m2[x2][y2] = i;
			t1 = x2 + dx2[c];
			t2 = y2 + dy2[c];
			if (t1 < n && t1 >= 0 && t2 < n && t2 >= 0 && m2[t1][t2] == -1)  //두 if문은 결과가 반드시 같음
			{
				x2 += dx2[c];
				y2 += dy2[c];
			}
			else
			{
				c = (c + 1) % 4; //0~3으로 로테이션
				if (i == n * n - 1)
					break; //안하면 무한루프
				i--;
			}
		}
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < n; ++j)
				printf("\t%d", m1[j][i]);
			printf("\t\t");
			for (j = 0; j < n; ++j)
				printf("\t%d", m2[j][i]);
			printf("\n");
		}
	}
}