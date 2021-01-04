#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    long long int c = 1, d = 1, e =1;
    scanf("%lld %lld", &a, &b);
    if(a-b<b) b = a-b;

    for(int i=a; i>=a-b+1; i--)
        c*=i;
    for(int i=b; i>=1; i--)
        d*=i;
    printf("%lld", c/d);

    return 0;
}
