#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char* name;
    int age;
} personType;

void copy_structure(personType* to, const personType* from);
void print_structure(const personType* p);
int main()
{
    personType a, b = { "Park", 19 };
    print_structure(&b);
    copy_structure(&a, &b);
    print_structure(&a);
    return 0;
}
void copy_structure(personType* to, const personType* from)
{
    (*to).name = (char*)malloc(sizeof(char) * strlen((*from).name));
    int i = -1;
    while ((*from).name[++i] != '\0')
        (*to).name[i] = (*from).name[i];
    (*to).name[i] = '\0';
    (*to).age = (*from).age;
}
void print_structure(const personType* p)
{
    puts((*p).name);
    printf("%d\n", (*p).age);
}
