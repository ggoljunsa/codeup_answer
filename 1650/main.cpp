#include <bits/stdc++.h>
using namespace std;

int main()
{
    char codeup[110][110];
    int w, h, n;
    scanf("%d %d %d", &w, &h, &n);
    for(int i=0; i<n; i++)
        scanf("%s", codeup[i]);


    for(int i=0; i<n; i++)
    {
        for(int m =0 ; m<h; m++)
        {
            int len = strlen(codeup[i]);
            for(int k=0; k<len; k++)
            {
                for(int j=0; j<w; j++)
                {
                    printf("%c", codeup[i][k]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
