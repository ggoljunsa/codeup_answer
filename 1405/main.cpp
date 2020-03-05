#include <stdio.h>

int main()
{
    int n, i, j, fm, k;
    scanf("%d", &n);
    int a[n+1];

    for(i=1; i<=n; i++){
        scanf("%d", &a[i]);
        printf("%d ", a[i]);
    }
    printf("\n");
    for(i=1; i<n; i++){
        fm = a[1];
        for(j=1; j<=n-1; j++){
            a[j] = a[j+1];
        }
        a[n] = fm;
        for(k=1; k<=n; k++){
            printf("%d ", a[k]);
        }
        printf("\n");
    }
    return 0;
}
