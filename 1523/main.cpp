#include <stdio.h>

int main()
{
    int m[11][11] = {};
    int a[4][2];
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<2; j++)
            scanf("%d", &a[i][j]);
    }
    for(int i=a[0][0]-2; i<=a[0][0]+2; i++)
    {
        for(int j=a[0][1]-2; j<=a[0][1]+2; j++)
            m[i][j] = 2;
    }
    m[a[0][0]][a[0][1]] = 1;


    int flag = 0;
    for(int i=a[2][0]; i<=a[3][0]; i++)
    {
        for(int j=a[2][1]; j<=a[3][1]; j++)
        {
            if(m[i][j]==1)
            {
                flag = 4;
                m[i][j] = 4;
            }

        }
    }


    for(int i=a[2][0]; i<=a[3][0]; i++)
    {
        for(int j=a[2][1]; j<=a[3][1]; j++)
        {
            if(m[i][j]==0||m[i][j]==2)
            {
                m[i][j] = 3;
            }
        }
    }

    int fm = 0;
    for(int i=a[1][0]-2; i<=a[1][0]+2; i++)
    {
        for(int j=a[1][1]-2; j<=a[1][1]+2; j++)
        {
            if(m[i][j]==1||m[i][j]==4)
            {
                fm = 1;
            }
            m[i][j] = 5;

        }
    }
    m[a[1][0]][a[1][1]]=6;

    int cnt = 0;
    if(fm==1){
        printf("0");
    }
    else{
        if(flag==4){
            for(int i=1; i<=9; i++){
                for(int j=1; j<=9; j++){
                    if(m[i][j]<=4&&m[i][j]>0) cnt++;
                }
            }
            printf("%d", cnt);
        }
        else{
            for(int i=1; i<=9; i++){
                for(int j=1; j<=9; j++){
                    if(m[i][j]<=2&&m[i][j]>0) cnt++;
                }
            }
            printf("%d", cnt);
        }
    }

    return 0;
}
