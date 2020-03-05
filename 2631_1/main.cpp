#include <bits/stdc++.h>
using namespace std;
int a[100100],  b[100100];
int p, j, cnt = 0, n, k;

int main()
{
    scanf("%d %d", &n, &k);
    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
        b[i] = b[i-1] + a[i];
    }
    p=0;
    for(int j=1; j<=n; j++){
        if(b[j]-b[p]==k)
        {
            p++;
            cnt++;
        }
        else if(b[j]-b[p]>k)
        {
            j--;
            p++;
        }
    }
    printf("%d", cnt);
    return 0;
}
