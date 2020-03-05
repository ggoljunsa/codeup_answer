#include <bits/stdc++.h>
using namespace std;

struct data{
    int num;
    int real;
    int scr;
};

bool comp(const data &p, const data &b){
    return p.num<b.num;
}
bool comp2(const data &p, const data &b){
    return p.scr<b.scr;
}


int main()
{
    struct data a[50010];
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i].num);
        a[i].scr = i+1;
    }

    stable_sort(a, a+n, comp);
    for(int i=0; i<n; i++){
        a[i].real = i+1;
    }
    stable_sort(a, a+n, comp2);

    for(int i=0; i<n; i++){
        printf("%d ", a[i].real-1);
    }
    return 0;
}
