#include <stdio.h>

int main()
{
    int i,n, max = 0, temp;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &temp);
        if(temp>max) max = temp;
    }
    printf("%d", max);
    return 0;
}
