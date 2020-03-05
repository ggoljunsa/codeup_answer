#include <stdio.h>

int n, a, b, d[1010];
// 이 부분에 들어가야 될 코드를 작성하여 제출
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
