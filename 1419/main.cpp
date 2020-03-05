#include <bits/stdc++.h>
using namespace std;

int main()
{
    char stn[110];
    gets(stn);
    int cnt = 0;
    int len = strlen(stn);
    for(int i=0; i<len; i++){
        if(stn[i]=='l'){
            if(stn[i+1]=='o'){
                if(stn[i+2]=='v'){
                    if(stn[i+3]=='e'){
                        cnt++;
                    }
                }
            }
        }
    }
    printf("%d", cnt);
    return 0;
}
