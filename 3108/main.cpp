#include <bits/stdc++.h>
using namespace std;

struct data
{
    char c;
    int num;
    char word[40];
    bool dbld = false;
};

struct data pep[110];
struct data a[5];
int rgh[5];

bool snum(int num, int i)
{
    for(int j=0; j<i; j++)
    {
        if(pep[j].num==num)
            return false;
    }
    return true;
}

bool isloc(int loc)
{
    for(int i=0; i<5; i++){
        if(rgh[i]==loc) return true;
    }
     return false;
}

bool comp1(const data &a, const data &b){
    return a.num<b.num;
}

int main()
{
    int num;
    int n;
    char c;
    char word[20];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf(" %c %d %s", &c, &num, word);
        if(c == 'I')
        {
            if(snum(num, i)){
                pep[i].c = c;
                pep[i].num = num;
                strcpy(pep[i].word, word);
                pep[i].dbld = true;
            }

        }
        else if (c=='D')
        {
            for(int j=0; j<i; j++){
                if(pep[j].num==num){
                    pep[j].dbld = false;
                    pep[j].num = 0;
                }
            }
        }
    }
    sort(pep, pep+n, comp1);

    for(int i=0; i<5; i++){
        scanf("%d", &rgh[i]);
    }
    int loc = 0;
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(pep[i].dbld){
            loc++;
        if(isloc(loc)){
            a[cnt].c = 'I';
            a[cnt].num = pep[i].num;
            strcpy(a[cnt].word, pep[i].word);
            cnt++;
        }
        }
    }

    for(int i=0; i<5; i++){
        printf("%d %s\n", a[i].num, a[i].word);
    }
    return 0;
}
