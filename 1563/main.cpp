#include <stdio.h>

int n, m, x;

int max(int p, int q){ return p>=q?p:q;}

int min(int p, int q){ return p<q?p:q;}
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int mid(int n, int m, int x)
{
    int big = max(max(n, m), x);
    int sml = min(min(n, m), x);
    int y = n+m+x-big-sml;
    return y;
}

int main()
{
  scanf("%d%d%d", &n, &m, &x);
  printf("%d\n", mid(n, m, x));
}
