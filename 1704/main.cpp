#include <bits/stdc++.h>
using namespace std;

int main()
{
    char cd[14];
    gets(cd);
    int age;
    if(cd[7]=='3'||cd[7]=='4')
        age =(2012-(cd[0]-48)*10-(cd[1]-48))-2000+1;
    else    age =(2012-(cd[0]-48)*10-(cd[1]-48))-1900+1;
    if(cd[7]=='1'||cd[7]=='3'){
            printf("%d M", age);
    }
    else{
        printf("%d F", age);
    }
    return 0;

}
