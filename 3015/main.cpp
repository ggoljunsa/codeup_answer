#include <bits/stdc++.h>
using namespace std;

struct pro{
    char name[20];
    int scr;
    int time=0;
};

bool comp1(const pro &a, const pro &b)
{
    return (a.scr!=b.scr) ? (a.scr>b.scr) : (a.time<b.time);
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    struct pro pep[110];
    for(int i=0; i<n; i++){
        scanf("%s %d", pep[i].name, &pep[i].scr);
        pep[i].time = i;
    }
    sort(pep, pep+n, comp1);
    for(int i=0; i<m; i++){
        printf("%s\n", pep[i].name);
    }
    return 0;
}
