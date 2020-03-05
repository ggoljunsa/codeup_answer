#include <bits/stdc++.h>
using namespace std;

int main()
{
    char num[510];
    scanf("%s", num);
    int dig = 0;
    int len = strlen(num);
    for(int i=0; i<len; i++){
        dig+=num[i];
    }
    printf("%d", dig%3 ? 0 : 1);
    return 0;
}
