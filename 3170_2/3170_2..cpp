#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    map<string, int> arr;
    string s;
    int num;

    for (int i = 0; i < N; i++)
    {
        cin >> s;
        cin >> num;
        arr[s] += num;
    }
    string temp[M];
    for (int i = 0; i < M; i++)
        cin >> temp[i];
    for (int i = 0; i < M; i++)
        printf("%d\n", arr[temp[i]]);

    return 0;
}