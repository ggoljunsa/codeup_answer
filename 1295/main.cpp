#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[1010];
    scanf("%s", str);
    int len = strlen(str), i;
    for(i=0; i<len; i++){
        if(str[i]>64&&str[i]<91) str[i]+=32;
        else if(str[i]>96&&str[i]<123) str[i]-=32;
    }
    printf("%s", str);
    return 0;
}
