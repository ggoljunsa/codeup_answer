#include<stdio.h>

int main() {
    long long int n, i, j, k, t = 0;
    long long int cnt = 0;

    scanf("%lld", &n);
    for(i=n/3+(n%3!=0); i<n/2+(n%2!=0); i++){
        cnt += i - ((n - i) / 2 + (n - i) % 2) + 1;
        }
    printf("%lld", cnt);
    return 0;
}
