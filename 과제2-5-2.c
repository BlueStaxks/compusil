#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>          ///////이건 복호화 하는 코드
#include <locale.h>
int main() //최대 25글자가 저장됨
{
	wchar_t c[30] = { L"" };
	wchar_t r[30][5] = { L"" };
	_wsetlocale(LC_ALL, L"korean");
	printf("암호문 : ");
	wscanf(L"%[^\n]ls", c);
	int i, j, d = -1, n = 0, s = wcslen(c);
	for (i = 0; i < s; ++i) //넣을 곳 마킹
	{
		r[i][n] = 'H';
		if (!n || n == 4)
			d *= -1;
		n += d;
	}
	int cc = 0;
	for(i=0; i<5; ++i)
		for(j=0; j<s; ++j)
			if (r[j][i] == 'H')
			{
				r[j][i] = c[cc];
				cc++;
			}
	d = -1;
	n = 0;
	printf("\n평문 : ");
	for (i = 0; i < s; ++i)
	{
		wprintf(L"%lc", r[i][n]);
		if (!n || n == 4)
			d *= -1;
		n += d;
	}
	return 0;
}