#include <stdio.h>
int a[110][110];

void prt(int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 1;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=0; j--){
            a[i][j] = cnt++;
        }
    }
    prt(n);
    return 0;
}
