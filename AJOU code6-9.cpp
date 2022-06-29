#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i, s = 0;
	printf("Enter the number.\n");
	scanf("%d", &n);
	for (i = 1; i <= 4; i++)
	{
		s += n % 10;
		n /= 10;
	}
	printf("The sum is %d.", s);
	return 0;
}

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, s = 0;
	printf("Enter the number.\n");
	scanf("%d", &n);
	s+=n%10;
	n/=10;
	s+=n%10;
	n/=10;
	s+=n%10;
	n/=10;
	s+=n%10;
	printf("The sum is %d", s);
	return 0;
}
*/