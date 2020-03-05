#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int fm = 0;
    while(n!=0)
    {
        fm+=n%10;
        n/=10;
    }
    if(fm%7==4) printf("Bad");
    else printf("Good");
    return 0;
}
