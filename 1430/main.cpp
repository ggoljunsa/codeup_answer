#include <bits/stdc++.h>
using namespace std;
int n, m, i;
int t[10000010];
int q[2][10000010];

void yesorno()
{
    int fm, j=0, flag = 0;
    for(i=0; i<m; i++){
        flag = 0;
        while(j<n){
            if(q[i]==t[j]){
                printf("1 ");
                flag = 1;
            }
            if(q[i]<t[j]){
                printf("0 ");
                flag = 1;
            }
            if(flag) break;
            j++;
        }
        if(flag==0){
            printf("0 ");
            j=0;
        }
    }
}

void input()
{
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &t[i]);
    scanf("%d", &m);
    for(i=0; i<m; i++){
        scanf("%d", &q[0][i]);
    q[1][i] = i;
    }
}

int main()
{
    input();
    sort(t, t+n);
    sort(q, q+m);
    yesorno();

    return 0;
}
