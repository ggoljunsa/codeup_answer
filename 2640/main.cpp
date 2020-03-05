#include <bits/stdc++.h>
using namespace std;
int memo[1000001][1000001];

int f(int n, int k)
{
    if(memo[n][k]!=0) return memo[n][k];
    if(k==1) memo[n][k] = n;
    else if(k%2==1){
        memo[n][k] = (f(n, k/2)*f(n, k/2)*f(n, 1))%1000000007;
    }
    else{
        memo[n][k] = (f(n, k/2)*f(n, k/2))%1000000007;
    }
    return memo[n][k];
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    if(k==0) printf("1");
    else
    printf("%d", f(n, k));
    return 0;
}
