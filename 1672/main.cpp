#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int cnt = n/k;
    if(cnt>9999){printf("��ȣ �ʰ� ����");return 0;}
    for(int i=1; i<=cnt; i++){
        printf("F-%04d\n", i);
        if(i>=9999) break;
    }
    return 0;
}
