#include <stdio.h>
int a[11][11];

void input()
{
    int i, j;
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=10; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void lk()
{
    int x = 2, y = 2, i, j;
    a[2][2] = 9;

    for(x=2; x<=10; x++){
        if(a[y][x+1]==2) return;
        if(a[y][x+1]==0){
            a[y][x]=9;
        }
        else {
            while(a[y][x+1]!=0){
                if(a[y+1][x]==1&&a[y][x+1]==1) {
                        a[y][x] = 9;
                        return;
                }
                if(a[y+1][x]==2){
                    a[y][x] = 9;
                    a[y+1][x] = 9;
                        return;
                }
                a[y][x] = 9;
                y++;
            }
        }
        a[y][x] = 9;
    }
}

void output()
{
    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    input();
    lk();
    output();

    return 0;
}
