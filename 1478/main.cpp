#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[110][110] = {0};
    int m, n,i,j, spin, cnt = 1, x, y;
    scanf("%d %d", &n, &m);
        for(j=m-1; j>=-n; j--){
            x= j; y = 0;
            while(y<n&&x<m){

                if((x<m&&y<n)&&(x<m&&x>=0)){
                a[y][x] = cnt++;
                }
                x++; y++;
            }
        }

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
