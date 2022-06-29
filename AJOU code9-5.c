#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char m[10000] = {0};
int main()
{
    char t;
    int i = 0, j;
    printf("Enter input sentence.\n");
    while (1)
    {
        i++;
        scanf("%c", &t);
        if (t == '\n')
            break;
        m[i] = t;
    }
    m[i] = 'e';
    for (j = 1; j <= i; ++j)
    {
        if (m[j] == 'e' && i != j)
        {
            printf("yes.");
            return 0;
        }
        if (m[j] == 'e' && i == j)
        {
            printf("no.");
            return 0;
        }
    }
}