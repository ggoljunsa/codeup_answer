#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, cnt = 0;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cnt+=j;
        }
    }
    printf("%d", cnt);

    return 0;
}
