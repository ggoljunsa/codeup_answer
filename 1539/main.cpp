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

// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}
