#include <bits/stdc++.h>
using namespace std;
/*
int main()
{
    int n;
    int bin[30] = {
        0,
    };
    scanf("%d", &n);
    int temp = n;
    int pos = 0;
    while (1)
    {
        bin[pos] = temp % 2;
        temp /= 2;
        pos++;
        if (temp == 0)
            break;
    }
    printf("2 ");
    for (int i = pos - 1; i >= 0; i--)
    {
        printf("%d", bin[i]);
    }
    printf("\n8 %o", n);
    printf("\n16 %X", n);
    return 0;
}
*/
#include <stdio.h>
union example {
    int i;
    char c;
};
int main(void)
{
    union example v;
    v.c = 'A';
    printf("v.c:%c v.i:%i\n", v.c, v.i);
    v.i = 10000;
    printf("v.c:%c v.i:%i\n", v.c, v.i);
}