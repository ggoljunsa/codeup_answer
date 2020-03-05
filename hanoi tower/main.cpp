#include <bits/stdc++.h>
using namespace std;

char tower[3] = {'A', 'B', 'C'};
int disk;

void hanoi(int disk, int start, int finish)
{
    int mid = 3-start-finish;
    if(disk<=1){
         printf("move disk %d %c->%c\n", disk, tower[start], tower[finish]);
         return;
    }
    hanoi(disk-1, start, mid);
    printf("move disk %d %c->%c\n", disk, tower[start], tower[finish]);
    hanoi(disk-1, mid, finish);
}

int main()
{
    scanf("%d", &disk);
    printf("%d\n", (int)pow(2, disk)-1);
    hanoi(disk, 0, 2);
    return 0;
}
