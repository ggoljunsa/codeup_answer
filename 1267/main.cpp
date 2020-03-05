#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp, cnt = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &temp);
        if(temp%2==0) cnt++;
    }
    printf("%d", cnt);
    return 0;
}
