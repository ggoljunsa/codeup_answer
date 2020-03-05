#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int n;
    char str[220];
    scanf("%d\n%s",&n ,str);
    int len = strlen(str);
    int sp = len%3;
    for(int i=0; i<len; i++){
        if((i-sp+3)%3==0&&i>0
           ){
            printf(",");
        }
        printf("%c", str[i]);
    }
    return 0;
}
