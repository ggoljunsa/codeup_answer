#include <bits/stdc++.h>
using namespace std;

char tower[3] = {'A', 'B', 'C'};
int disk;

void hanoi(int disk, int start, int finish)
{
    int mid = 3-start-finish;
    if(disk<=1){
         printf("1 : %c->%c\n", tower[start], tower[1]);
         printf("1 : %c->%c\n", tower[1], tower[finish]);
         return;
    }
    hanoi(disk-1, start, finish);
    printf("%d : %c->%c\n", disk, tower[start], tower[1]);
    hanoi(disk-1, finish, start);
    printf("%d : %c->%c\n", disk, tower[mid], tower[finish]);
    hanoi(disk-1, start, finish);
}

int main()
{
    scanf("%d", &disk);
    hanoi(disk, 0, 2);
    printf("%d\n", (int)pow(3, disk)-1);
    return 0;
}
