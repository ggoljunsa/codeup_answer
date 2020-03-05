#include <bits/stdc++.h>
using namespace std;

int main()
{
    char cd[20];
    scanf("%s", cd);
    int len = strlen(cd);
    for(int i=0; i<len; i++){
        printf("%c", cd[i]+2);
    }
    printf("\n");
    for(int i=0; i<len; i++){
        printf("%c", (cd[i]*7)%80+48);
    }
    return 0;
}
