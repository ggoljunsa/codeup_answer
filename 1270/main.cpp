#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0, temp =1;
    scanf("%d", &n);
    while(n>=temp){
        cnt++;
        temp +=10;
    }
    printf("%d", cnt);
    return 0;
}
