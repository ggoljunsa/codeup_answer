#include <bits/stdc++.h>
using namespace std;

typedef struct mountain{
    char c;
    int no;
    char name[20];
    bool r = false;
}MT;

bool comp1(const MT &x, const MT &y){

}

int main()
{
    int n;
    MT m[20010];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf(" %c", &m[i].c);
        if(m[i].c == 'I'){
            scanf("%d %s", &m[i].no, m[i].name);
            sort(m, m+i, comp1);
        }
        else if(m[i].c == 'D'){
            
        }
    }
}