#include <bits/stdc++.h>
using namespace std;

struct data{
    int scr;
    int rnk;
};

int main()
{
    struct data pep[1010];
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &pep[i].scr);
        pep[i].rnk=1;
        for(int j=1; j<i; j++){
            if(pep[j].scr>pep[i].scr) pep[i].rnk++;
            else if(pep[j].scr<pep[i].scr) pep[j].rnk++;
        }
    }
    for(int i=1; i<=n; i++){
        printf("%d %d\n", pep[i].scr, pep[i].rnk);
    }
    return 0;
}
