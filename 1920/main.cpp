#include <bits/stdc++.h>
using namespace std;


void bin(int n)
{
    if(n==0||n==1) printf("%d", n);
    else{
        bin(n/2);
        printf("%d", n%2);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    bin(n);

}
