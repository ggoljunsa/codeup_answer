#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4], i, cnt = 0;
    for(i=0; i<4; i++) scanf("%d", &a[i]);
    for(i=0; i<4; i++){
        if(a[i]==1) cnt++;
    }
    switch(cnt)
    {
    case 1:
        printf("µµ"); break;
    case 2:
        printf("°³"); break;
    case 3:
        printf("°É"); break;
    case 4:
        printf("À·"); break;
    case 0:
        printf("¸ð"); break;
    }
    return 0;
}
