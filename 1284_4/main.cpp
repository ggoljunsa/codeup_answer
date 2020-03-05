#include <stdio.h>

int prime(int n)
{
    int i = 1;
    for(i=2; i*i<=n; i++){
        if(n%i==0) return i;
    }
    return 0;
}

int main()
{
    int n, i, j, fm;
    scanf("%d", &n);
    fm = prime(n);
    if(fm==0) printf("wrong number");
    else{
    j = prime(n/fm);
    if(j==0) printf("%d %d", fm, n/fm);
    else printf("wrong number");
    }
    return 0;
}
