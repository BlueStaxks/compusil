#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdarg.h>
double average(int count, ...)
{
    double sum = 0, num = 0;
    int i;
    va_list ap;
    va_start(ap, count);
    for(i=1; i<=count; i++)
    {
        sum += va_arg(ap, double);
        num++;
    }
    va_end(ap);
    return (sum / num);
}
int main()
{
    int n, a, b, c;
    int m(int n, ...);
    printf("Enter number of arguments. It must be 2 or 3.\n");
    scanf("%d", &n);
    if (n == 2)
    {
        scanf("%d %d", &a, &b);
        printf("Average value is %lf.", average(2, (double)a, (double)b));
    }
    if (n == 3)
    {
        scanf("%d %d %d", &a, &b, &c);
        printf("Average value is %lf.", average(3, (double)a, (double)b, (double)c));
    }
    return 0;
}
