#include <bits/stdc++.h>
using namespace std;
stack<int> s;

void stking(int x)
{
    if (x == 0)
    {
        if (s.size() > 0)
            s.pop();
    }
    else
    {
        s.push(x);
    }
}

int main()
{
    int K, temp, cnt = 0;
    scanf("%d", &K);
    for (int i = 0; i < K; i++)
    {
        scanf("%d", &temp);
        stking(temp);
    }
    while (s.size() > 0)
    {
        cnt += s.top();
        s.pop();
    }
    printf("%d", cnt);
    return 0;
}