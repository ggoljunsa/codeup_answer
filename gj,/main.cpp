//6014
#include <bits/stdc++.h>
using namespace std;
int main(){
///////////////
int n,m,i,q, x[100]={};
scanf("%d", &n);
for(i=0; i<n; i++)
{
    scanf("%d", &q);
    x[q]=i+1;
}
//
scanf("%d", &m);
for(i=0; i<m; i++)
{
    scanf("%d", &q;);
    if (x[q]==0) printf("-1\n");
    else printf("%d", x[q]);
}
return 0;


///////////////
}
