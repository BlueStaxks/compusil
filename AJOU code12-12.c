#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char** p = NULL, word[100];
    int i, row = 0;

    while (1) {
        printf("Enter a word.\n");
        gets(word);
        if (word[0] == 'q' && word[1] == 'u' && word[2] == 'i' && word[3] == 't' && word[4] == '\0')
            break;
        p = (char**)realloc(p, sizeof(char*) * (row + 1));
        if (p == NULL)
            exit(1);
        p[row] = (char*)malloc(sizeof(char) * strlen(word));
        if (p[row] == NULL)
            exit(1);
        strcpy(p[row], word);
        row++;
    }
    for (i = 0; i < row; ++i)
        puts(p[i]);
    printf("\n");
    for (i = 0; i < row - 1; ++i)
        free(p[i]); //이부분이 원래는 잘 작동해야 되는데 제 비주얼 스튜디오가 좀 이상해서 오류가 나네요..
    free(p);
    return 0;
}
