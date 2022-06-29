#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int big(int a, int b)
{
	return a > b ? a : b;
}
void shift(int* m, int n) //좌로 쉬프트     1 2 3 4 -> 2 3 4 1
{
	int i, t = m[0];
	for (i = 0; i < n - 1; ++i)
		m[i] = m[i + 1];
	m[n - 1] = t;
	return;
}
int main()
{
	while (1)
	{
		printf("# of Stickers: ");
		int n, i, j, c;
		scanf("%d", &n);
		if (!n)
		{
			printf("Bye!!!");
			return 0;
		}
		printf("Stickers: ");
		int m[10];
		for (i = 0; i < n; ++i)
		{
			m[i] = rand() % 100 + 1;
			printf("%d ", m[i]);
		}
		printf("\n*The BestSum = ");
		if (n <= 3) //3개 이하면 어차피 1개밖에 못 뽑으므로 최대값 선택
		{
			int ma = -1, mi;
			for (i = 0; i < n; ++i)
				if (ma < m[i])
				{
					ma = m[i];
					mi = i;
				}
			printf("%d\n*Sticker picked: %d[%d]\n", ma, ma, mi);
			continue;
		}
		int r[3][10] = { 0 };
		for (i = 0; i < 3; ++i)
		{
			r[i][0] = m[0];
			r[i][2] = m[0] + m[2];
			for (j = 3; j < n - 1; j++) //n-2까지만 가야하는 이유는 첫번째 스티커를 골랐기 때문에 마지막 스티커를 고르면 안되기 때문
				r[i][j] = big(r[i][j - 2], r[i][j - 3]) + m[j];  //n번째 인덱스에 올 값은 n-2, n-3번째 인덱스에서의 최댓값과 n번째 인덱스에 있는 값의 합이다.
			shift(m, n); //좌로 쉬프트를 하면 각각 1,2,3번째 스티커를 고르는 효과를 낸다.
		}
		int ma = -1, mi;
		for (i = 0; i < 3; ++i)  //어떤 쉬프트에서 최대값이 나오는지, 그 때 최대값은 뭔지, 그게 n-2에 있는지 n-3에 있는지 체크
			for (j = 2; j <= 3; ++j)
				if (ma < r[i][n - j])
				{
					ma = r[i][n - j];
					mi = i;
					c = j;
				}
		printf("%d\n*Sticker picked: ", ma);
		int tr[10] = { 0 };  //여기부턴 어떤 인덱스가 더해져서 최대가 된건지 트래킹 
		int k = tr[0] = n - c;
		for (i = 1; k > 1; ++i)
		{
			if (k == 2) //k는 보정되지 않은 상태라 절대 1이 아님
				k -= 2; //k가 2면 길은 하나임
			else if (k > 2 && r[mi][k - 2] > r[mi][k - 3]) //n-2에서 왔는지 n-3에서 왔는지 체크
				k -= 2;
			else if (k > 2 && r[mi][k - 2] <= r[mi][k - 3])//둘이 같다면 답이 여러개 있는 경우임
				k -= 3;
			tr[i] = k; //tr에는 쉬프트 된 상태의 인덱스가 들어감
		}
		for (i--; i >= 0; --i)
			printf("%d[%d] ", m[(tr[i] + mi - 3 + n) % n], (tr[i] + mi) % n); //원본 배열의 인덱스로 맞추기 위해 보정을 해줌
		printf("\n");
	}
}