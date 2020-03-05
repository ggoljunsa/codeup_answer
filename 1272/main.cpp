#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp;
    scanf("%d", &n);
    int m = (int)floor((double)n/2+0.5);
    for(int i=1; i<=n; i++){
        scanf("%d", &temp);
        if(i==1) printf("%d ", temp);
        if(i==m) printf("%d ", temp);
        if(i==n) printf("%d", temp);
    }
    return 0;
}
