#include <bits/stdc++.h>
using namespace std;
int d[1010];
void swap(int &x, int &y)
{
    int z;
    z = x;
    x = y;
    y = z;
}

bool sorted(int n)
{
    for(int i=0; i<n-1; i++){
        if(d[i]>d[i+1]) return false;
    }
    return true;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &d[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(d[j]>d[j+1])
                swap(d[j], d[j+1]);
        }
        if(sorted(n)){
            printf("%d", i+1);
            break;
        }
    }
    return 0;
}
