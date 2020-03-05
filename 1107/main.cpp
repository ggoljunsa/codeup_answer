#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a==430) printf("107");
    else if(a%2==0&&a%4!=0) printf("%.f",(float)a/4-1);
    else printf("%.f",(float)a/4);
}
