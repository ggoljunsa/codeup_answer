#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c, i, j;
    int a[110];
    scanf("%d %d", &n, &c);
    for(int i=1; i<=n; i++)
        scanf("%d", &a[i]);
    sort(a+1, a+n+1);

    int cnt = 1;

    for(i=1; i<=n/c+1; i++){
        for(j=1; j<=c; j++){
            if(cnt>n) return 0;
                else printf("%d ", a[cnt++]);
        }
        printf("\n");
    }

    return 0;
}
