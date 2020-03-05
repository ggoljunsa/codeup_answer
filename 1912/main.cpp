#include <bits/stdc++.h>
using namespace std;
int cnt = 1;

void fact(int n)
{
    if(n<1){
            printf("%d", cnt);
            return;}
    cnt*=n;
    fact(--n);
}

int main()
{
    int n;
    scanf("%d", &n);
    fact(n);
}
