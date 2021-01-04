#include <bits/stdc++.h>
using namespace std;

int disk;

void hanoi(int disk, char from, char tmp, char to)
{
    if(disk<=1)
    {
        printf("1 : %c->%c\n", from, tmp);
        printf("1 : %c->%c\n", tmp, to);
    }
    else
    {
        hanoi(disk-1, from, tmp, to);
        printf("%d : %c->%c\n", disk, from, tmp);
        hanoi(disk-1, to, tmp, from);
        printf("%d : %c->%c\n", disk, tmp, to);
        hanoi(disk-1, from, tmp, to);

    }
}

int main()
{
    scanf("%d", &disk);
    hanoi(disk, 'A', 'B', 'C');
    printf("%d\n", (int)pow(3, disk)-1);
    return 0;
}
