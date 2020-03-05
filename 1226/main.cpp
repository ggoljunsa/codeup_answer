#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, cnt=0, flag = 0;
    int a[6], b[6];
    for(i=0; i<6; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &n);
    for(i=0; i<6; i++){
        scanf("%d", &b[i]);
    }
    for(i=0; i<6; i++){
        if(b[i]==n){
          flag = 1;
          b[i] = INT_MAX;
        }
    }
    sort(a, a+6);
    sort(b, b+6);
    for(i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(b[i]==a[j]) cnt++;
        }
    }

    if(cnt==5&&flag==1){ printf("2"); return 0;}
    switch(cnt)
    {
    case 6: printf("1"); break;
    case 5: printf("3"); break;
    case 4: printf("4"); break;
    case 3: printf("5"); break;
    default: printf("0"); break;
    }
    return 0;
}
