#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int fm = n;
    int cnt = 0;
    if((n%10)%3==0&&(n%10)!=0) cnt++;
    n/=10;
    if((n%10)%3==0&&(n%10)!=0) cnt++;
    n/=10;
    if((n%10)%3==0&&(n%10)!=0) cnt++;
    if(cnt==1) printf("K");
    else if(cnt==2) printf("KK");
    else if(cnt==3)printf("KKK");
    else printf("%d", fm);
    return 0;
}
