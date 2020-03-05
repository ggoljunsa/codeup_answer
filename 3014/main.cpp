#include <bits/stdc++.h>
using namespace std;
int arr[4500010];
int brr[100000];

int main()
{
    int n;
    int max = -1;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        scanf("%d", &arr[i]);
        if(arr[i]>max) max = arr[i];
        brr[arr[i]]++;
    }
    for(int i=0; i<=max; i++){
        for(int j=1; j<=brr[i]; j++)
            printf("%d ", i);
    }
    return 0;
}
