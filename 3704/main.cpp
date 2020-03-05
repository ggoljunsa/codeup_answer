#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
int memo[100100];

int str(int n)
{
    if(n==3)
        memo[n] = 4;
    else if(n==2)
        memo[n]=2;
    else if(n==1)
        memo[n]= 1;
    else if(memo[n]==0)
        memo[n]=(str(n-1)+str(n-2)+str(n-3))%1000;
    return memo[n];
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", str(n));
}
