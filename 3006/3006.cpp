#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,num;

    double next, temp;
    double D1 = 1;
    double D05 = 0.5;
    scanf("%lld",&n);
    for(int i=0; i<n; i++){
        scanf("%lld", &num);
        next = D05*(D1 + (num/D1));
        while(1){
            temp = next;
            next = D05 * (next + (num/next));

            if(abs(temp - next) < 0.001)
                break;
        }
        printf("%d\n", int(next) * int(next));
    }
    return 0;
}