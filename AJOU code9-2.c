#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int m[10000] = {0};
int main()
{
    int a, i = 1;
    scanf("%d", &a);
    while (a > 0)
    {
        m[i] = a % 2;
        a /= 2;
        i++;
    }
    while(--i)
        printf("%d", m[i]);
    return 0;
}