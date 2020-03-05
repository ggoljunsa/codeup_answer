#include <bits/stdc++.h>
using namespace std;

int max(int a, int b){return a>b ?a: b;}

int gcd(int a, int b)
{
    int r = 0;
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
    printf("%d", gcd(a, b));
}
