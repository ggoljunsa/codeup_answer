#include <bits/stdc++.h>
using namespace std;


int fact(int n)
{
    if(n==0) return 1;
    if(n==1) return 1;
    else return n*fact(n-1);
}

int main()
{
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d", fact(n)/(fact(r)*fact(n-r)));
    return 0;
}
