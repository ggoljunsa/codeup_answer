#include <bits/stdc++.h>
using namespace std;
int cnt = 0;

void calc(int x, int y){

    if(x == y){
        return;
    }
    else{
        //�Է°�, ���� �ָ� ������ �� ����
        if(x > y){
            int temp = x;
            x = y;
            y = temp;
        }
        //ū ������ �ݶ��ϱ�
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