#include <bits/stdc++.h>
using namespace std;

struct elen{
    int mch;
    int gas;
};

int main()
{
    struct elen pep[110];
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        scanf("%d %d", &pep[i].mch, &pep[i].gas);
    for(int i=1; i<=n-1; i++){
        for(int j=i+1; j<=n; j++){
            if(pep[i].mch>pep[j].mch){
                int fmch = pep[i].mch;
                int fgas = pep[i].gas;
                pep[i].mch = pep[j].mch;
                pep[i].gas = pep[j].gas;
                pep[j].mch = fmch;
                pep[j].gas = fgas;
            }
        }
    }

    for(int i=1; i<=n; i++){
        printf("%d %d\n", pep[i].mch, pep[i].gas);
    }
    return 0;
}
