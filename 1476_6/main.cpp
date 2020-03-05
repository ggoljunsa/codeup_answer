#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[110][110] = {0};
    int m, n,i,j, spin, cnt = 1;
    scanf("%d %d", &n, &m);
    for(spin=0; spin<m+n-1;spin++){
        for(i=0; i<n; i++){
            j=spin-i;
             if(j>=0&&j<m){
                a[i][j] = cnt++;
             }
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
