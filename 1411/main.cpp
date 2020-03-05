#include <bits/stdc++.h>
using namespace std;

int a[55];

int main()
{
    int N, temp;
    scanf("%d", &N);
    for(int i=1; i<=N; i++) a[i]=i;
    for(int i=0; i<N-1; i++){
        scanf("%d", &temp);
        a[temp] = 0;
    }
    for(int i=1; i<=N; i++){
        if(a[i]!=0){
            printf("%d", i);
            break;
        }
    }
}
