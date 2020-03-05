#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, d;
    int cnt = 0;
    scanf("%d %d", &m, &d);
    for(int i=m; i<=10; i++){
        if(i==m){
            for(int j=d; j<=((m%2==1)? 31 :30); j++){
                cnt++;
            }
        }
        else if(i%2==1){
            for(int j=1; j<=31; j++){
                cnt++;
            }
        }
        else
        {
            for(int j=1; j<=30; j++){
                cnt++;
            }
        }
    }
    printf("%d", cnt-1);
    return 0;
}
