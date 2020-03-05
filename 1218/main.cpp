#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[3];
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	sort(a, a+3);
	if(a[0]==a[1]&&a[1]==a[2]) printf("Á¤»ï°¢Çü");
	else if(a[2]>a[0]+a[1]) printf("»ï°¢Çü¾Æ´Ô");
	else if(a[0]==a[1]||a[1]==a[2]) printf("ÀÌµîº¯»ï°¢Çü");
	else if(a[2]*a[2]==a[1]*a[1]+a[0]*a[0]) printf("Á÷°¢»ï°¢Çü");
	else printf("»ï°¢Çü");
	return 0;
}
