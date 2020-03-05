#include<bits/stdc++.h>
using namespace std;

int a[110][110] = {};

void prt(int n, int m)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n, m, i, j, cnt=1;
    scanf("%d %d", &n, &m);
    for(i=m-1; i>=0; i--){
        for(j=0; j<n; j++){
            a[j][i] = cnt++;
        }
    }

    prt(n, m);

    return 0;
}
