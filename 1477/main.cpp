#include <bits/stdc++.h>
using namespace std;
int a[110][110];
int m, n;

void output()
{
    int i, j;
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            printf("%d ", a[n][m]);
        }
        printf("\n");
    }
}

void sqr()
{
    int x = 1, y = 1, i, j;
    int cnt = 1;
    for(i=0; i<(n*m); i++){
        for(j=0; j<n; j++){
            int k = i-j;
        }
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    sqr();
    output();
}
