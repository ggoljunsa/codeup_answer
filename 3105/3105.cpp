#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int a[1010] = {};
    cin >> N;
    map<int, int> b;
    for(int i=0; i<N; i++){
        int temp;
        scanf("%d ", &temp);
        a[temp]++;
    }
    sort(a, a+(N-1));

}