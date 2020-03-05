#include <bits/stdc++.h>
using namespace std;

bool comp1(const int &a, const int &b){
    return a>b;
}

int main()
{
    int n;
    int a[110];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    sort(a, a+n, comp1);
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
    return 0;
}
