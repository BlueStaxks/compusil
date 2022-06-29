#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char ch, * str, * ptr;
    int i, j;
    int* arr;
    printf("Enter one or more integers.\n");
    str = NULL;
    for (i = 0; (ch = getchar()) != '\n'; i++) {
        str = (char*)realloc(str, sizeof(char) * (i + 1));
        *(str + i) = ch;
    }
    str[i] = ' ';
    str[i + 1] = '\n';
    ptr = strtok(str, " ");
    while (ptr != NULL)
        ptr = strtok(NULL, " ");

    ptr = str; //ptr이 끝까지 갔다가 다시 돌아오는 것이다. ptr은 숫자 짜르기용
    arr = NULL;
    for (i = 0; *ptr != '\n'; i++) {
        arr = (int*)realloc(arr, sizeof(int) * (i + 1));
        *(arr + i) = atoi(ptr);
        while (*ptr != '\0')
            ptr++;
        ptr++;
    }
    for (j = 0; j < i; j++)
        printf("%d ", arr[j]);
    printf("\n");
    return 0;
}