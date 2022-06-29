#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char c[10] = "";
int main()
{
    int i = 0, s;
    char t;
    printf("Enter password(maximum 8 characters).\n");
    while (1)
    {
        i++;
        scanf("%c", &t);
        if (t == '\n')
            break;
        c[i] = t;
    }
    s = i - 1;
    printf("Your password is ");
    for (i = 1; i <= s; ++i)
        printf("%c", c[i]);
    printf(".");
    return 0;
}