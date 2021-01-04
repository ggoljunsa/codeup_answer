#include <stdio.h>

int a[2][2], b[2][2];//전역변수, 자동으로 0 초기화
int main()
{
    for(int i=0; i<2; i++){//for문 안에서만 소환됨
        for(int j=0; j<2; j++)
            scanf("%d", &a[i][j]);
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++)
            printf("%d ", a[i][j]+b[i][j]);
        printf("\n");
    }
}
