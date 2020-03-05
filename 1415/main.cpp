#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mx[2] = {-1, -1};
    int num[10];
    for(int i=0; i<10; i++){
        scanf("%d", &num[i]);
        if(num[i]%2==1){
            if(num[i]>mx[0]) mx[0] = num[i];
        }
        else{
            if(num[i]>mx[1]) mx[1] = num[i];
        }
    }
    for(int j=0; j<2; j++){
        if(mx[j]!=-1) printf("%d ", mx[j]);
    }
    return 0;
}
