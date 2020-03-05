#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    int a[5];
    int max = INT_MIN, min=INT_MAX;
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
        if(a[i]>max) max = a[i];
        else if(a[i]<min) min = a[i];
    }
    printf("%d\n%d", max, min);
    return 0;
}
