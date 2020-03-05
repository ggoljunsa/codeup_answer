#include <stdio.h>

int n, k, d[1010];
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����

int upper_bound(int k)
{
    int start, end, mid;
    start = n+1;
    end = 1;
    while(end<start)
    {
        mid = (start+end)/2;
        if(d[mid]<=k) end = mid+1;
        else start = mid;
    }
    return end;
}

int main()
{
   scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);

  printf("%d\n", upper_bound(k));
}
