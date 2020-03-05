#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    int cnt = 0;
    double avg;
    for(int i=0; i<10; i++){
        scanf("%d", &a[i]);
        cnt+=a[i];
    }
    avg = (double)cnt/10.0;
    int r=0, b=0;
    printf("%.1f", avg);
    for(int i=0; i<10; i++){
        if(a[i]>=avg) r++;
        else if(a[i]<avg) b++;
    }
    printf("\n%d %d", r, b);
    return 0;
}
