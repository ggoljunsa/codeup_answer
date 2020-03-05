#include <bits/stdc++.h>
using namespace std;
char a[110][110];

void op(int n)
{
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            if(a[i][j]== '\0'){
                printf(" ");
            }
            else{
                printf("%c", a[i][j]);
            }
        }
        printf("\n");
    }
}
void sqr(int n)
{
    int x=0, y=0, i, j;
    for(i=0; i<n; i++, x++, y++){
        a[y][x] = '*';
    }
    for(i=n-1, x=n-1, y=0; i>=0; i--, x--, y++){
        a[y][x] = '*';
    }
    for(i=0; i<n; i++){
        a[i][0] = '*';
        a[i][n-1] = '*';
        a[0][i] = '*';
        a[n-1][i] = '*';
    }
}


int main()
{
    int n;
    scanf("%d", &n);
    sqr(n);
    op(n);
    return 0;
}
