#include <bits/stdc++.h>
using namespace std;

struct pro
{
    char name[20];
    int scr[3];
    int time=0;
    int grade[3];
};

bool comp1(const pro &a, const pro &b)
{
    return (a.scr[0]!=b.scr[0]) ? (a.scr[0]>b.scr[0]) : (a.time<b.time);
}

int main()
{
    int n;
    scanf("%d", &n);
    struct pro pep[110];
    for(int i=0; i<n; i++)
    {
        scanf("%s %d %d %d", pep[i].name, &pep[i].scr[0], &pep[i].scr[1], &pep[i].scr[2]);
        pep[i].time = i;
        for(int h=1; h<3; h++)
        {
            pep[i].grade[h] = 1;
            for(int j=0; j<i; j++)
            {
                if(pep[j].scr[h]<pep[i].scr[h])
                    pep[j].grade[h]++;
                else if(pep[j].scr[h]>pep[i].scr[h])
                    pep[i].grade[h]++;
            }
        }
    }
    sort(pep, pep+n, comp1);

   /* for(int i=0; i<n; i++){
        printf("%6s ", pep[i].name);
        for(int j=0; j<3; j++){
            printf("%10d ", pep[i].grade[j]);
        }
        printf("\n");
    }*/

    printf("%s %d %d", pep[0].name, pep[0].grade[1], pep[0].grade[2]);
    return 0;
}
