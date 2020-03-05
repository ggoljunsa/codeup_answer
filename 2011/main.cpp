#include <bits/stdc++.h>
#include <string>
using namespace std;
int d[5050];


int main()
{
    char c[5050];
    scanf("%s", c+1);
    int n = strlen(c+1);
    int t;

    if(c[1]-'0'==0&&n==1)
    {
       printf("0");
        return 0;
    }/*
    d[1] = 1;
    int a = c[1]-'0';
    int b = c[2]-'0';
    t = a*10+b;
    if(t>=10&&t<=26)
    {
        if(c[2]-'0'!=0) d[2] = 2;
        else d[2] = 2;
    }
    else
        d[2] = d[1]+1;*/
    d[0] = 1;
    for(int i=1; i<=n; i++)
    {
        int o = i;
        if(c[o]-'0'>0)
            d[i] = (d[i-1]+d[i])%1000000;
        t = c[o]-'0'+(c[o-1]-'0')*10;
        if(t>=10&&t<=26)
            d[i] = (d[i-2]+d[i])%1000000;
    }

    printf("%d", d[n]);
    return 0;
}
