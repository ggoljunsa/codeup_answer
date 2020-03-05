#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    printf("+");
    for(i=0; i<n-2; i++) printf("-");
    printf("+\n");
    for(i=0; i<m-2; i++){
        printf("|");
        for(j=0; j<n-2; j++) printf(" ");
        printf("|\n");
    }
    printf("+");
    for(i=0; i<n-2; i++) printf("-");
    printf("+\n");
    return 0;
}
