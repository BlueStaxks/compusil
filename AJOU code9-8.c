#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int c1[128] = {0};
int c2[128] = {0};
int main()
{
    int i;
    char t;
    printf("Enter the first string\n");
    while (1)
    {
        scanf("%c", &t);
        if (t == '\n')
            break;
        c1[(int)t]++;
    }
    printf("Enter the second string\n");
    while (1)
    {
        scanf("%c", &t);
        if (t == '\n')
            break;
        c2[(int)t]++;
    }
    for (i = 0; i < 128; ++i)
        if (c1[i] != c2[i] && i != 32)
        {
            printf("No, they are not anagrams.\n");
            return 0;
        }
    printf("Yes, they are anagrams.\n");
    return 0;
}