#include <bits/stdc++.h>
using namespace std;

int main()
{
    char word[3][30];
    int len[3];
    for(int i=0; i<3; i++){
        scanf("%s", word[i]);
        len[i] = strlen(word[i]);
    }
    if(word[0][0]==word[2
       ][5]){
            if(word[0][len[0]]==word[1][0]){
                if(word[1][len[1]]==word[2][0]){
                    printf("good");
                    return 0;
                }
            }
    }
    else printf("bad");
    return 0;
}
