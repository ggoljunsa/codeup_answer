#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("*");
    }
    printf("\n");
    for(int i=2; i<n; i++){
        printf("*");
        for(int j=2; j<n; j++) printf(" ");
        printf("*");
        printf("\n");
    }
    for(int i=1; i<=n; i++){
        printf("*");
    }
    return 0;
}
