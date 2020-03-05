#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    int tn[3];
    for(i=0; i<3; i++){
        scanf("%d", &tn[i]);
    }
    for(i=0; i<3; i++){
        if(tn[i]<=170){
            printf("CRASH");
            printf(" %d", tn[i]);
            return 0;
        }
    }
    printf("PASS");
    return 0;
}
