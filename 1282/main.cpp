#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    int k;
    scanf("%d", &n);

    i=(int)sqrt(n);
    k= n-i*i;

    printf("%d %d", k, i);

    return 0;
}
