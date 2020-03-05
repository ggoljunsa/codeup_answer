#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	b=b-c;
	if(a>b) printf("do not advertise");
	else if(b>a) printf("advertise");
	else printf("does not matter");
	return 0;
}
