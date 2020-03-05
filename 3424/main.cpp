#include <bits/stdc++.h>
using namespace std;
int cnt = 0;

void move(int n,char from, char to)
{
    printf("move disk %d %c->%c\n", n,from, to);
}

void hanoi(int n, char from, char by, char to)
{
    if(n==1){
        cnt++;
        if(n==)
        printf("%d", cnt);
        move(1, from, to);
    }
    else{
        hanoi(n-1, from, to, by);
        cnt++;
        move(n, from, to);
        hanoi(n-1, by, from, to);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
