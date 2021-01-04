#include <bits/stdc++.h>
using namespace std;


int main()
{
int tot = 0;
int coin[15];
int c;
int cnt = 0;
    scanf("%d", &tot);
    scanf("%d", &c);
    for(int i=1; i<=c; i++)
        scanf("%d", &coin[i]);
    while(tot>0){
        if(tot>=coin[c]){
            tot-=coin[c];
            cnt++;
        }
        else{
            c--;
        }
    }
    printf("%d", cnt);
}
