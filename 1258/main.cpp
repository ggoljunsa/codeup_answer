#include <stdio.h>

int main()
{
    int a, b, cnt=0, i;
    scanf("%d %d", &a, &b);
    for(i=a; i<=b; i++){
        if(i%3==0) cnt+=i;
    }
    printf("%d", cnt);
    return 0;
}
