#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    switch(n)
    {
    case 11:
        printf("11th"); return 0; break;
    case 12:
        printf("12th"); return 0; break;
    case 13:
        printf("13th"); return 0; break;
    }
    if(n%10==1) printf("%dst", n);
    else if(n%10==2) printf("%dnd", n);
    else if(n%10==3) printf("%drd", n);
    else printf("%dth", n);
    return 0;
}
