#include <stdio.h>

int a, b;
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����


int gcd(int a, int b)
{
    int r;
    while(b!=0){
        r = a%b;
        a= b;
        b = r;
    }
    return a;
}

int main()
{
    scanf("%d%d", &a, &b);
    printf("%d\n", gcd(a, b));
}
