#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    stack <char> s;
    bool good = true;
    getline(cin, str);
    for(int i=0; i<str.size(); i++){
        char temp = str[i];
        if(temp == ')'){
            if(s.size()<1){
                good = false;
                break;
            }
            else s.pop();
        }else if(temp == '('){
            s.push(temp);
        }
    }
    if(s.size()>0) good = false;

    if(good) printf("good\n");
    else printf("bad");
    return 0;
}