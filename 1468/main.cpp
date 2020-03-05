#include <stdio.h>
int a[110][110] = {};

void prt(int n)
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int j,i,n, cnt =1;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        if(i%2==1)
        {
            for(j=0; j<n; j++)
                a[j][i] = cnt++;
        }
        else
        {
            for(j=n-1; j>=0; j--)
                a[j][i] = cnt++;
        }
    }
    prt(n);
    return 0;
}
