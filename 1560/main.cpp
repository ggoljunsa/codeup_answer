#include <stdio.h>

long long int n, m;
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
long long int f(long long int n, long long int m)
{
    return n>m ? n-m : m-n;
}

int main()
{
  scanf("%lld%lld", &n, &m);
  printf("%lld\n", f(n, m));
}
