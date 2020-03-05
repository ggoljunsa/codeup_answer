#include <bits/stdc++.h>
using namespace std;

int memo[30] = {0, 2, 3};

int num(int i)
{
//    if(memo[i]!=0) return memo[i];
//    else{
//        memo[i] = num(i-1)+num(i-2);
//        return memo[i];
//    }
    if(memo[i]==0) memo[i] = num(i-1)+num(i-2);
    return memo[i];
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d", num(n));
    return 0;
}
