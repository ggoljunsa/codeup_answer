#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, n, cnt;
    scanf("%d %d %d %d", &a, &b,&c,&n);
    cnt = a;
    for(int i=2; i<=n; i++){
        cnt = cnt*b+c;
    }
    printf("%d", cnt);
    return 0;
}
