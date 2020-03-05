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
    int m[3];
    scanf("%d %d %d", &m[0], &m[1], &m[2]);
    printf("%d", gcd(m[0], gcd(m[1], m[2])));
    return 0;
}
