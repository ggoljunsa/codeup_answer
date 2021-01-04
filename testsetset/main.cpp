#include <bits/stdc++.h>
using namespace std;
int d[1000100];
    int n, s;
int ls(int n, int s)
{
    int end = n, start = 1, mid;
    while(start<=end)
    {
        mid= (start+ end)/2;
        if(d[mid]>s) end = mid-1;
        else if(d[mid]==s){
            return mid;
        }
        else if(d[mid]<s) start = mid+1;
    }
    return -1;
}

int main()
{
    scanf("%d %d", &n, &s);
    for(int i=1; i<=n; i++){
        scanf("%d", &d[i]);
    }
    printf("%d", ls(n, s));
}

