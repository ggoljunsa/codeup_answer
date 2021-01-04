#include <bits/stdc++.h>
using namespace std;

int h(int a,int b)
{
    int rul = 0;

    int r = b;
    int n = a+r-1;

    if(r<0) return 0;

    long long int c1 = 1, c2 = 1;
    for(int i=n; i>=n-r+1; i--)
        c1*=i;
    for(int i=r; i>=1; i--){
        c2*=i;
        //printf("%d", c2);
        //printf("\n");
    }

    //printf("%d %d\n", c1, c2);
    return c1/c2;
}

 int main()
{
    int n=0, k=0;
    scanf("%d %d", &n, &k);
    if(k==1){
        printf("%d", n);
        return 0;
    }

    int m = k+1;
    int o = n-k-(k-1);

    printf("%d", h(m, o));
    return 0;
}
