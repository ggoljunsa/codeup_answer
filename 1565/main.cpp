#include <stdio.h>

int gcd(int p, int q){ if(p==0) return q; return gcd(q%p, p);}
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
long long int lcd(int a, int b)
{
    long long g = gcd(a, b);
    return a/g*b;
}

int main()
{
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%lld\n", lcd(a, b));
}
