#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n[8];
    double a, b;
    scanf("%lf %lf", &a, &b);
    n[0] = a+b;
    n[1] = a-b;
    n[2] = b-a;
    n[3] = a/b;
    n[4] = b/a;
    n[5] = pow(a, b);
    n[6] = pow(b, a);
    n[7] = a*b;
    sort(n, n+8);
    printf("%lf", n[7]);

    return 0;
}
