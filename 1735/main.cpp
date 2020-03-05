#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int r;
    while(b!=0)
    {
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int c = gcd(a, b);
    printf("%d %d", a/c, b/c);
    return 0;
}
