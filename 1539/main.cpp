#include <stdio.h>

int n;

long long f(int n)
{
    int cnt = 1;
    for(int i=2; i<=n; i++)
    {
        cnt*=i;
    }
    return cnt;
}

// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}
