#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    double per;
    int rul;

    scanf("%d\n%d", &a, &b);
    double tot = a;

    for(int i=0; i<b; i++){
        scanf("%lf", &per);
        tot = tot*(per/100+1);
    }

    rul = (int)floor(tot+0.5)-a;

    printf("%d\n", rul);
    if(rul<0) printf("bad");
    else if(rul==0) printf("same");
    else printf("good");

    return 0;
}
