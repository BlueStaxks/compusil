#include <stdio.h>
double change_rate(double rate)
{
	rate *= 1.1;
	return rate;
}
int main()
{
	double rate = .2;
	printf("The modified rate is %lf.", change_rate(rate));
	return 0;
}