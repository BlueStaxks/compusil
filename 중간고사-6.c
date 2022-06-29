#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("*** Twin Marbles ****\n");
    int n;
    while (1)
    {
        printf("* 건물 층수 N (자연수): ");
        scanf("%d", &n);
        if (n == 0)
        {
            printf("Bye!!!");
            break;
        }
        printf("  최고층 찾는 최적의 횟수: %d\n", (int)ceil((sqrt((8 * n) + 1) - 1) / 2));
    }
    return 0;
}