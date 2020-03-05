#include <stdio.h>
#include <math.h>

int main()
{
    int n, cnt=0;
    scanf("%d", &n);
    while(1){
        cnt++;
        n/=10;
        if(n<1) break;
    }
    printf("%d", cnt);
    return 0;
}
