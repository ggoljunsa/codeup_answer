#include <bits/stdc++.h>
using namespace std;

int temp[5005];
int output[5005];
int check[5005];

int main()
{
    queue<int> l;
    int N, k, cnt = 1; cin >> N >> k;

    for (int i = 1; i <= N; i++) l.push(i);

    for (int i = 1; i <= N; i++) {
        int len = l.size();
        if (len > k) {
            for (int j = 1; j <= k - 1; j++) {
                temp[j] = l.front();
                l.pop();
            }
            output[cnt++] = l.front();
            l.pop();
            for
        }




        else if (len <= k)
    }
}
