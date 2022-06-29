#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>
typedef union {//32비트로 묶기 위해 union 사용
    float f;
    struct
    {
        unsigned int mantissa : 23;  //비트수를 제한한다. (각각 필요한 만큼만) (포인터 사용 X)
        unsigned int exponent : 8;   //그리고 MSB가 음수양수를 표현하는데 쓰이면 안되므로 unsigned를 한다.
        unsigned int sign : 1;       //또한 LSB부터 순서대로 공간을 먹으므로 mantissa부터 차례대로 써야함

    } ieee; //어차피 C에서는 ieee754로 float를 저장하는데 굳이 직접 다시 만들 필요는 없져
} mf;
void printBinary(int n, int i)  //2진수로 나타냈을 때 길이가 i인 10진수를 받아 2진수로 출력 
{
    int k, c = 0;
    for (k = i - 1; k >= 0; k--)
    {
        if ((n >> k) & 1)
            printf("1");
        else
            printf("0");
        c++;
        if (!(c % 4))
            printf(" ");
    }
}
void printIEEE(mf v)
{
    int c = 0;
    c += v.ieee.sign << 31;  //c를 전체 2진수로 만드는 과정
    c += v.ieee.exponent << 23;
    c += v.ieee.mantissa;
    printBinary(c, 32);
    printf("\n\tSign\t\t\t= %d\n", v.ieee.sign);
    printf("\tExponent\t\t= ");
    printBinary(v.ieee.exponent, 8);
    printf("\n\tMantissa\t\t= ");
    printBinary(v.ieee.mantissa, 23);
    printf("\n");
}
int main()
{
    while (1)
    {
        mf v;
        printf("Enter a float-type real number (0 to quit): ");
        scanf("%f", &v.f);
        printf("** Binary representation = ");
        printIEEE(v);
        if (v.f == 0)
        {
            printf("MAX of float number = %f\n", FLT_MAX);
            v.f = FLT_MAX;
            printf("** Binary representation = ");
            printIEEE(v);
            printf("Bye!!!\n");
            return 0;
        }
    }
}
