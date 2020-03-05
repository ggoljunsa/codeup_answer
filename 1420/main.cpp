#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, cnt, flag;
    char name[55][55];
    int scr[55];
    int rnk[55] = {0};

    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%s %d", name[i], &scr[i]);
    }

    for(i=1; i<=n; i++){
        cnt = 0;
        for(j=1; j<=n; j++){
            if(scr[i]<scr[j]) cnt++;
        }
        rnk[i] = cnt+1;
        if(rnk[i]==3) flag = i;
    }

    printf("%s", name[flag]);

    return 0;
}
