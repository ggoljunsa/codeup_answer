#include <stdio.h>
#include <string.h>

int main()
{
    int one = 0; int two = 0;
    char word[210];
    scanf("%s", word);
    int len = strlen(word);
    for(int i=0; i<len; i++){
        if(word[i]=='c'||word[i]=='C'){
            if(word[i+1]=='c'||word[i+1]=='C'){
                one++;
                two++;

            }
            else one++;
        }
    }
    printf("%d\n%d", one, two);
    return 0;
}
