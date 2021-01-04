#include <bits/stdc++.h>
using namespace std;
#define P 1000000

struct city{
    int x;
    int y;
    int p;
    double dis;
};

struct city g[10010];

bool comp1(const city &a, const city &b){
    return a.dis<b.dis;
}

int main()
{
    int n, p;
    bool bigCity = false;
    scanf("%d %d", &n, &p);
    for(int i=0; i<n; i++){
        scanf("%d %d %d", &g[i].x, &g[i].y, &g[i].p);
        g[i].dis = sqrt(pow(g[i].x, 2)+pow(g[i].y, 2));
    }

    sort(g, g+n, comp1);
    for(int i=0; i<n; i++){
        p+=g[i].p;
        if(p>=P){
            printf("%.3lf", g[i].dis);
            bigCity = true;
            break;
        }
    }
    if(!bigCity) printf("-1");
    return 0;
}
