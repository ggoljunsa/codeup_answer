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
        printf("����");
    }
    else if(upperFlag)
        printf("��������");
    else if(lowerFlag)
        printf("��������");
    else
        printf("����");
    //else if(upperFlag and lower)
}
