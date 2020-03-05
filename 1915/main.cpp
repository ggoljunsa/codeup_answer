#include <bits/stdc++.h>
using namespace std;
int d[210];

int fibo(int n)
{
    if(n<=2) return 1;
    if(!d[n]) d[n] = (fibo(n-1) + fibo(n-2))%10009;
    return d[n];
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
}
