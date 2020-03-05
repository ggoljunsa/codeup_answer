#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, i, cnt=0;
    scanf("%d %d", &a, &b);
    if(a%2==1)
    {
        cnt+=a;
        printf("%d", a);
    }
    else
    {
        cnt-=a;
        printf("-%d", a);
    }
    for(i=a+1; i<=b; i++)
    {
        if(i%2==1)
        {
            cnt+=i;
            printf("+%d", i);
        }
        else
        {
            cnt-=i;
            printf("-%d", i);

        }
    }
    if(cnt>0){
    printf("=+%d", cnt);
    }
    else printf("=%d", cnt);
    return 0;
}
