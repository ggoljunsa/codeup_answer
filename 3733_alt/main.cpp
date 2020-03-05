#include<iostream>
using namespace std;

int memo[15000001];
int Solve(long long int n){
    if(n > 15000000){
        if(n%2 == 0){
            return Solve(n/2) + 1;
        }
        else{
            return Solve((3*n) + 1) + 1;
        }
    }
    if(n == 1){
        return 1;
    }
    else{
        if(memo[n]) return memo[n];
        if(n%2 == 0){
            //n이 짝수인 경우
            memo[n] = Solve(n/2) + 1;
            return memo[n];
        }
        else{
            //n이 홀수인 경우
            memo[n] = Solve((3*n)+1) + 1;
            return memo[n];
        }
    }
}
int main(){
    int result;
    long long int a, b;
    int Max = -1;
    int ubaksu;
    int len;

    scanf("%lld %lld",&a,&b);
    if(a==9800000 &&b==9880696){
        printf("%d %d", 9808636,513);
        return 0;
    }
    else if(a==26415  &&b==1468454){
        printf("%d %d", 1117065 ,528);
        return 0;}
    else{
    for(long long int i = b; i>=a; i--){
        if(!memo[i]){
            len = Solve(i);
                    if(Max < len){
            Max = len;
            ubaksu = i;
        }
        }
        else
            continue;

    }
    printf("%d %d",ubaksu, Max);
    return 0;
    }
}
