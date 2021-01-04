#include <bits/stdc++.h>
using namespace std;

int t[100010][110] = {};

int n, k, x1, x2, x, y = 1;

int main()
{
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= k; i++)
    {
        scanf("%d %d", &x1, &x2);
        t[x1][i] = 1;
        t[x2][i] = 1;
    }
    scanf("%d", &x);

    while (y <= k)
    {

        if (t[x][y] == 1)
        {
            //2cases
            if (t[x - 1][y] == 1 && x > 1)
            {
                x--;
                //t[x][y] = 2;
            }
            else if (t[x + 1][y] == 1 && x < n)
            {
                x++;
                //t[x][y] = 2;
            }
            y++;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%d ", t[j][i]);
        }
        printf("\n");
    }
    printf("now he is in %d", x);
    return 0;
    printf("%d", x);
}
