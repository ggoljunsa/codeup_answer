#include <bits/stdc++.h>
using namespace std;
int n, g;
int a[110];
int min = INT_MAX;

int main()
{
    scanf("%d %d", &n, &g);
    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=1; i<=n; i+=g){
        for(int j=i+1; j<i+g; j++){
            if(j>n) break;
            if(a[i]<a[j]){
                a[i] = a[j];
            }
        }

    }
    for(int k=1; k<=n; k+=g){
        printf("%d ", a[k]);
    }
}
