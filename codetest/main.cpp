#include <stdio.h>

int n, k, d[1010];
int lower_bound(int k)
{
    int s = 1, mid, e = n+1;
    while(e>s)
    {
        mid = (s+e)/2;
        if(d[mid]<k) s = mid+1;
        else if(d[mid] == k) e = mid;
        else if(d[mid]>k) e = mid-1;//k>=d[mid];
    }
    return e;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);

  printf("%d\n", lower_bound(k));
}
