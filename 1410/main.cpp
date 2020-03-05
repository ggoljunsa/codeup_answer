#include <bits/stdc++.h>
using namespace std;

char ch[100100];

int main()
{
    int r=0, l=0, str, i;
    scanf("%s", ch);
    str = strlen(ch);
    for(i=0; i<str; i++){
        if(ch[i]=='(') l++;
        else r++;
    }
    printf("%d %d", l, r);
    return 0;
}
