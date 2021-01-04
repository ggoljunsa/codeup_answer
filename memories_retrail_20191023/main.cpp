#include <bits/stdc++.h>
using namespace std;
int memo[210];

int fibo(int n)
{
    if(n<=2) return 1;
    if(memo[n]==0) memo[n]=(fibo(n-1)+fibo(n-2))%10009;
    return memo[n];
}


int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
}
