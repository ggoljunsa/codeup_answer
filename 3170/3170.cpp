#include <bits/stdc++.h>
using namespace std;

struct quart
{
    char str[110];
    int num;
} q[100010];

int main()
{
    int N, M;
    char tstr[110];
    int temp = 0;
    bool beforeFlag = false;
    int pos = 0;

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        scanf("%s %d", tstr, &temp);
        beforeFlag = false;

        for (int j = pos - 1; j >= 0; j--)
        {
            if (!strcmp(q[j].str, tstr))
            {
                beforeFlag = true;
                q[j].num += temp;
                break;
            }
        }
        if (!beforeFlag)
        {
            strcpy(q[pos].str, tstr);
            q[pos].num = temp;
            pos++;
        }
    }
    for (int i = 0; i < M; i++)
    {
        scanf("%s", tstr);
        beforeFlag = false;
        for (int j = N - 1; j >= 0; j--)
        {
            if (!strcmp(q[j].str, tstr))
            {
                beforeFlag = true;
                printf("%d\n", q[j].num);
                break;
            }
        }
        if (!beforeFlag)
        {
            printf("0\n");
        }
    }
    return 0;
}