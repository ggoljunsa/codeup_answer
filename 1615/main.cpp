#include <bits/stdc++.h>
using namespace std;

int sfn(int i)
{
    int cnt = 0;
    for(int j=1; j<=i; j++){
        int s = 0;
        int t = j;
        s+=t;
        while(t!=0)
        {
            s+=t%10;
            t/=10;
        }
        if(s==i) return 0;
    }
    return i;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int cnt = 0;
    for(int i=a; i<=b; i++){
        cnt += sfn(i);
    }
    printf("%d", cnt);
}
