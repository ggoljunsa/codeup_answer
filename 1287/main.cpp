#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for(i=1; i<=9; i++){
        for(j=1; j<=i*n; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
