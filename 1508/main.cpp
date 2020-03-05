#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    int a[30][30];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i][1]);
    for(i=1; i<=n; i++)
    {
        for(j=2; j<=i; j++)
        {
            a[i][j] = a[i][j-1]-a[i-1][j-1];
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
