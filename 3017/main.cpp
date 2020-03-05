#include <bits/stdc++.h>
using namespace std;

struct stu{
    int math, info, num;
};

bool cmp(const stu &p,const stu &b)
{
    if(p.math == b.math){
        return p.info>b.info;
    }
    else return p.math>b.math;
}

int main()
{
    int n;
    stu data[1010];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &data[i].math, &data[i].info);
        data[i].num = i+1;
    }
    stable_sort(data, data+n, cmp);
    for(int i=0; i<n; i++){
        printf("%d %d %d\n", data[i].num, data[i].math, data[i].info);
    }
    return 0;
}
