#include<bits/stdc++.h>
using namespace std;
int a[110][110] = {};
int n, m, i, j, cnt=1;

void sqr()
{
    int x, y;
    while(cnt<=n*m){
        a[y][x] =
    }
}

void prt()
{
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){

            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    sqr();
    prt();
    return 0;
}
