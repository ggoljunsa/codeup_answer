#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int cnt = 0;
    int fm;
    scanf("%d", &n);
    while(n>=10)
    {
        cnt = 0;
        fm = n;
        while(fm!=0)
        {
            cnt+= fm%10;
            fm/=10;
        }
        n = cnt;
    }

    printf("%d", n);
    return 0;
}
