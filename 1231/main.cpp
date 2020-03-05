#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char s;
    scanf("%d%c%d", &a, &s, &b);
    if(s=='+'){
        printf("%d", a+b);
    }
    else if(s=='-') printf("%d", a-b);
    else if(s=='*') printf("%d", a*b);
    else if(s=='/') printf("%.2lf",(double)a/b);
    return 0;
}
