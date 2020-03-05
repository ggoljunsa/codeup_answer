#include <stdio.h>
long long memo[110];

long long f(long long n)
{
    if(n<=2) return 1;
    if(!memo[n]) memo[n] = f(n-1) +f(n-2);
    return memo[n];
}

int main()
{
    long long n;
    scanf("%lld", &n);
    printf("%lld", f(n));
    return 0;
}
