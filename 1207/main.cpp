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
        printf("��"); break;
    case 2:
        printf("��"); break;
    case 3:
        printf("��"); break;
    case 4:
        printf("��"); break;
    case 0:
        printf("��"); break;
    }
    return 0;
}
