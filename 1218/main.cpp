#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[3];
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	sort(a, a+3);
	if(a[0]==a[1]&&a[1]==a[2]) printf("���ﰢ��");
	else if(a[2]>a[0]+a[1]) printf("�ﰢ���ƴ�");
	else if(a[0]==a[1]||a[1]==a[2]) printf("�̵�ﰢ��");
	else if(a[2]*a[2]==a[1]*a[1]+a[0]*a[0]) printf("�����ﰢ��");
	else printf("�ﰢ��");
	return 0;
}
