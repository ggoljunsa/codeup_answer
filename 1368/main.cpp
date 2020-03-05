#include <stdio.h>

void sqr(int h, int k, int d)
{
    if(d=='L'){
        for(int i=1; i<=h; i++){
            for(int j=2; j<=i; j++) printf(" ");
            for(int h=1; h<=k; h++) printf("*");
            printf("\n");
        }
    }
    else{
        for(int i=1; i<=h; i++){
            for(int j=i; j<h; j++) printf(" ");
            for(int h=1; h<=k; h++) printf("*");
            printf("\n");
        }
    }
}

int main()
{
    int h, k, i, j;
    char d;
    scanf("%d %d %c", &h, &k, &d);
    sqr(h, k, d);
}
