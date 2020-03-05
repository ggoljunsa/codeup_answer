#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[11];
    int rnk[11] = {};
    for(int i=1; i<=10; i++){
        scanf("%d", &a[i]);
        rnk[i] = 1;
        for(int j=1; j<=i-1; j++){
            if(a[i]<a[j]) rnk[i]++;
            else if(a[j]<a[i]) rnk[j]++;
        }
    }
    for(int i=1; i<=10; i++){
        if(rnk[i]==3){
            printf("%d", a[i]);
            return 0;
        }
    }
    return 0;
}
