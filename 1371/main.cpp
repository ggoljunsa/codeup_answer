#include <bits/stdc++.h>
using namespace std;
int a[200][200] ={0};

void output(int n)
{
    int i, j;
    for(i=1; i<=2*n; i++){
        for(j=1; j<=2*n; j++){
            if(a[i][j]==0) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}

void sqr(int n)
{
    int x=0, y=0, i, j, p;
    for(x=n, y=1, p = n+1; x>=1; x--, y++, p++){
        a[y][x] = 1;
        a[y][p] = 1;
    }
    for(x=1, y=n+1, p = 2*n; y<=2*n; x++, y++, p--){
        a[y][x] = 1;
        a[y][p] = 1;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    sqr(n);
    output(n);
    return 0;
}
