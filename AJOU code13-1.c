#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct {
    int addition; int subtraction; int multiplication;
} calcType;
calcType calc_all(int a, int b)
{
    calcType f;
    f.addition = a + b;
    f.subtraction = a - b;
    f.multiplication = a * b;
    return f;
}
int main()
{
    calcType p = calc_all(3, 4);  //입력받으라는 말이 없어서 그냥 아무거나 정했습니다.
    printf("%d, %d, %d\n", p.addition, p.subtraction, p.multiplication);
    return 0;
}
