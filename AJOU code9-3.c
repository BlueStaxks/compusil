#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int check()
{
    char m[10000] = {0};
    char t;
    int i = 0, r;
    while (1)
    {
        i++;
        scanf("%c", &t);
        if (t == '\n')
            break;
        m[i] = t;
    }
    r = i - 1;
    if (r == 1 && m[1] == 'Q')
        return 0;
    for (i = 1; i <= r / 2; ++i)
    {
        if (m[i] != m[r + 1 - i])
        {
            printf("No, It is NOT a palindrome.\n");
            return 1;
        }
    }
    printf("Yes, It is a palindrome.\n");
    return 1;
}
int main()
{
    while (1)
    {
        printf("Enter a sentence.\n");
        if (!check())
            return 0;
    }
}