#include <stdio.h>

int n, a, b, d[1010];
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int maxi(int a, int b)
{
    int m = -2147483648;
    int loc;
    for(int i = a; i<=b; i++){
        if(d[i]>m){
            m = d[i];
            loc = i;
        }
    }
    return loc;
}

int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%d\n", maxi(a, b));
}
