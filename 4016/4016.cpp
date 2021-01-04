#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", gcd(gcd(a, b), c));
}