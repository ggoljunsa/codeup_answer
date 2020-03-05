#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, s1, s2;
    scanf("%d %d %d", &t, &s1, &s2);
    while(t<90){
        s1++;
        t+=5;
    }
    if(s1>s2) printf("win");
    else if(s1==s2) printf("same");
    else printf("lose");
    return 0;
}
