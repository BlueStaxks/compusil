#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    printf("*** Look & Say Sequence ***\n");
    while (1)
    {
        printf("* Enter Base Number [1-9] & Depth [1-9]: ");
        int a, b, i, j, p;
        int m1[1000] = { 0 };
        int m2[1000] = { 0 };
        scanf("%d %d", &a, &b);
        if (!a || !b)
        {
            printf("Bye!!!\n");
            return 0;
        }
        m1[0] = a;
        printf("Level\t0:  %d\n", a);
        for (i = 1; i <= b; ++i)
        {
            p = j = 0;
            printf("Level\t%d:  ", i);
            while (m1[j] > 0) //출력 값에 0이 들어갈 일이 없으니
            {
                int c = 1;
                while (m1[j] == m1[j + 1])
                {
                    j++;
                    c++;
                }
                m2[p++] = m1[j++]; //배열을 출력의 반대 순으로 넣고, 나중에 반대로 뽑으면 된다.
                m2[p++] = c;
            }
            for (j = 0; j < 1000; ++j) //수열의 길이는 줄어들 수 없으므로 중간에 초기화를 할 필요는 없다.
                m1[j] = m2[j];
            for (--p; p >= 0; --p)
                printf("%d ", m1[p]);
            printf("\n");
        }
    }
}
