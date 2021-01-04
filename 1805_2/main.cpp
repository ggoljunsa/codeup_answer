#include <bits/stdc++.h>
using namespace std;


struct micasa{
    int mch;
    int gas;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct micasa a[100];
    for(int i=0; i<n; i++){
        scanf("%d %d", &a[i].mch, &a[i].gas);
    }
    int tmch, tgas;
    for(int i = 0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[j].mch < a[i].mch){
                tmch = a[i].mch;
                tgas = a[i].gas;
                a[i].mch = a[j].mch;
                a[i].gas = a[j].gas;
                a[j].mch = tmch;
                a[j].gas = tgas;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d %d\n", a[i].mch, a[i].gas);
    }
}
