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
        return false; //ũ������� ����
    else if (x.num < y.num)
        return true;
    if (x.index < y.index) // �� ��Ȳ���� ���� num���� ���� ���
        return false;      //���߿� �Է¹��� ģ���� ���� ������
    else
        return true;
}

void input()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf(" %c %d %s", &a[i].check, &a[i].num, a[i].name);
        a[i].index = i; //�ε������� ��ȣ�� �ű��
    }
}

void process()
{
    int ind = 0;
    sort(a + 1, a + n + 1, cmp); //�־��� ���Ǵ�� �����Ѵ�. D�� ���� ���� ��
    for (int i = 1; i <= n;)
    {
        bool _delete = false;
        bool able_input = true;
        int cnt = 0;
        jungol temp = a[i]; //����ü�� �̷��� ���簡 �����ϴ�
        while (temp.num == a[i].num && i <= n)
        {
            if (a[i].check == 'D')
            {
                _delete = true;
                able_input = false;
                i++;
                //cnt++;
            }
            else if (a[i].check == 'I' && _delete) //������ ���� �ǳʶٱ� ����
            {
                _delete = false;
                able_input = true;
                i++;
                cnt--;
            }
            else if (a[i].check == 'I' && able_input) //�߰� �� �Է��ϴ� ����
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