#include <bits/stdc++.h>
using namespace std;

struct serial
{
    char base[20];
    int yer;
    int mth;
    int day;
    bool male;
};

serial s;

int cal(int a, int b)
{
    return int(s.base[a] - '0') * 10 + int(s.base[b] - '0');
}
int main()
{
    scanf("%s", s.base);
    s.yer = cal(0, 1);
    s.mth = cal(2, 3);
    s.day = cal(4, 5);
    char temp = s.base[7];

    if (temp == '1')
    {
        s.yer += 1900;
        s.male = true;
    }
    else if (temp == '2')
    {
        s.yer += 1900;
        s.male = false;
    }
    else if (temp == '3')
    {
        s.yer += 2000;
        s.male = true;
    }
    else if (temp == '4')
    {
        s.yer += 2000;
        s.male = false;
    }

    char g = (s.male) ? 'M' : 'F';
    printf("%d/%02d/%02d %c", s.yer, s.mth, s.day, g);
    return 0;
}
