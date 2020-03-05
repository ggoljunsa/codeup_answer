#include <stdio.h>
#include <string.h>

int main()
{
    char s[110];
    gets(s);
    int len = strlen(s);
    for(int i=0; i<len; i++){
        if(s[i]!=' ') printf("%c", s[i]);
    }

    return 0;
}
