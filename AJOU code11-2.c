#include <stdio.h>
int main()
{
	int num;
	int* p;
	int** q;

	//1
	p = &num;
	*p = 5;
	printf("%d ", *p);

	num = *p = 0;

	//2
	*p = 5;
	q = &p;
	printf("%d", **q);
	return 0;
}