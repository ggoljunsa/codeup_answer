#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; ; i++){
        int j=i;
        while(1)
        {
            printf("%d", i);
            j--;
            if(j==0) break;
        }

        if(i<=n){
            printf("\n");
            continue;
        }
        else
            break;

    }
}
