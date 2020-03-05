#include<bits/stdc++.h>
using namespace std;

int a[110][110] = {};

void prt(int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n, i, j, cnt=1;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            a[j][i] = cnt++;
        }
    }

    prt(n);

    return 0;
}
