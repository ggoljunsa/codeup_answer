#include <bits/stdc++.h>
using namespace std;

int main()
{
    char num[10010];
    scanf("%s", num);
    int len = strlen(num);
    for(int i=len-1; i>=0; i--){
        printf("%c", num[i]);
    }
    return 0;
}
