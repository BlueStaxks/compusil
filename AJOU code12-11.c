#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
char *strstr_by_hash(const char *str1, const char *str2)
{
    int l=(int)strlen(str2);
    int i,j,s,k=0;
    for(i=l-1; i>=0; --i)
        k+=pow(10,i)*((int)(*(str2+l-1-i))-36);
    while(*(str1+l-1)!='\0')
    {
        s=0;
        for(j=l-1; j>=0; --j)
            s+=pow(10,j)*((int)(*(str1+l-1-j))-36);
        if(s==k)
            for(j=0; j<l; ++j)
            {
                if(*(str1+j)!=*(str2+j))
                    break;
                if(j==l-1)
                    return str1;
            }
        str1++;
    }
    return NULL;
}
int main()
{
    char s1[100]={""};
    char s2[100]={""};
    printf("Enter text.\n");
    gets(s1);
    printf("Enter search string.\n");
    gets(s2);
    char *p=strstr_by_hash(s1, s2);
    if(p==NULL)
    {
        printf("No such string.\n");
        return 0;
    }
    puts(p);
    return 0;
}
