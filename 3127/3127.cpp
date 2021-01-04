#include <bits/stdc++.h>
using namespace std;

stack<int> s;
string nstr, str;
char temp;
int x, y = 0;

bool isnumber(char c)
{
    int k = c - '0';
    //printf("%d\n", k);
    if (k >= 0 and k <= 10)
        return true;
    else
        return false;
}
int num(char c) { return c - 48; }

void calcuate(char op)
{
    if (s.size() < 2)
        return;
    x = s.top();
    s.pop();
    y = s.top();
    s.pop();
    if (op == '*')
        s.push(x * y);
    else if (op == '+')
        s.push(x + y);
    else if (op == '-')
        s.push(y - x);
}

int main()
{
    getline(cin, nstr);
    for (int i = 0; i < nstr.size(); i++)
    {
        if (nstr[i] != ' ')
            str += nstr[i];
    }
    for (int i = 0; i < nstr.size(); i++)
    {
        temp = nstr[i];
        if (isnumber(temp))
        {
            long long int cnt = 0;
            for (;; i++)
            {
                if (!isnumber(nstr[i]))
                    break;
                cnt = cnt * 10 + num(nstr[i]);
            }
            s.push(cnt);
        }
        else if (temp != ' ')
            calcuate(temp);
    }
    
    printf("%d\n", s.top());
    return 0;
}