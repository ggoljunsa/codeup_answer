#include <bits/stdc++.h>
using namespace std;

using namespace std;
int n;

void f(int i)
{
    printf("%d\n", i++);
    if(i>n) return;
    f(i);
}

int main()
{
    scanf("%d", &n);
    f(1);
}
