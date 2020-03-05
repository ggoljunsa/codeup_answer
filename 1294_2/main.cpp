#include <bits/stdc++.h>
using namespace std;

char siger(char ap)
{

    char nap = ap+3;
    if(nap<97&&nap>90) nap-=26;
        else if(nap<127&&nap>122) nap-=26;
    return nap;
}

int main()
{
    int i;
    char fs[210], nfs[210];
    char ap;
    gets(fs);
    int len = strlen(fs);
    for(i=0; i<len; i++){
        if(fs[i]==' ') nfs[i] = ' ';
        else if(fs[i]=='\n') nfs[i] = '\n';
        else nfs[i]=siger(fs[i]);
    }
    printf("%s", nfs);
    return 0;
}
