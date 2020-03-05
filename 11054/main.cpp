#include <bits/stdc++.h>
using namespace std;
int a[1010];
int d[1010][3];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        scanf("%d", &a[i]);
    d[1][0] = 1, d[1][1] = 1, d[1][2] = 1;
    d[1][n] = 1;
    for(int i=2; i<=n; i++){
            d[i][1] = 1;
        for(int j=1; j<i; j++){
            if(a[j]<a[i]){
                if(d[j][1]+1>d[i][1])
                    d[i][1]++;
            }
        }
    }
    for(int i=n; i>=1; i--){
            d[i][2] = 1;
        for(int j=i+1; j<=n; j++){
            if(a[j]<a[i]){
                if(d[i][2]>d[j][2]+1)
                    d[i][2]++;
            }
        }
    }

    for(int i=1; i<=n; i++){
        d[i][0] = d[i][1]+d[i][2];
    }

    int max = -1;
    for(int i=1; i<=n; i++)
        if(max<d[i][0]) max = d[i][0];
    printf("%d", max+1);
    return 0;
}
