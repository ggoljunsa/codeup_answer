#include <bits/stdc++.h>
using namespace std;

struct grade
{
    int num;
    int score;
    int grade;
};

bool comp2(const grade &x, const grade &y)
{
    return x.num < y.num;
}

bool comp1(const grade &x, const grade &y)
{
    return x.score > y.score;
}

int main()
{
    int n;
    struct grade pep[220];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &pep[i].score);
        pep[i].num = i + 1;
    }
    sort(pep, pep + n, comp1);
    for (int i = 0; i < n; i++)
        pep[i].grade = i + 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (pep[i].score == pep[i + 1].score)
        {
            int base = i;
            while (pep[base].score == pep[i + 1].score)
            {
                pep[i + 1].grade = pep[base].grade;
                i++;
            }
        }
    }
    sort(pep, pep + n, comp2);
    for (int i = 0; i < n; i++)
        printf("%d %d\n", pep[i].score, pep[i].grade);
    return 0;
}