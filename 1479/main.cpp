#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[110][110] = {0};
    int m, n,cnt = 1, x, y;
    scanf("%d %d", &n, &m);

    for(int j=0; j>=m+n; j++){
            y= j;
            x = m-1;
            while(x>=0){
                a[y][x] = cnt++;
                y--; x--;
            }
        }

    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
