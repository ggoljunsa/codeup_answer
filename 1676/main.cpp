#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a[2010]={};
    int rnk[2010] = {};
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
        rnk[i] = 1;
        for(int j=1; j<i; j++){
            if(a[j]>a[i]) rnk[i]++;
            else if(a[j]<a[i]) rnk[j]++;
        }
    }
    for(int i=1; i<=n; i++)
        printf("%d\n", rnk[i]);
    return 0;
}
