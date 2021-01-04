#include <bits/stdc++.h>
using namespace std;

int parent[1000001];
int size[1000001];
int n, m;


int find(int x)
{
    if(parent[x]==x) return x;
    return parent[x] = find(parent[x]);
}

void uni(int a, int b)
{
    if(find(a)==find(b)) return;
    if(size[find(a)]>size[find(b)])
        parent[find(b)] = find(a);
    if(size[find(a)]<size[find(b)])
        parent[find(a)] = find(b);
    if(size[find(a)] == size[find(b)])
    {
        parent[find(b)] = find(a); size[find(a)]++;
    }
}

int main()
{
    scanf("%d %d", &n, &m);
for(int i=1; i<=n; i++){
    parent[i] =i;
    size[i] = i;
}
    for(int i=1; i<=m; i++){
            int f, a, b;
        scanf("%d %d %d", &f, &a, &b);
        if(f==0){
            uni(a, b);
        }
        else{
            if(find(a)==find(b))
                printf("yes\n");
            else printf("no\n");
        }
    }
    return 0;
}
