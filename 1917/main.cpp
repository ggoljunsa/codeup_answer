#include <bits/stdc++.h>
using namespace std;
long long int cnt = 1;

long long int f(int n, int k)
{
    if(k==1) return n;
    else if(k%2==1){
        return f(n, k/2)*f(n, k/2)*n;
    }
    else return f(n, k/2)*f(n, k/2);
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    if(k==0) printf("1");
    else
    printf("%lld", f(n, k));
    return 0;
}
