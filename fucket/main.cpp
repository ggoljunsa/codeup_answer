#include <stdio.h>

int a[2][2], b[2][2];//��������, �ڵ����� 0 �ʱ�ȭ
int main()
{
    for(int i=0; i<2; i++){//for�� �ȿ����� ��ȯ��
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
