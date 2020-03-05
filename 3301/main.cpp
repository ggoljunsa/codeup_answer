#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int temp, cnt = 0;
    int i=0;

    if(n>=50000){
        temp = n/50000;
        cnt += temp;
        n = n%50000;
    }
    if(n>=10000){
        temp = n/10000;
        cnt += temp;
        n = n%10000;
    }
    if(n>=5000){
        temp = n/5000;
        cnt+= temp;
        n = n%5000;
    }
    if(n>=1000){
        temp = n/1000;
        cnt+=temp;
        n = n%1000;
    }
    if(n>=500)
    {
        temp = n/500;
        cnt+=temp;
        n = n%500;
    }
    if(n>=100)
    {
        temp = n/100;
        cnt+=temp;
        n = n%100;
    }
    if(n>=50)
    {
        temp = n/50;
        cnt+=temp;
        n = n%50;
    }
    if(n>=10)
    {
        temp = n/10;
        cnt+=temp;
        n = n%10;
    }
    printf("%d", cnt);
    return 0;
}
