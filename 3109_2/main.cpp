#include <bits/stdc++.h>
using namespace std;
#define N 5

struct jungol{
    char c;
    int no;
    char name[15];
};

struct jungol box[20020];
struct jungol temp;
int bnum = 0;

void input(int num){
    box[num].c = temp.c;
    box[num].no = temp.no;
    strcpy(box[num].name, temp.name);
    return;
}
bool comp1(const jungol &a, const jungol &b)
{
    if(a.no == 0) return false;
    if(b.no == 0) return true;
    else return a.no<b.no;
}

void ckNdel(struct jungol x){
    int deled_num = 0;
    int maxdel = -1;
    stable_sort(box, box+bnum, comp1);
    for(int i=0; i<bnum; i++){
        if(x.no == box[i].no)
            if(i>maxdel) maxdel = i;
        //printf("%c %d %s\n", box[i].c, box[i].no, box[i].name);
    }
    if(maxdel>-1){
        box[maxdel].c = '\0';
        strcpy(box[maxdel].name,"");
        box[maxdel].no = 0;
        deled_num++;
    }
    stable_sort(box, box+bnum, comp1);
    bnum-=deled_num;
    return;
}


int main()
{
    int n;
    int right_num[20020];
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf(" %c %d %s", &temp.c, &temp.no, temp.name);
        if(temp.c == 'I'){
            input(bnum);
            bnum++;
        }
        else if(temp.c == 'D'){
            ckNdel(temp);
        }

    }
    stable_sort(box, box+bnum, comp1);

    //for(int i=0; i<bnum; i++)
    //    printf("* %c %d %s\n", box[i].c, box[i].no, box[i].name);

    for(int i=0; i<N; i++)
        scanf("%d", &right_num[i]);
    for(int i=0; i<N; i++)
        printf("%d %s\n", box[right_num[i]-1].no,
               box[right_num[i]-1].name);
    return 0;
}

