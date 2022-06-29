#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void getNumber(char s[]) {
	static int index = 0;
	static char n[][42] = {
		"1234567890123456789012345678901234567890",
		"9876543210987654321098765432109876543210",
		"1234567890",
		"9876543210",
		"12345678901234567890",
		"12345678901234567890",
		"12345678901234567890",
		"12345678901234567891"
	};
	if (index % 2) printf("* 둘째 수 (40자리 이하): ");
	else printf("* 첫째 수 (40자리 이하): ");
	if (index < 8) {
		strcpy(s, n[index++]);
		printf("%s\n", s);
	}
	else gets(s);
}
int main()
{
	while (1)
	{
		char s1[42];
		char s2[42];
		char t[42];
		getNumber(s1);
		getNumber(s2);
		if (strlen(s1) == 1 && s1[0] == '0' && strlen(s2) == 1 && s2[0] == '0')
		{
			printf("Bye!!!");
			return 0;
		}
		int i, f, l;
		int a[51] = { 0 };
		int b[51] = { 0 };
		int l1, l2;
		l1 = strlen(s1);
		l2 = strlen(s2);
		if (l1 > l2)
			l = l1;
		else
			l = l2;


		for (i = 1; i <= l; ++i)
			a[51 - i] = (l1 - i >= 0 ? (int)s1[l1 - i] - '0' : 0) + (l2 - i >= 0 ? (int)s2[l2 - i] - '0' : 0);
		for (i = 50; i > 0; --i)
		{
			if (a[i] > 9)
			{
				a[i - 1] += a[i] / 10;
				a[i] %= 10;
			}
		}
		i = 0;
		while (!a[i++]);
		i--;
		printf("  덧셈: ");
		for (; i <= 50; ++i)
			printf("%d", a[i]);
		printf("\n");


		if (!strcmp(s1, s2))
		{
			printf("  뺄셈: 0\n");
			continue;
		}
		i = f = 0;
		if (l1 < l2 || (l1 == l2 && strcmp(s1, s2) < 0))
		{
			for (i = 1; i <= l; ++i)
			{
				if (((int)s2[l2 - i] - '0') - (l1 - i >= 0 ? (int)s1[l1 - i] - '0' : 0) < 0)
				{
					s2[l2 - i - 1]--;
					s2[l2 - i] += 10;
				}
				b[51 - i] = ((int)s2[l2 - i] - '0') - (l1 - i >= 0 ? (int)s1[l1 - i] - '0' : 0);
			}
			i = 0;
			while (!b[i++]);
			i--;
			printf("  뺄셈: -");
			for (; i <= 50; ++i)
				printf("%d", b[i]);
			printf("\n");
		}
		else
		{
			for (i = 1; i <= l; ++i)
			{
				if (((int)s1[l1 - i] - '0') - (l2 - i >= 0 ? (int)s2[l2 - i] - '0' : 0) < 0)
				{
					s1[l1 - i - 1]--;
					s1[l1 - i] += 10;
				}
				b[51 - i] = ((int)s1[l1 - i] - '0') - (l2 - i >= 0 ? (int)s2[l2 - i] - '0' : 0);
			}
			i = 0;
			while (!b[i++]);
			i--;
			printf("  뺄셈: ");
			for (; i <= 50; ++i)
				printf("%d", b[i]);
			printf("\n");
		}
	}
}