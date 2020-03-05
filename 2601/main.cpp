#include <bits/stdc++.h>
using namespace std;
int memo[50];
int cnt = 0;

int f(int n)
{
    if(!memo[cnt]) memo[cnt] = n;
    if(n==1) return 1;
    if(n%3==0){
        cnt++;
        return f(n/3);
    }
    else if(n%2==0){
        cnt++;
        return f(n/2);
    }
    else{
        cnt++;
        return f(n--);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    f(n);
    printf("%d", cnt);
    return 0;
}
