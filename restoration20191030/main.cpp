#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    long long res = 1;
    long long mul = n;
    while(k>0)
    {
        if(k%2==1) res=(res%1000000007)*(mul%1000000007)%1000000007;
        mul%=1000000007;
        mul=mul*mul;
        k/=2;
    }
    printf("%d", res);
    return 0;
}
