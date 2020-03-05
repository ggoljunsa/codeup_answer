#include <bits/stdc++.h>
using namespace std;
int n;
int a[310];
int memo[310];

int max(int a, int b){return a>b ? a: b;}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) scanf("%d", &a[i]);
    memo[1] = a[1];
    memo[2] = max(a[1]+ a[2], a[2]);
    memo[3] = max(a[1] + a[3], a[2]+a[3]);
    for(int i=4; i<=n; i++){
        memo[i]=max(a[i]+memo[i-2],a[i]+a[i-1]+memo[i-3]);
    }
    printf("%d", memo[n]);
    return 0;
}
