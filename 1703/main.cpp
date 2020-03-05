#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sec;
    scanf("%d", &sec);
    int h = sec/3600;
    sec = sec-h*3600;
    int m = sec/60;
    sec = sec - m*60;
    printf("%d %d %d", h, m , sec);
    return 0;
}
