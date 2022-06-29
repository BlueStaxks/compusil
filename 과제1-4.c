#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long int m[1000000] = { 0 }; //메모제이션
long long int check(int n)
{
    if (m[n])
        return m[n];
    return m[n] = check(n - 1) + check(n - 2); //피보나치 비슷
    //만약 n번째 칸에 도착해야 하는데 n-1번째칸에 도착했다고 치면 1칸을 올라가는 수밖에 없으므로 일단 n-1번째칸까지 가는 경우의 수가 있음
    //근데 n-2번째칸에 도착한 상황이라면 거기서 2칸을 올라가는 선택지밖에 없음(한 칸,한 칸 가면 n-1번째 칸으로 간 것과 같음) 그래서 n-2번째칸 까지 가는 경우의 수를 더해줘야됨
    //3칸을 뛸 순 없으니 결국 경우의 수는 이것이 전부이기 때문에 8번째 줄 코드가 나오는 것
}
int main()
{
    m[1] = 1;
    m[2] = 2;//초기 세팅
    int n;
    while (1)
    {
        printf("계단 수 (입력) : ");
        scanf("%d", &n);
        if (!n)
        {
            printf("Bye!!!\n");
            return 0;
        }
        printf("오르는 방법 가짓수 : %lld\n", check(n));
    }
}