#include <bits/stdc++.h>
using namespace std;

struct jungol{
    int ctr;
    int num;
    int scr;
};

bool comp1(const jungol &x, const jungol &y)
{
    return x.scr > y.scr;
}

int nation[110] = {};
struct jungol pep[110];

int main()
{
    int n;
    int cnt = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d %d",
              &pep[i].ctr,
              &pep[i].num,
              &pep[i].scr);
    }

    sort(pep, pep+n, comp1);

    for(int i=0; cnt<3; i++){
        if(nation[pep[i].ctr]<2){
            printf("%d %d\n", pep[i].ctr, pep[i].num);
            nation[pep[i].ctr]+=1;
            //printf("%d\n", nation[pep[i].ctr]);
            cnt++;
        }
    }

    return 0;
}
