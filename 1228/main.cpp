#include <bits/stdc++.h>
using namespace std;


double getbmi(double hei, double wei)
{
    double fw;
    if(hei<150) fw = (hei-100);
    else if(hei<160&&hei>=150) fw = (hei-150)/2+50;
    else if(hei>=160) fw = (hei-100)*0.9;
    double bmi = (wei-fw)*100/fw;
    return bmi;
}

int main()
{
    double hei, wei;
    scanf("%lf %lf", &hei, &wei);
    double bmi=getbmi(hei, wei);
    if(bmi<=10) printf("정상");
    else if(bmi<=20) printf("과체중");
    else printf("비만");
    return 0;
}
