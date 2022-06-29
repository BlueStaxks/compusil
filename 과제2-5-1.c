#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>          ///////이건 암호화 하는 코드
#include <locale.h>
int main() //최대 25글자가 저장됨
{
	wchar_t c[30] = { L"" };
	wchar_t r[30][5] = { L"" }; //이렇게 초기화를 했기 때문에 그냥 다 출력해도 문제가 없음
	_wsetlocale(LC_ALL, L"korean");
	printf("평문 : ");
	wscanf(L"%[^\n]ls", c);
	int i, j, d = -1, n = 0, s = wcslen(c);
	for (i = 0; i < s; ++i)
	{
		r[i][n] = c[i];
		if (!n || n == 4)
			d *= -1;
		n += d;
	}
	printf("\n암호문 : ");
	for (i = 0; i < 5; ++i)
		for (j = 0; j < s; ++j)
			wprintf(L"%lc", r[j][i]);
	return 0;
}