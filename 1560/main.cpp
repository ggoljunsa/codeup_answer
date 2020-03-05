#include <stdio.h>

long long int n, m;
// 이 부분에 들어가야 될 코드를 작성하여 제출
long long int f(long long int n, long long int m)
{
    return n>m ? n-m : m-n;
}

int main()
{
  scanf("%lld%lld", &n, &m);
  printf("%lld\n", f(n, m));
}
