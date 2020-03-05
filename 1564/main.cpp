#include <stdio.h>

int a, b;
// 이 부분에 들어가야 될 코드를 작성하여 제출


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
