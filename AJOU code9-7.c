#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int m[11] = {0};
int c[11] = {0};
int main()
{
    int i;
    printf("Enter the result of voting.\n");
    for (i = 1; i <= 10; ++i)
    {
        scanf("%d", &m[i]);
        if (i % 2 == 0 && m[i - 1] != m[i])
            m[i - 1] = m[i] = -1;
    }
    for (i = 1; i < 10; ++i)
        if (m[i] > 0)
            c[m[i]]++;
    for (i = 1; i <= 10; ++i)
        if (c[i] > 5)
        {
            printf("Number %d is the winner.\n", i);
            return 0;
        }
    printf("No one won.\n");
    return 0;
}