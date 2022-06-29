#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    int i, j;
    printf("*** Diamond ****\n");
    do
    {
        back:
        printf("Enter N (1~9): ");
        scanf("%d", &n);
        if (n == 0)
        {
            printf("Bye!!\n");
            return 0;
        }
        for (i = 0; i < n; ++i)
        {
            for (j = 0; j <= (n - i - 1); ++j)
                putchar(' ');
            for (j = 0; j < i; ++j)
                putchar('*');
            putchar('|');
            for (j = 0; j < i; ++j)
                putchar('*');
            putchar('\n');
        }
        for (i = 0; i < n; ++i)
            putchar('-');
        putchar('|');
        for (i = 0; i < n; ++i)
            putchar('-');
        putchar('\n');
        for (i = n - 1; i >= 0; i--)
        {
            for (j = 0; j <= (n - i - 1); ++j)
                putchar(' ');
            for (j = 0; j < i; ++j)
                putchar('*');
            putchar('|');
            for (j = 0; j < i; ++j)
                putchar('*');
            putchar('\n');
        }
    } while (1);
}