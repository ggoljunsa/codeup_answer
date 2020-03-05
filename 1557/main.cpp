#include <stdio.h>

int n;

int f(int n)
{
    int cnt = 0;
    for(int i=1; i*i<=n; i++){
        if(n%i==0&&i*i!=n){
            cnt+=2;
        }
        if(i*i==n) cnt++;
    }
    return cnt;
}

// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);
  printf("%d\n", f(n));
}
