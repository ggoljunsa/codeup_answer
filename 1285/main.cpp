#include <bits/stdc++.h>
using namespace std;

int calc(int a, int b, char s)
{
    if(s=='+'){
        return a+b;
    }
    else if(s=='-') return a-b;
    else if(s=='*') return a*b;
    else if(s=='/') return a/b;
}

int main()
{
    char s = 'a';
    int a, b, temp;
    scanf("%d", &a);
    while(1){
        scanf("%c", &s);
        if(s=='=') break;
        scanf("%d", &b);
        temp = calc(a, b, s);
        a = temp;
    }
    printf("%d", temp);
    return 0;
}
