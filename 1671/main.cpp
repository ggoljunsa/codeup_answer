#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a==b){ printf("tie");return 0;}
    else if(a==1&&b==2){
        printf("win"); return 0;
    } else if(a==0&&b==1){
    printf("win"); return 0;
    } else if(a==2&&b==0){
    printf("win"); return 0;
    } else{
        printf("lose"); return 0;
    }
}
