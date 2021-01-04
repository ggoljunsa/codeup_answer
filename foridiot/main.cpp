#include <stdio.h>

int main()
{
    int a[110][110] ={};
    int n;
    scanf("%d", &n);
    int cnt =1;
    for(int i=1; i<=n; i++)
    {
        if(i%2==1){
            for(int j=1; j<=n; j++){
                a[i][j] = cnt++;
            }
        }
        else if(i%2==0){
            for(int j=n ;j>=1; j--){
                a[i][j] = cnt++;
            }
        }
    }
    for(int i=0; i<=20; i++){
        for(int j=0; j<=20; j++){
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
