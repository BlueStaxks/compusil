#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int m[11] = {0};
int c[11] = {0};
int main()
{
    int i, max = -1, maxi = -1;
    printf("Enter the result of voting.\n");
    for (i = 1; i <= 10; ++i)
    {
        scanf("%d", &m[i]);
        c[m[i]]++;
        if (c[m[i]] > max)
        {
            max = c[m[i]];
            maxi = m[i];
        }
    }
    if (max > 5)
    {
        printf("Number %d is the winner.\n", maxi);
        return 0;
    }
    printf("No one won.\n");
    return 0;
}