#include <iostream>
using namespace std;
int ss[16][16] = {};

int SuperSum(int k, int n)
{
    if(k==0) return n;
    if(ss[k][n]!=0) return ss[k][n];

    if(ss[k][n]==0){
        for(int j=1; j<=n; j++){
            ss[k][n] += SuperSum(k-1, j);
        }
        return ss[k][n];
    }
}

int main()
{
    int k, n;
    while( scanf("%d %d", &k, &n) != EOF )
	printf("%d\n", SuperSum(k, n));
}
