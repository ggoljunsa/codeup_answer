#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[2], i, cnt=0;
    scanf("%d %d", &a[0], &a[1]);
    for(i=0; i<2; i++){
        switch(a[i])
        {
        case 1: cnt+=400; break;
        case 2: cnt+=340; break;
        case 3: cnt+=170; break;
        case 4: cnt+=100; break;
        case 5: cnt+=70; break;
        }
    }
    if(cnt>500) printf("angry");
    else printf("no angry");
    return 0;
}
