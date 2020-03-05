#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(b%2==1){
        printf("%d%d%d",a, b, c);
    }
    else{
        for(int i=0; i<2; i++)
            printf("%d%d%d ", a, b, c);
    }
    return 0;
}
