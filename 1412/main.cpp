#include <bits/stdc++.h>
using namespace std;

char a[130];
char sen[100];

int main()
{
    char al = 'a';
     int str;
    gets(sen);
    str = strlen(sen);
    for(int i=0; i<str; i++){
      a[sen[i]]++;
    }
    for(int i=97; i<=122; i++){
        printf("%c:%d\n", i, a[i]);
    }
    return 0;
}
