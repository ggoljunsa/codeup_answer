#include <bits/stdc++.h>
using namespace std;

int main()
{
    int g;
    scanf("%d", &g);
    if(g<=10) printf("정상");
    else if(g<=20) printf("과체중");
    else printf("비만");
    return 0;
}
