#include <bits/stdc++.h>
using namespace std;
#define INT_MAX 80

long long int memo[INT_MAX][INT_MAX];


long long int pas(long long int r, long long int c)
{
    if(memo[r][c]!=0) return (memo[r][c])%100000000;
    if(r==1||c==1){
        memo[r][c]=1;
    }
    else{
        memo[r][c] = (((pas(r-1, c))%100000000+pas(r, c-1)%100000000))%100000000;
    }
    return memo[r][c];
}

int main()
{
    memo[1][1] = 1;
    long long int r, c;
    scanf("%lld %lld", &r, &c);
    printf("%d\n",  pas(r, c));
//    for( int i=0; i<20; i++){
//        for(int j=0; j<20; j++){
//            printf("%lld ", memo[i][j]);
//        }
//        printf("\n");
//    }
    return 0;
}
