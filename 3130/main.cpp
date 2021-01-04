#include <bits/stdc++.h>
using namespace std;

stack<pair<long long int,long long int>> st;
int n, k;
long long int h[80080];
long long int cnt = 0;

int main()
{
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%lld", &h[i]);
    }

    for(int i=1; i<=n; i++){
        if(st.empty()){
            st.push(make_pair(i, h[i]));
            continue;
        }

        else if(st.top().second <= h[i]){
            while(st.top().second<=h[i]&&!st.empty()){
                st.pop();
            }
        }
        st.push(make_pair(i, h[i]));
        cnt+= st.top().first;
    }
    printf("%d", cnt);
}
