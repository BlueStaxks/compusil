#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* my_strcpy(char* dest, const char* src, int index)
{
    if (*(src + index) == '\0')
    {
        *(dest + index) = *(src + index);
        return dest;
    }
    *(dest + index) = *(src + index);
    my_strcpy(dest, src, index + 1);
    return dest;
}
int main()
{
    char s[100];
    char d[100];
    gets(s);
    my_strcpy(d, s, 0);
    puts(d);
    return 0;
}