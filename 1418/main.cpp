#include <bits/stdc++.h>
using namespace std;

int main()
{
    char word[20];
    scanf("%s", word);
    int len = strlen(word);
    for(int i=0; i<len; i++){
        if(word[i]=='t')
            printf("%d ", i+1);
    }
    return 0;
}
