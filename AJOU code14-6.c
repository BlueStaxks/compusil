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

void save_dictionary(FILE* fp, dictType* s) {
    int i;
    fp = fopen("forcode6.bin", "wb");
    i = fwrite((dictType*)s, sizeof(dictType), 1, fp);
    if (i < 1) {
        fprintf(stderr, "ERROR");
        exit(1);
    }
    fclose(fp);
}

void read_dictionary(FILE* fp, dictType* s) {
    int i;
    if ((fp = fopen("forcode6.bin", "rb")) == NULL)
        (*s).count = 0;
    else {
        i = fread((dictType*)s, sizeof(dictType), 1, fp);
        if (i < 1) {
            fprintf(stderr, "ERROR");
            exit(1);
        }
        fclose(fp);
    }
}

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
    char word[20], *there;
    char meaning[100];
    dictType mydict;
    FILE* fp = NULL;

    read_dictionary(fp, &mydict);

    while (1) {
        printf("Enter a word to search,\n");
        gets(word);
        if (strcmp(word, "quit") == 0)
        {
            save_dictionary(fp, &mydict);
            break;
        }
        there = search(word, &mydict);
        if (there != NULL)
            puts(there);
        else {
            puts("No such word in current dictionary. Enter the meaning.");
            gets(meaning); //문제에서 gets로 나와있음(13장8번)    띄어쓰기 안들어감
            insert(word, meaning, &mydict);
        }
    }
    return 0;
}
