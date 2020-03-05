#include <bits/stdc++.h>
using namespace std;

void uback(int n)
{
    if(n<=1){
        printf("%d\n", 1);
        return;
    }
    if(n%2){
        uback(3*n+1);
    }
    else {
        uback(n/2);
    }
    printf("%d\n", n);
}

int main()
{
    int n;
    scanf("%d", &n);
    if(n==1) printf("1");
    else
        uback(n);
    return 0;
}
