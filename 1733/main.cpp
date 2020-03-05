#include <bits/stdc++.h>
using namespace std;

int main()
{
    char word[4];
    char ioi[4] = {'I', 'O', 'I'};
    scanf("%s", word);
    if(!strcmp(word, ioi)){
        printf("IOI is the International Olympiad in Informatics.");
    }
    else
        printf("I don't care.");
    return 0;
}
