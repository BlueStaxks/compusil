#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, i;
    while (1)
    {
        int c = 0;
        printf("Enter a trial Number (1~10000): ");
        scanf("%d", &n);
        if (!n)
        {
            printf("Bye!!!\n");
            return 0;
        }
        if (n >= 10000 || n < 0)
        {
            printf("** Trial number is out of range.\n");
            continue;
        }
        for (i = 0; i < n; ++i)
            if (pow((double)rand() / (double)RAND_MAX, 2) + pow((double)rand() / (double)RAND_MAX, 2) < 1) //원 방정식
                c++;
        printf("** hit/trial is %lf\n", (double)c / (double)n);
    }
}
