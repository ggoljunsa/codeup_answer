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
    if(y<0 || x<0 || y>8 || x>8){return;}//1. ��ġ�� 0~8���̰� �ƴ� ���
    if(sch[y][x] != 0){return;}//2. �̹� Ž���� �� ���
    if(l[y][x] != 0){//3. ���ڰ� �ִ� ���
        memo[y][x] = -1;
        return;
    }
    int mine = mines(y, x);
    memo[y][x] = mine;
    sch[y][x] = 1;
    //4.�ֺ��� ���� ���� 0�̸鼭 Ž���� ���� ������� ���� ���
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
    //memo -2 �ʱ�ȭ, -2�� _ǥ��
    for(int i=0;i<9; i++){
        for(int j=0; j<9; j++)
            memo[i][j] = -2;
    }
    //�⺻���� �Է� ����
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d ", &l[i][j]);
        }
    }
    scanf("%d %d", &r, &c);
    r--; //���� 0,0�� �������� ��ұ⿡ 1,1�� ��� ������ ����ȯ��
    c--;

    f(r, c);
    prt();
    //printf("%d", mines(r, c));
}