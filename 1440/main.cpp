#include <bits/stdc++.h>
int n, i, j=0, cnt = 0;
int a[1010] = {0};

int main()
{
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        printf("%d:", i+1);
        while(cnt<n-1){
            if(j==i) j++;
            if(a[i]>a[j]) printf(" >");
            else if(a[i]==a[j]) printf(" =");
            else printf(" <");
            cnt++;
            j++;
        }
        j=0, cnt = 0;
        printf("\n");
    }

    return 0;
}
