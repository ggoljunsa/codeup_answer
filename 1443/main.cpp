#include <stdio.h>
int a[10001];
int n, i, j, temp, key;
int main()
{
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (i=2; i<=n; i++)
    {
        key=a[i];
//// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
//        for(j=1; j<i; j++){
//            if(a[j]>key){
//                temp = a[j];
//                a[j] = a[i];
//                a[i] = temp;
//            }
//        }

        for(j=i-1; j>0 && a[j]>key ; j--)
            {
                a[j+1]=a[j];
            }
        a[j+1]=key;
    }

    for (i=1; i<=n; i++)
        printf("%d\n", a[i]);
    return 0;
}
