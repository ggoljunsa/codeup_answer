#include <bits/stdc++.h>
using namespace std;

void prt(int n)
{
    if(n<1) return;
    printf("*");
    prt(n-1);
}

void tri(int n)
{
    if(n==1){
        printf("*\n");
        return;
    }
    else{
        tri(n-1);
    }
    prt(n);
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    tri(n);
}
