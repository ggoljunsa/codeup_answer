#include <stdio.h>
int a[10001];
int n, i, j, temp;
int main() {
    scanf("%d", &n);
    for (i=1; i<=n; i++)
        scanf("%d", &a[i]);

    for(i=1; i<n; i++)
    {
// 이 부분에 들어가야 될 코드를 작성하여 제출
        for(int j=1; j<n; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for (i = 1; i <= n; i++)
        printf("%d\n", a[i]);
    return 0;
}
