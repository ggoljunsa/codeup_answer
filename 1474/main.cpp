#include<bits/stdc++.h>
using namespace std;
int a[110][110] = {};

void prt(int n, int m)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int j,i,n,m, cnt =1;
    scanf("%d %d", &n, &m);
    for(j=m-1; j>=0; j--){
        if((j-m)%2==0)
            for(i=n-1; i>=0; i--) a[i][j] = cnt++;
        else
            for(i=0; i<n; i++) a[i][j] = cnt++;
    }
    prt(n, m);
    return 0;
}
