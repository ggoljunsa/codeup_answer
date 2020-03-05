#include <bits/stdc++.h>
using namespace std;
long long int d[210][210];

int main()
{
    long long int mod = 1000000000;
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0; i<=n; i++){
        d[1][i] = 1;
    }
    for(int i=2; i<=k; i++){
        for(int j=0; j<=n; j++){
            for(int h=0; h<=j; h++){
                d[i][j] += d[i-1][h];
                d[i][j]%=mod;
            }
        }
    }
    printf("%lld\n", d[k][n]);
}
