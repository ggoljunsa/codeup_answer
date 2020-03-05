#include <bits/stdc++.h>
using namespace std;
#define INF 987987654321

long long a[100000];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    sort(a, a + n);

    int s = 0;
    int e = n - 1;
    long long res = INF;
    int i=s, j=e;

    while (s < e) {
        long long sum = a[s] + a[e];
        if (res > abs(sum)) {
            res = abs(sum);
            i = s;
            j = e;
        }

        if (abs(a[s] + a[e]) > abs(a[s + 1] + a[e])) {
            s++;
        }
        else if (abs(a[s] + a[e]) > abs(a[s] + a[e - 1])) {
            e--;
        }
        else {
            s++;
        }
    }

    printf("%lld %lld\n", a[i], a[j]);
}

