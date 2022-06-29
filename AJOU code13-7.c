#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char* name;
    char rating;
} siteType;

int main()
{
    int i; char temp[100];
    siteType* sites[3];
    for (i = 0; i < 3; i++) {
        sites[i] = malloc(sizeof(siteType));
        if (sites[i] == NULL)
            exit(1);
        printf("Enter name of tour site.\n");
        gets(temp);
        sites[i]->name = malloc(sizeof(char) * strlen(temp));
        if (sites[i]->name == NULL)
            exit(1);
        strcpy(sites[i]->name, temp);
        printf("Enter rating of the tour site.\n");
        scanf("%c", &sites[i]->rating);
        while (getchar() != '\n');
    }
    for (i = 0; i < 3; i++)
        printf("%s %c\n", sites[i]->name, sites[i]->rating);
    return 0;
}
