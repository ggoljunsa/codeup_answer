#include <bits/stdc++.h>
using namespace std;

struct sche{
    char name[110] = {};
    int year;
    int month;
    int day;
};

bool comp1(const sche &a, const sche &b){
    if(a.year==b.year){
        if(a.month == b.month){
            if(a.day == b.day){
                if(strcmp(a.name, b.name)>=0)
                    return false;
                else
                    return true;
            }
            else
                return a.day < b.day;
        }
        else
            return a.month < b.month;
    }
    else
        return a.year < b.year;
}

int main()
{
    int n;
    scanf("%d", &n);
    struct sche sc[110];
    for(int i=0; i<n; i++){
        scanf("%s %d %d %d",
              sc[i].name, &sc[i].year,
              &sc[i].month, &sc[i].day);
    }
    sort(sc, sc+n, comp1);
    for(int i=0; i<n; i++){
        printf("%s\n", sc[i].name);
    }
    return 0;
}


