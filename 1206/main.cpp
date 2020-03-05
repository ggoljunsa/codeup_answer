#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n[2];
    scanf("%d %d", &n[0], &n[1]);
    sort(n, n+2);
    if(n[1]%n[0]==0) printf("%d*%d=%d", n[0], n[1]/n[0], n[1]);
    else printf("none");
    return 0;
}
