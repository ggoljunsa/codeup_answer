#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    long long a[55][55] = {};
    a[1][1] = 1;
    for(int i=2; i<=n; i++){
        for(long long j=1; j<=i; j++){
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    for(long long i=1; i<=n; i++){
        for(long long j=1; j<=i; j++){
            printf("%lld ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
