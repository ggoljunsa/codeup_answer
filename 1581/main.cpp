#include <stdio.h>
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int myswap(int* a, int* b)
{
    if(*a>*b){
    int t = *a;
    *a = *b;
    *b = t;
    }

}

main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
}
