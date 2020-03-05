#include <stdio.h>

int main()
{
    int k;
    int arr[110]={0};
    scanf("%d", &k);
    for(int i=0; i<k; i++) scanf("%d", &arr[i]);
    for(int i=0; i<=1; i++){
        for(int j=0; j<k; j++) printf("%d\n", arr[j]);
    }
    return 0;
}
