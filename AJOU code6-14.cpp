#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void reverse_it(int num)
{
    int i=1, c=0;
    while (1)
    {
        if (num >= i)
        {
            i *= 10;
            c++;
        }
        else
        {
            for (i = 1; i <= c; i++)
            {
                printf("%d", num % 10);
                num /= 10;
            }
            printf("\n");
            break;
        }
    }
}
int main()
{
    int n;
    while (1)
    {
        printf("Enter a natural number.\n");
        scanf("%d", &n);
        if(n>0)
            reverse_it(n);
        else
            return 0;
    }
    return 0;
}
