#include <bits/stdc++.h>
using namespace std;

char* nstr;

char *mysubstr(char *str, int start, int count)
{
    int pos = 0;
    nstr = (char*)malloc(count+1);
    for(int i=start; i<start+count; i++){
        nstr[pos++] = str[i];
    }
    nstr[start + count] = '\0';
    // 함수 처리부
    return nstr;
}

int main()
{
    char str[110];
    scanf("%s", str);
    int s, c;
    scanf("%d %d", &s, &c);
    
    printf("%s", mysubstr(str, s, c));
    free(nstr);
    return 0;
}