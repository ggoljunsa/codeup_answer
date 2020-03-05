#include <bits/stdc++.h>
using namespace std;
int a, b;

void lsq()
{

}

int main()
{
    int n, i, j, h;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=i; j<n-1; j++) printf(" ");
        for(h=0; h<n; h++) printf("*");
        printf("\n");
    }
    return 0;
}
