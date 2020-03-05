#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    scanf("%d", &n);
    for(i=1; i<n; i++){
        if(i<7&&n-i<7)printf("%d %d\n", i, n-i);
    }

    return 0;
}
