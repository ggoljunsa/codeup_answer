#include <bits/stdc++.h>
using namespace std;
int arr[100010];
int meem=INT_MAX, san = 0, ygi = 0;

bool cmp(const int &x, const int &y)
{
    int temp = abs(x+y);
    if(temp<meem){
        meem = temp;
        ygi = x;
        san = y;
    }
    return x<y;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+n, cmp);

//    for(int i=0; i<n-1; i++){
//        for(int j=i+1; j<n; j++){
//                int temp = abs(arr[i]+arr[j]);
//            if(temp<min){
//                min = temp;
//                ygi = arr[i];
//                san = arr[j];
//            }
//        }
//    }
    printf("%d %d", ygi<san ? ygi :san, san>ygi ?san : ygi);
    return 0;
}
