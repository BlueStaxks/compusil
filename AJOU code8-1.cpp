#include <stdio.h>
void ten_times(int n)
{
	n *= 10;
}
int main()
{
	int n = 5;
	ten_times(n);
	printf("%d\n", n);
	return 0;
}

/*
* 
* ten_times 함수를 불러서 n을 10배 해 주는데, ten_times 의 n과 main의 n은 서로 다른 n이므로 값을 공유하지 않습니다.
* 그러므로 결론적으로 main에서는 5라는 값이 그대로 나올 것입니다.
* 
* 문제에서 수정하라고 한 대로 수정한 것/
* 
*	#include <stdio.h>
	int ten_times(int n)
	{
		n *= 10;
		return n;
	}
	int main()
	{
		int n = 5;
		printf("%d\n", ten_times(n));
		return 0;
	}

*/
