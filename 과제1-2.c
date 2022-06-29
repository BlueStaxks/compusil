#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char m[100000];
int c = 1;  //번호 세는 용
void swap(char* a, char* b) {
    char tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
void check(int a, int b)
{
    int i;
    if (a == b)
    {
        printf("%d\t", c);
        for (i = 0; i < b; ++i)
            printf("%c", m[i]);
        c++;
        printf("\n");
        return;
    }
    for (i = a; i < b; ++i)
    {
        swap(&m[i], &m[a]);
        check(a + 1, b);
        swap(&m[i], &m[a]);
    }
}
int main()
{
    int a, i;
    while (1)
    {
        printf("문자 수 (5 이하): "); //사실 5 넘어도 됨
        scanf("%d", &a);
        if (!a)
        {
            printf("Bye!!!\n");
            return 0;
        }
        for (i = 0; i < a; ++i)
            m[i] = (char)('A' + i);
        check(0, a);
        c = 1;
    }
}
