#include <stdio.h>

int n, a, b, d[1010];
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
long long int subsetsum(int a, int b)
{
    long long int sum = 0;
    for(int i=a; i<=b; i++){
        sum+=d[i];
    }
    return sum;
}

int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%lld\n", subsetsum(a, b));
}
