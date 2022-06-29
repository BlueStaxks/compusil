#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
    char word[20];
    char meaning[100];
} wordType;

typedef struct {
    wordType dict[5000];
    int count;
} dictType;

char* search(char* w, dictType* d) {
    int i;
    for (i = 0; i < (*d).count; ++i) {
        if (!strcmp(w, (*d).dict[i].word))
            return (*d).dict[i].meaning;
    }
    return NULL;
}

void insert(char* w, char* m, dictType* d) {
    strcpy((*d).dict[(*d).count].word, w);
    strcpy((*d).dict[(*d).count].meaning, m);
    (*d).count++;
}

int main() {
    char word[20], * there;
    char meaning[100];
    dictType mydict;

    mydict.count = 0;
    while (1) {
        printf("Enter a word to search,\n");
        gets(word);
        if (strcmp(word, "quit") == 0)
            break;
        there = search(word, &mydict);
        if (there != NULL)
            puts(there);
        else {
            puts("No such word in current dictionary. Enter the meaning.");
            gets(meaning);
            insert(word, meaning, &mydict);
        }
    }
    return 0;
}
