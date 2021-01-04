#include <bits/stdc++.h>
using namespace std;

int n, k;

stack<pair<int, int>> st;

int main()
{
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &k);
        while(!st.empty()){
            if(st.top().second>k){
                printf("%d ", st.top().first);
                break;
            }
            else{
               st.pop();
            }
        }
        if(st.empty()) printf("0 ");
        st.push(make_pair(i, k));
    }
    return 0;
}
