#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char* name;
    int price;
}infoType;

typedef struct {
    infoType item;
    int seasonal_sales[4];
}itemType;

itemType* p;

int main()
{
    itemType r;
    p = &r;

    printf("Enter item name.\n");
    r.item.name = malloc(sizeof(char) * 100);
    scanf("%[^\n]s", (*p).item.name);

    printf("Enter unit price.\n");
    scanf("%d", &(*p).item.price);

    printf("Enter seasonal sales.\n");
    int i, sum = 0;
    for (i = 0; i < 4; ++i)
    {
        scanf("%d", &(*p).seasonal_sales[i]);
        sum += (*p).seasonal_sales[i];
    }

    printf("Yearly income of %s is %d.\n", (*p).item.name, sum * (*p).item.price);
    return 0;
}

