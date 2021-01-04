#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> s;
    string str;
    getline(cin, str);
    int cnt = 0;

    for (int i = 0; i < str.size(); i++)
    {

        if (str[i] == '(')
        {
            if (str[i + 1] == ')')
            {
                cnt += s.size();
                i++;
            }
            else
            {
                s.push('(');
            }
        }
        else if (str[i] == ')')
        {
            s.pop();
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}