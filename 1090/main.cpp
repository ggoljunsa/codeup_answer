#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, r, n;
    scanf("%lld %lld %lld", &a, &r, &n);
    if(n==0){
        printf("%lld", a);
    }
    else{
        printf("%lld", a*(int)pow(r, n-1));
    }
    return 0;
}
