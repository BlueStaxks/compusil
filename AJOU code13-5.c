#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
    char* title;
    char* author;
    struct {
        int year;
        int month;
    }date;
}bookType;

bookType* look_up(char* author, bookType* shelf, int size) {
    int i, j, l;
    for (i = 0; i < size; ++i)
    {
        l = (int)strlen(author);
        l > (int)strlen(shelf[i].author) ? l = (int)strlen(shelf[i].author) : 0;
        for (j = 0; j < l; ++j)
        {
            if (shelf[i].author[j] != author[j])
                break;
            if (j == l - 1)
                return &shelf[i];
        }
    }
    return NULL;
}

int main() {
    char name[20];
    bookType* srch;
    bookType shelf[3] = { {"번역의 탄생", "이희재",{2009,2}}, {"나의 문화유산 답사기", "유홍준", {2014,2}}, {"논증 글쓰기", "주우석", {2017,10}} };
    printf("저자 이름을 입력하세요.\n");
    gets(name);
    srch = look_up(name, shelf, 3);
    if (srch != NULL)
        printf("%s\n%s\n%d, %d\n", (*srch).title, (*srch).author, (*srch).date.year, (*srch).date.month);
    return 0;
}
