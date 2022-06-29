#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int m[5] = {0};
    int i, max, min;
    printf("Enter five integers separated by blanks.\n");
    for (i = 0; i < 5; ++i)
    {
        scanf("%d", &m[i]);
        if (i == 0)
            max = min = m[0];
        max < m[i] ? max = m[i] : 0;
        min > m[i] ? min = m[i] : 0;
    }
    printf("min is %d. max is %d.", min, max);
    return 0;
}