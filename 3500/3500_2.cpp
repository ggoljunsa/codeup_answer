#include <bits/stdc++.h>
using namespace std;

int l[9][9] = {};
int r = 0, c = 0;
int sch[9][9] = {};
int memo[9][9] = {};

int pos[8][2] = {
    {-1, -1},
    {-1, 0},
    {-1, 1},
    {0, -1},
    {0, 1},
    {1, -1},
    {1, 0},
    {1, 1}};

int mines(int y, int x)
{
    int cnt = 0;
    int temp_r, temp_c;
    for (int i = 0; i < 8; i++)
    {
        temp_r = y + pos[i][0];
        temp_c = x + pos[i][1];
        if (temp_r >= 0 && temp_r < 9 && temp_c >= 0 && temp_c < 9)
        {
            cnt += l[temp_r][temp_c];
        }
    }
    return cnt;
}

void f(int y, int x)
{
    if(y<0 || x<0 || y>8 || x>8){return;}//1. 위치가 0~8사이가 아닌 경우
    if(sch[y][x] != 0){return;}//2. 이미 탐색을 한 경우
    if(l[y][x] != 0){//3. 지뢰가 있는 경우
        memo[y][x] = -1;
        return;
    }
    int mine = mines(y, x);
    memo[y][x] = mine;
    sch[y][x] = 1;
    //4.주변에 마인 수가 0이면서 탐색을 안한 땅떵어리가 없는 경우
    if(mine == 0){
        for(int i=0; i<8; i++){
            f(y+pos[i][0], x+pos[i][1]);
        }
    }
    else{return;}
}

void prt(){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(memo[i][j] == -2)
                printf("_ ");
            else{
                printf("%d ", memo[i][j]);
            }
        }
        printf("\n");
    }
}

int main()
{
    //memo -2 초기화, -2면 _표시
    for(int i=0;i<9; i++){
        for(int j=0; j<9; j++)
            memo[i][j] = -2;
    }
    //기본적인 입력 과정
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d ", &l[i][j]);
        }
    }
    scanf("%d %d", &r, &c);
    r--; //나는 0,0을 시작으로 잡았기에 1,1로 잡는 문제에 단위환산
    c--;

    f(r, c);
    prt();
    //printf("%d", mines(r, c));
}