#include <stdio.h>
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int myabs(int a)
{
    if(a<0)
        return a*(-1);
    else return a;
}

main()
{
    int a;
    scanf("%d", &a);
    printf("%d", myabs(a));
}
