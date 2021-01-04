#include <bits/stdc++.h>
using namespace std;
int a[1100];

int main()
{
    int n, fm, cnt = 0;
    scanf("%d", &n);
    a[1] = 1;
    for(int i=2; i<=1000; i++){
        if(a[i]==0){
            for(int j=i+i; j<=1000; j+=i){
                a[j] = 1;
            }
        }
    }
    /*for(int i=1; i<=1000; i++){
        printf("%d ", a[i]);
        if(i%10==0) printf("\n");
    }*/
    while(n--){
        scanf("%d", &fm);
        if(a[fm]==0) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
