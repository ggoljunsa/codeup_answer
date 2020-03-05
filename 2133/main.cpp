#include <bits/stdc++.h>
using namespace std;
int d[33];

int main()
{
    int n;
    scanf("%d", &n);
    d[0] = 1;
    d[1] = 0;
    d[2] = 3;
    if(n%2==0){
        for(int i=4; i<=n; i+=2){
            d[i] = d[i-2]*3;
            for(int j=4; i-j>=0; j+=2)
                d[i]+=d[i-j]*2;
        }
    }
    printf("%d", d[n]);
    return 0;
}
