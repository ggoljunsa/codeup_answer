#include <bits/stdc++.h>
using namespace std;
int behavior_num = 0;

int num(char c) { return c - 48; }
bool isnumber(char c)
{
    int k = c - '0';
    //printf("%d\n", k);
    if (k >= 0 and k <= 10)
        return true;
    else
        return false;
}
int getnum(string temp)
{
    int n = 0;
    for (int i = 0; i < temp.size(); i++)
    {
        long long int ct = 0;
        for (;; i++)
        {
            if (!isnumber(temp[i]))
                break;
            n = n * 10 + num(temp[i]);
        }
    }
    return n;
}

void idy(string temp)
{
    if (temp.find("push(") >= 0)
    {
        behavior_num = 1;
    }
    else if (temp.find("front(") >= 0)
    {
        behavior_num = 2;
    }
    else if (temp.find("back(") >= 0)
    {
        behavior_num = 3;
    }
    else if (temp.find("pop(") >= 0)
    {
        behavior_num = 4;
    }
    else if (temp.find("size(") >= 0)
    {
        behavior_num = 5;
    }
    else if (temp.find("empty(") >= 0)
    {
        behavior_num = 6;
    }
}

int main()
{
    int N = 0;
    string str;
    queue<int> q;
    scanf("%d", &N);
    //printf("a\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%s\n", str);
        idy(str);
        printf("b : %d\n", behavior_num);
        if (behavior_num == 1)
        {
            int num = getnum(str);
            if (q.size() > 0)
                q.push(num);
            break;
        }
        else if (behavior_num == 2)
        {
            printf("%d\n", q.front());
            break;
        }
        else if (behavior_num == 3)
        {
            printf("%d\n", q.back());
        }
        else if (behavior_num == 4)
        {
            if (q.size() > 0)
                q.pop();
            break;
        }
        else if (behavior_num == 5)
        {
            printf("%d\n", q.size());
            break;
        }
        else if (behavior_num == 6)
        {
            if (q.empty())
                printf("ture");
            else
            {
                printf("false");
            }
        }
        //printf("c");
    }
}