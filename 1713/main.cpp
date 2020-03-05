#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int cnt =0;
    for(int i=a; i<=b; i++){
        if(i%3==0&&i%4!=0) cnt+=i;
        else if(i%4==0&&i%3!=0) cnt-=i;
    }
    printf("%d", cnt);
    return 0;
}
