#include <stdio.h>

double x;

long long int f(double n)
{
    long long int x = (long long int)(n);
    double r = n-(double)x;;
    if(r>0)return x;
    else if(r<0) return x-1;
    else return x;
}

// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%lf", &x);
  printf("%lld\n", f(x));
}
