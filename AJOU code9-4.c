#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char m[10000] = {""};
int c[10000] = {0};
int main()
{
    int i = 0, r;
    char t;
    printf("Enter a sentence.\n");
    while (1)
    {
        i++;
        scanf("%c", &t);
        if (t == '\n')
            break;
        if (t == ' ')
            c[i] = 1;
        m[i] = t;
    }
    r = i - 1;
    for (i = 1; i <= r; ++i)
    {
        if (c[i] == 1)
        {
            printf(" ");
            while (1)
            {
                i++;
                if (c[i] == 1)
                    continue;
                else
                {
                    i--;
                    break;
                }
            }
        }
        else
            printf("%c", m[i]);
    }
    return 0;
}