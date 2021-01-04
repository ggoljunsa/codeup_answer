#include <bits/stdc++.h>
using namespace std;

struct jungol
{
    char check;
    int num;
    char name[50];
    int index;
} a[20010], b[20010];

int n;

bool cmp(jungol x, jungol y)
{
    if (x.num > y.num)
        return false; //크기순으로 정렬
    else if (x.num < y.num)
        return true;
    if (x.index < y.index) // 이 상황들은 둘의 num값이 같은 경우
        return false;      //나중에 입력받은 친구가 같게 오도록
    else
        return true;
}

void input()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf(" %c %d %s", &a[i].check, &a[i].num, a[i].name);
        a[i].index = i; //인덱싱으로 번호를 매기기
    }
}

void process()
{
    int ind = 0;
    sort(a + 1, a + n + 1, cmp); //주어진 조건대로 정리한다. D도 섞여 있을 듯
    for (int i = 1; i <= n;)
    {
        bool _delete = false;
        bool able_input = true;
        int cnt = 0;
        jungol temp = a[i]; //구조체도 이렇게 복사가 가능하다
        while (temp.num == a[i].num && i <= n)
        {
            if (a[i].check == 'D')
            {
                _delete = true;
                able_input = false;
                i++;
                //cnt++;
            }
            else if (a[i].check == 'I' && _delete) //삭제할 구간 건너뛰기 구간
            {
                _delete = false;
                able_input = true;
                i++;
                cnt--;
            }
            else if (a[i].check == 'I' && able_input) //추가 값 입력하는 구간
            {
                ind++;
                b[ind] = a[i];
                i++;
            }
        }
    }
}

void output()
{
    for (int i = 1; i <= 5; i++)
    {
        int p;
        scanf("%d", &p);
        printf("%d %s\n", b[p].num, b[p].name);
    }
}

int main()
{
    input();
    process();
    output();
    return 0;
}