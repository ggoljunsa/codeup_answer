#include <bits/stdc++.h>
using namespace std;
int cnt = 0;

void calc(int x, int y){

    if(x == y){
        return;
    }
    else{
        //입력값, 현재 멀리 떨어진 두 수들
        if(x > y){
            int temp = x;
            x = y;
            y = temp;
        }
        //큰 값부터 반띵하기
        y/=2;
        cnt += 1;
        calc(x, y);
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    calc(a, b);
    cout << cnt;
    return 0;
}