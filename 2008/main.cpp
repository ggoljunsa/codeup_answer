#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a[110];
    bool upperFlag = true;
    bool lowerFlag = true;

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n-1; i++){
        if(a[i]<a[i+1])
            lowerFlag = false;
        else if(a[i]>a[i+1])
            upperFlag = false;
    }

    if(upperFlag and lowerFlag){
        printf("섞임");
    }
    else if(upperFlag)
        printf("오름차순");
    else if(lowerFlag)
        printf("내림차순");
    else
        printf("섞임");
    //else if(upperFlag and lower)
}
