#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[110][110] = {0};
    int m, n, x, y, i, j, cnt = 1;
    scanf("%d %d", &n, &m);
    for(i=2; i<=m; i++){
        for(j=1; j<=i-1; j++){
            a[i-j][j] = cnt++;
        }
    }

    for(i=2+n; i<=m+n; i++){
        for(x=2, y=n;  y>=1, x<=m; x++, y--){
            a[y][x] = cnt++;
        }
    }

    for(i=0; i<=n+1; i++){
        for(j=0; j<=m+1 ;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
