#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, flag = 0;
	scanf("%d %d", &a, &b);

	if ( a%4==0 && a%100!=0 )
		flag=1;
	else if ( a%400 == 0 )
		flag=1;
	if(flag){
        switch(b)
        {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31"); break;
    case 2: printf("29"); break;
    case 4: case 6: case 9: case 11:
        printf("30"); break;
        }
	}
	else{
        switch(b)
        {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31"); break;
    case 2: printf("28"); break;
    case 4: case 6: case 9: case 11:
        printf("30"); break;
        }
	}
	return 0;
}
