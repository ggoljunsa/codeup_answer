#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, i, cnt=0;
    scanf("%d %d", &a, &b);
    for(i=a; i<=b; i++){
        if(i%2==1){
            cnt+=i;
            printf("+%d", i);
        }
        else{
            cnt-=i;
            printf("-%d", i);

        }
    }
    printf("=%d", cnt);
    return 0;
}
