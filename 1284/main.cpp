#include <bits/stdc++.h>
using namespace std;

int pm;
bool flag = false;

bool ip(int n)
{
    int i;
    for(i=2; i*i<=n; i++){
        if(n%i==0) return true;
    }
    return false;
}

void prime(int n)
{
    int i=2;
    for(i=2; i*i<=n; i++){
        if(n%i==0){
            if(ip(n/i)){
                pm = i;
                flag = true;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    if(ip)

    return 0;
}
