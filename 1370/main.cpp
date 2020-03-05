#include <bits/stdc++.h>
using namespace std;
char a[200][200];


int main()
{
    int h, r, i, j, k, m;
    scanf("%d %d", &h, &r);
    for(m=0; m<r; m++)
    {
        for(i=1; i<=h; i++)
        {
            for(j=2; j<=i; j++)
                printf(" ");
            printf("*\n");
        }
        for(i=1; i<h; i++)
        {
            for(j=i; j<h-1; j++)
                printf(" ");
            printf("*\n");
        }
    }
    return 0;
}
