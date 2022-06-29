#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char word[20];
    char meaning[100];
} wordType;

void save_dictionary(FILE* fp, wordType dict[], int oldcnt, int newcnt) {
    int i;
    fseek(fp, 1, SEEK_END); //끝 다음부터 넣어야됨
    for (i = oldcnt; i < newcnt; i++) {
        if (fwrite((void*)&dict[i], sizeof(wordType), 1, fp) < 1) {
            fprintf(stderr, "Error writing a structure.\n");
            exit(1);
        }
    }
}

void read_dictionary(FILE* fp, wordType dict[], int *cptr) {
    *cptr = 0;
    rewind(fp);
    while (fread((void*)&dict[*cptr], sizeof(wordType), 1, fp))
        (*cptr)++;
    if (!feof(fp)) {
        fprintf(stderr, "ERROR");
        exit(1);
    }
}

char* search(char* w, wordType dict[], int count) {
    int i;
    for (i = 0; i < count; ++i) {
        if (!strcmp(w, dict[i].word))
            return dict[i].meaning;
    }
    return NULL;
}

void insert(char* w, char* m, wordType dict[], int* cptr) {
    strcpy(dict[*cptr].word, w);
    strcpy(dict[*cptr].meaning, m);
    (*cptr)++;
}

int main() {
    char word[20], * there;
    char meaning[100];
    int count, old_count;
    wordType mydict[5000];
    FILE* fp = fopen("forcode7.bin", "a+b");

    read_dictionary(fp, mydict, &count);
    old_count = count;

    while (1) {
        printf("Enter a word to search,\n");
        gets(word);
        if (strcmp(word, "quit") == 0)
        {
            save_dictionary(fp, mydict, old_count, count);
            break;
        }
        there = search(word, mydict, count);
        if (there != NULL)
            puts(there);
        else {
            puts("No such word in current dictionary. Enter the meaning.");
            gets(meaning); //문제에서 gets로 나와있음(13장8번)    띄어쓰기 안들어감
            insert(word, meaning, mydict, &count);
        }
    }
    fclose(fp);
    return 0;
}
