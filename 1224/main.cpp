#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    double n1 = (double)a/b;
    double n2 = (double)c/d;
    if(n1>n2) printf(">");
    else if(n1==n2) printf("=");
    else printf("<");
    return 0;
}
