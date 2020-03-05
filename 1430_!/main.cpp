#include <bits/stdc++.h>
using namespace std;
int n, m, i, j;
int fn, fm;
int ar[1000010];

int main()
{
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &fn);
        ar[fn]++;
    }
    scanf("%d", &m);
    for(i=0; i<m; j++){
        scanf("%d", &fm);
        if(a[fm]){
            printf("1 ");
        }
        else printf("0 ");
    }
    return 0;
}
