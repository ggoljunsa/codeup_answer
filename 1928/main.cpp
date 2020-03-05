#include <bits/stdc++.h>
using namespace std;

void uback(int n)
{
    if(n==1||(n/2==1&&n%2==0)){
        printf("1");
        return;
    }
    else if(n%2){
        printf("%d\n", 3*n+1);
        uback(3*n+1);
    }
    else{
        printf("%d\n", n/2);
        uback(n/2);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    if(n>1) printf("%d\n", n);
    uback(n);
    return 0;
}
