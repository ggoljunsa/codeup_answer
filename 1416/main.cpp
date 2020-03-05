#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;
int a[640];

int main()
{
    int n;
    int i=0, binary;
    scanf("%d", &n);
    if(n==0){ printf("0"); return 0;}
    while(n>0){
        binary = n%2;
        a[i] = binary;
        n=n/2;
        i++;
    }

    for(int j=i-1; j>=0; j--){
        printf("%d", a[j]);
    }

    return 0;
}
