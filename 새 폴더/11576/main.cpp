#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c;
    char anum[30][200];
    char bnum[30][200];
    int a,b,n, p = 0, fm = 0, len, temp;
    cin >> a >> b;
    cin >> n;

    for(int i=0; i<n; i++)
        scanf("%s", anum[i]);
    for(int i=0; i<n; i++)
    {
        len = strlen(anum[i]);
        for(int j=0; j<len; j++)
        {
            if(anum[i][j]<='9')
                c= '0';
            else if(anum[i][j]>'9')
                c= 55;
            fm+=(int)pow(a, len-j-1)*(anum[i][j]-c);
        }
        while(fm!=0)
        {
            temp = fm%b;
            fm/=b;
            if(temp<10)
                bnum[i][p++] = temp+'0';
            else if(temp>=10)
                bnum[i][p++] = temp+55;
        }
        for(int h=p-1; h>=0; h--)
            printf("%c", bnum[i][h]);
        printf(" ");
    }
return 0;
}
