#include <bits/stdc++.h>
using namespace std;

int main()
{
    char word[110] = {};
    char a[110] = {};
    gets(word);
    int len = strlen(word);
    int cnt = 0;
    for(int i=0; i<len; i++){
        if(word[i]== ' '){}
        else if(word[i]==',') a[cnt++] = ' ';
        else if(word[i]==';') a[cnt++] = '\n';
        else a[cnt++] = word[i];
    }
    puts(a);
    return 0;
}
