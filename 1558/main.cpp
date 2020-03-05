#include <stdio.h>
// 이 부분에 들어가야 될 코드를 작성하여 제출
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
