#include <bits/stdc++.h>
using namespace std;
char a[200][200];

void op(int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
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
void sqr(int n, int k)
{
    int x=0, y=0, i, j;
    /*for(i=0; i<n; i++, y++){
        if(y>k){
            y= y-k;
        }
        for(j=0, x=0; j<n; j++, x+=k){
            a[y+x][i] = '*';
        }
    }*/
    for(i=-1; i<=2*n; i+=k){
        x=i, y=0;
        while(1){
            if(x<0|| y>n) break;
            a[y][x] = '*';
            y++, x--;
        }
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
    int n, k;
    scanf("%d %d", &n, &k);
    sqr(n, k);
    op(n);
    return 0;
}
