#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    for(int i=0; i<10; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<10; i++){
        if(a[i]%5==0){
            printf("%d", a[i]);
            return 0;
        }
    }
    printf("0");
    return 0;
}
