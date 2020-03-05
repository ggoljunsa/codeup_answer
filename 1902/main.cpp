#include <bits/stdc++.h>
using namespace std;

void f(int n)
{
    if(n<1) return;
    printf("%d\n", n);
    f(--n);
}

int main()
{
    int n;
    scanf("%d", &n);
    f(n);
}
