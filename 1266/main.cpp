#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    int temp;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &temp);
        cnt+=temp;
    }
    printf("%d", cnt);
    return 0;

}
