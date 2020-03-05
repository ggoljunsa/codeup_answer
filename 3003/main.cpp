#include <bits/stdc++.h>
using namespace std;
int d[1000100];
int temp;
int n, m;
int loc = 0;

int lower_bound(int k)
{
    int s = 1, mid, e = n;
    while(s<=e)
    {
        mid = (s+e)/2;
        if(d[mid]==k){
            return mid;
        }
        else if(d[mid]>k) e=mid-1;
        else if(d[mid<k]) s =mid+1;

    }
    return 0;
}

int main()
{
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &d[i]);
    }
    scanf("%d", &m);
    while(m--){
        scanf("%d", &temp);
        loc =lower_bound(temp);
        if(loc)
        {
            printf("%d ", loc);
        }
        else printf("-1 ");
    }
}
