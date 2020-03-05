#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, k;
    scanf("%d %d %d", &a, &b, &k);
    int d = b-a;
    int n = a;
    while(n<=k){
        printf("%d ", n);
        n+=d;
    }
    return 0;
}
