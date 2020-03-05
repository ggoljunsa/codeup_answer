#include <bits/stdc++.h>
using namespace std;
int a[100010];

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    int s = 0, e = n, m;
    while(s<e)
    {
        m = (s+e)/2;
        if(a[m]<k) s = m+1;
        else e = m;
    }
    printf("%d", s+1);
    return 0;
}
