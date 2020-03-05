#include <bits/stdc++.h>
using namespace std;
int n, m, i;
int fn, fm;
int ar[10000001];

int main()
{
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &fn);
        ar[fn] = 1;
    }
    scanf("%d", &m);
    for(i=0; i<m; i++){
        scanf("%d", &fm);
        printf("%d ", ar[fm]);
    }
    return 0;
}
